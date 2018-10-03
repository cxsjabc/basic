#include <iostream>

using namespace std;

int main()
{
	int *p;
	int i, j;

	i = 1000;
	while(i--) {
		p = new int[1025];
		memset(p, 0, 1025 * sizeof(int));
		delete [] p;
	}

	cin >> i;

	return 0;
}
