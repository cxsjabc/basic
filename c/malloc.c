#include <stdio.h>
#include <utime.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>

#define P_D(n)	printf(#n " %d\n", (n))

#define FILE_NAME	"hello.c"

void	*	cc_malloc_adjust(size_t size)
{
	void * ret;
	do {
		ret = malloc(size);
		if(ret)
			break;
		size >>= 1;
	}while(ret == NULL && size > 0);
	
	if(size == 0)
		return NULL;
	return ret;
}

int main()
{
	int ret;
	void * p;
#if 0
	p = cc_malloc_adjust(2000 * 1000 * 1000);
    printf("%p\n", p != NULL ? p : 0);
#endif

#if 1
	p = NULL;
	free(p);
	p = (int *)1;
	free(p);
#endif
	
    return 0;
}
