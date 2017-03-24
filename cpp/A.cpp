#include <iostream>

using namespace std;

class A
{
public:
	A() { cout << "A construct!" << endl; }
	~A() { cout << "A deconstruct!" << endl; }
};

class B : public A
{
public:
	B() { cout << "B construct!" << endl; }
	~B() { cout << "B deconstruct!" << endl; }
};

int main()
{
	A *obj = new B();
	delete obj;
	
	return 0;
}
