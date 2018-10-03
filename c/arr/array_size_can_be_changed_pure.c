#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void test(int n)
{
	int arr[n];
	int i;

	for(i = 0; i < n; ++i)
		arr[i] = i + 1;
}

int main(int argc, char *argv[])
{
	int n;
	
	scanf("%d", &n);

	test(n);
    return 0;
}
