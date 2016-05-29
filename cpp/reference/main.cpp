
// xichen 2014-08-17 10:40:55

#include "ref.h"
#include "student.h"

#define PF		cout << "func: " << __func__ << ",line:" << __LINE__ << endl;
#define WAIT	while(1) {  }

int main()
{
	student *ps = new student(27);
	student *ps1 = new student(27);

	sp<student> s(ps);
	sp<student> s1(ps1);
	cout << s.get_ref_cnt() << endl;
	cout << s1.get_ref_cnt() << endl;
	s1 = s;
	cout << s.get_ref_cnt() << endl;
	cout << s1.get_ref_cnt() << endl;
	//WAIT
	return 0;
}
