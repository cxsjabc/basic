#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#ifdef MTK
#define	VENDOR	"mtk"	
#elif defined(HUAWEI)
#define	VENDOR	"huawei"
#else
#define	VENDOR	"unknown"
#endif


int main(int argc, char *argv[])
{
	PS(VENDOR);
    return 0;
}
