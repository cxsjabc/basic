/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>
#include <string.h>

int get_line(char *s, int max_len)
{
	int c;
	int i;

	i = 0;
	while((c = getchar()) != EOF) {
		if (i < max_len - 1) {
			s[i++] = c;
			if(c == '\n') {
				s[i++] = '\0';
				break;
			}
		} else {
			s[i++] = '\0';
			break;
		}
	}
	return i;
}

void copy(char *dest, char *src)
{
	while(*dest++ = *src++)
		;
}

void get_max_line()
{
	char *s, buf[128], max_buffer[128];
	int max;
	int max_len = 128;

	max = 0;
	//while(getline(&s, &max_len, stdin) > 0) {
	while(get_line(buf, max_len) > 0) {
		int len;

		//len = strlen(s);
		len = strlen(buf);
		if(len > max) {
			max = len;
			copy(max_buffer, buf);
		}
	}
	printf("max len line:%s\n", max_buffer);
}

int main(int argc, char *argv[])
{
	get_max_line();
	return 0;
}
