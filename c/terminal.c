#include <stdio.h>
#include <termios.h>
#include <unistd.h>

int main()
{
    printf("hello eyu\n");
	struct termios info;
	int result = tcgetattr(1, &info);
    printf("%d\n", result);
	return 0;
}
