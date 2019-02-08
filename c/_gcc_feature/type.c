#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define min_type(type, x, y)	\
({type __x = (x); type __y = (y); __x < __y ? __x : __y;})

#define min(x, y)	\
({	\
	typeof(x) __x = (x);	\
	typeof(y) __y = (y);	\
	(&__x == &__y);	\
	__x < __y ? __x : __y;	\
})

int main(int argc, char *argv[])
{
	printf("%d", min(2, 1));
    return 0;
}
