
// xichen 2014-08-17 10:40:55

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

#include "ref.h"

class student : public ref_base
{
public:
	student(int age = 27):age(age) { cout << "student ctor: " << this << endl; }
	~student() { cout << "~ student: " << this << endl;  }
	void show() const { cout << "Age:" << age << "." << endl;  }

private:
	int age;
};

#endif
