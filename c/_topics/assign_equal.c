#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int a = 1, b = 1;

	/* otool -vt xx.elf | grep -A 30 _main */
	if (a = b)
		goto end;
	if (a == b)
		goto end;

end:
	return 0;
}
