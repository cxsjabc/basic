#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#ifdef MAIN_RET_INT
int main(int argc, char *argv[])
#else
void main(int argc, char *argv[])
#endif
{
    printf("hello, my cat\n");
#ifdef MAIN_RET_INT
	return 0;
#endif
}
