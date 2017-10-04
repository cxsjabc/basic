#include <stdio.h>
#include <unistd.h>

int main()
{
	char *p;
	char buf[128] = {0};
	
	//buf[4] = 'a';
	while((p = fgets(buf, 4, stdin)) != NULL) {
		printf("buf:|%s|\n", buf);
	}
	printf("buf:|%s|\n", buf);

    return 0;
}
