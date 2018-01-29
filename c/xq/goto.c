#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int i = 1;

	if(i > 0)
		goto end;
	printf("now i am here!\n");
    return 0;

end:
	printf("end\n");
    return -1;
}
