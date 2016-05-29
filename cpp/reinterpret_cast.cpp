#include <iostream>

using namespace std;


int main()
{
	int n = 1;
	double d = static_cast<double>(n);
	cout << d << endl;	

	double *pd = reinterpret_cast<double *>(&n);

	cout << *pd << endl;	

	return 0;
}
