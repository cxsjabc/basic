#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

extern char **environ;

// should be: environ > &i > p > &gb > &gi 

int gi = 0xFF;
int gb;

int main(int argc, char *argv[])
{
	int i;
	void *p;

	p = malloc(10);

	PP(&i);
	PP(p);
	PP(&gi);
	PP(&gb);
	PP(environ);

    return 0;
}
