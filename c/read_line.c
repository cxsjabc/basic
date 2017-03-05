#include "common_local.h"

int read_line(char *s, const int max_size)
{
	char ch;
	int i = 0;

	if(max_size < 2) {
		s[0] = '\0';
		return 0;
	}
	while(isspace(ch = getchar())) ;	

	do {
		s[i++] = ch;
		if(ch == '\n')
			break;
	} while(!isspace(ch = getchar()) && i < max_size - 1);

	s[i] = '\0';
	return i;
}


int main()
{
	int n;
	char s[12];

	n = read_line(s, 10);
	printf("%s %d\n", s, n);

    return 0;
}
