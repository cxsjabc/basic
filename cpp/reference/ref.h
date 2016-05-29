// xichen 2014-08-17 10:40:55

#ifndef REF_H
#define REF_H

#include <stdlib.h>
#include <iostream>
using namespace std;

#define PF		cout << "func: " << __func__ << ",line:" << __LINE__ << endl;
class ref_base
{
public:
	ref_base():ref_cnt(0) {}
	int get_ref_cnt() { return ref_cnt; }
	int add_ref() {return ++ref_cnt; };
	int dec_ref() {return --ref_cnt;};
	void reset_ref() { ref_cnt = 0; }
private:
	int ref_cnt;
};

template <typename T>
class sp
{
public:
	sp(T *p = NULL)
	{
		_p = p;
		if(_p)
		{
			_p->add_ref();
		}
	}
	
	sp(const sp& obj)
	{
		if(this == &obj)
			return;
		_p = obj._p;
		if(_p)
			_p->add_ref();
	}

	sp & operator=(const sp& obj)
	{
		PF
		if(this == &obj)
			return *this;
		if(_p && _p->dec_ref() == 0)
		{
			cout << "ref cnt:" << _p->get_ref_cnt() << endl;
			delete _p;
		}
		_p = obj._p;
		//_p->reset_ref();
		_p->add_ref();
		PF
		return *this;
	}

	virtual ~sp()
	{
		cout << "~sp: " << this << ", " << _p->get_ref_cnt() << endl;
		if(!_p)
			return;
		int ref_cnt = _p->get_ref_cnt();
		--ref_cnt;
		if(ref_cnt > 0)
			cout << "ref_cnt is " << ref_cnt << ", so not delete it" << endl;
		if(ref_cnt == 0)
		{
			cout << "truly delete the object:" << _p << endl;
			delete _p;  // originally, it's delete this;  cause forever loop
		}
	}
	
	int get_ref_cnt() const 
	{
		return _p->get_ref_cnt();
	}

private:
	T * _p;
};

#endif
