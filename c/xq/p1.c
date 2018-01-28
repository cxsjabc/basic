#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/*
00001f41	movl	$0x12345678, %ebx
00001f46	movl	$0x0, -0x10(%ebp)
00001f4d	movl	%edx, -0x14(%ebp)
00001f50	movl	%ecx, -0x18(%ebp)
00001f53	movl	$0xfffefdfc, -0x1c(%ebp)
*/

int main(int argc, char *argv[])
{
	int i = 0xFFFEFDFC;
	int *pi = 0x12345678;

	printf("&i:%p, &pi:%p\n", &i, &pi);
    return 0;
}
