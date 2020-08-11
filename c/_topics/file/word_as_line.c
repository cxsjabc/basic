/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
// 以每行一个单词的形式打印输入
#include <stdio.h>

int main(int argc, char *argv[])
{
	int c;
	int in;

	in = 0;
	while((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if(in == 1)
				putchar('\n');
			in = 0;
		} else {
			in = 1;
			putchar(c);
		}
	}
	return 0;
}
