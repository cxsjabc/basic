#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int i;
	char c;
	int j;

	i = 1;
	c = 'a';
	j = 2;

	PP(&i);
	PP(&c);
	PP(&j);	// why the difference between j's and c's addr is not 4? 
	return 0;
}
