#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	PD(sizeof(char));
	PD(sizeof('a'));
	return 0;
}
