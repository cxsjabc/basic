#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

void test_chinese_char()
{
	unsigned char s[] = "猫";
	int i;

	for(i = 0; i < strlen(s); ++i)
		printf("%#x ", s[i]);
}

int main(int argc, char *argv[])
{
	int ret;

	test_chinese_char();
	ret = printf("123");
	PD(ret);
	ret = printf("猫");
	PD(ret);
	ret = printf("%x", 123);
	PD(ret);
	ret = printf("\u732B");
	PD(ret);
	ret = printf("\x73\x2B");
	PD(ret);

    return 0;
}
