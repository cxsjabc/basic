#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> l;
	list<int>::iterator it;

	for(int i = 1; i <= 2; ++i)
		l.push_back(i);

	it = l.begin();
	cout << *it << endl;
	++it;
	cout << *it << endl;
	l.erase(it++);
	cout << *it << endl;

	return 0;
}
