#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#define	N	100

int main(int argc, char *argv[])
{
#undef N
#define N	10
	PN(N);
    return 0;
}
