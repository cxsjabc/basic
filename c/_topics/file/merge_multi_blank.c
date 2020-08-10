/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int c;
	int flag;

	flag = 0;
	while((c = getchar()) != EOF) {
		if (c == ' ') {
			if (!flag) {
				putchar(c);
				flag = 1;
			}
			else
				continue;
		} else {
			putchar(c);
			flag = 0;
		}
	}
	return 0;
}
