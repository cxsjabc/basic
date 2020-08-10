/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int nl, nw, nc;
	int c;
	int state;

	state = 1;
	nl = nw = nc = 0;
	while((c = getchar()) != EOF) {
		++nc;

		if(c == '\n')
			++nl;
		if (c == ' ' || c == '\t' || c == '\n') {
			state = 1;
		} else if(state == 1) {
			state = 0;
			++nw;
		}
	}
	printf("%d %d %d\n", nc, nw, nl);

	return 0;
}
