#include <iostream>

using namespace std;

int main()
{
	int *p;
	int i, j;

	p = new int[1025];
	memset(p, 0, 1025 * sizeof(int));
	
	delete p;
	delete (p + 1);	// pointer being freed was not allocated

	cin >> i;

	return 0;
}
