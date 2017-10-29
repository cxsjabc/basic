#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#include "common_local.h"

#define  	RWRWRW	(S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH)

int main()
{
	mode_t mode;

	mode = umask(0);
	PD(mode);

	if(creat("out1", RWRWRW) < 0)
		err_exit("creat file out1");		

	mode = umask(S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
	PD(mode);
	if(creat("out2", RWRWRW) < 0)
		err_exit("creat file out2");		

    return 0;
}
