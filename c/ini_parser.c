#include <stdio.h>

char * skip_blank(char *p)
{
	while(*p && *p == ' ') ++p;
	if(!*p)
		return NULL;
	return p;
}

char *get_char_pointer(char *s, char ch)
{
	while(*s && *s != ch) ++s;
	if(!*s)
		return NULL;
	return s;
}

int parse_line(char *buf, char **key, char **value)
{
	char *first_non_blank = buf;
	char *char_equal;
	char *char_end;
	printf("line: %s\n", buf);

	// the first char of key
	first_non_blank = skip_blank(buf);
	if(!first_non_blank)
		goto end;
	if(*first_non_blank == '\n')
		return -1;
	// char '='
	char_equal = first_non_blank + 1;
	char_equal = get_char_pointer(char_equal, '=');
	if(!char_equal)
		goto end;
	*char_equal = '\0';

	// the end of value
	char_end = get_char_pointer(char_equal + 1, '\n');
	if(!char_end)
		*char_end = '\0';

	// return the key and value
	*key = first_non_blank;
	*value = char_equal + 1;
	printf("key:%s, value:%s\n", first_non_blank, char_equal + 1);
	return 0;
end:
	return -1;
}

int main()
{
	FILE *fp;
	char buf[1024];
	char *p;

	fp = fopen("test.ini", "r");
	if(!fp){
		fprintf(stderr, "fopen file failed\n");
		return -1;
	}	
	
	while(!feof(fp)){
		p = fgets(buf, 1024, fp);
		if(!p && ferror(fp)){
			fprintf(stderr, "read file failed\n");
			goto end;
		}else if(!p && feof(fp)){
			break;
		}else {
			char *key;
			char *value;
			int ret;
			ret = parse_line(buf, &key, &value);
			if(ret < 0){
				printf("parse line error...\n");
				continue;  
			}else {
				printf("key:%s, value:%s\n", key, value);
			}
		}
	}

end:
	if(fp)
		fclose(fp);

	return 0;
}
