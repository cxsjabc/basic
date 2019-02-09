#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#include "print.h"

typedef struct
{
	int a;
	char data[0];
} s;

int main(int argc, char *argv[])
{
	s *ps;
	int len;

	PUL(sizeof(s));

	len = 12;	
	ps = (s *)malloc(sizeof(s) + len);

	PP(ps->data);
	strcpy(ps->data, "cat");

	PS(ps->data);
	
	free(ps);

    return 0;
}
