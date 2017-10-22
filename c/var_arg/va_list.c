#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	usage_err("just test a usage error:eyu no:%d!\n", 1);
    return 0;
}
