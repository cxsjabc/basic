/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int get_line(char **s)
{
#define BUF_UNIT	128	
	int c;
	int i, size;
	char *p;

	i = 0;
	p = (char *)malloc(BUF_UNIT);
	if(!p)
		return -1;
	size = BUF_UNIT;
	while((c = getchar()) != EOF) {
		if (i < size - 1) {
			p[i++] = c;
			if(c == '\n') {
				p[i++] = '\0';
				break;
			}
		} else {
			char *temp;
			temp = realloc(p, size * 2);
			if(!temp) {
				free(p);
				return -1;
			}
			p = temp;
			size *= 2;
			p[i++] = c;
		}
	}

	*s = p;
	return i;
}

void copy(char *dest, char *src)
{
	while(*dest++ = *src++)
		;
}

void get_max_line()
{
#define STATIC_BUF_LEN 128
	char *buf;
	int max;
	char static_buf[STATIC_BUF_LEN];
	char *max_len_buf, *dynamic_buf;

	max = 0;
	while(get_line(&buf) > 0) {
		int len;

		len = strlen(buf);
		if(len > max) {
			if(max >= STATIC_BUF_LEN)
				free(max_len_buf);
			max = len;
			if(len < STATIC_BUF_LEN)
				max_len_buf = static_buf;
			else {
				dynamic_buf = (char *)malloc(len + 1);
				if(!dynamic_buf) {
					printf("fatal error!\n");
					return;
				}
				max_len_buf = dynamic_buf;
			}
			copy(max_len_buf, buf);
			free(buf);
		}
	}
	printf("max len line:%s\n", max_len_buf);
}

int main(int argc, char *argv[])
{
	get_max_line();
	return 0;
}
