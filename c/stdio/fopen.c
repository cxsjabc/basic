#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

char *mode_to_str(int mode)
{
	char *p;

	switch(mode) {
		case 1:
			p = "r";
			break;
		case 2:
			p = "rb";
			break;
		case 3:
			p = "w";
			break;
		case 4:
			p = "wb";
			break;
		case 5:
			p = "a";
			break;
		case 6:
			p = "ab";
			break;
		case 7:
			p = "r+";
			break;
		case 8:
			p = "r+b";
			break;
		case 9:
			p = "rb+";
			break;
		case 10:
			p = "w+";
			break;
		case 11:
			p = "w+b";
			break;
		case 12:
			p = "wb+";
			break;
		case 13:
			p = "a+";
			break;
		case 14:
			p = "a+b";
			break;
		case 15:
			p = "ab+";
			break;
		default:
			p = "r";
			break;
	}
	return p;
}

int main(int argc, char *argv[])
{
	FILE *fp;
	int mode = 0;
	char *file;
	char *modep;

	if(argc != 3)
		return -1;

	file = argv[1];
	if(strcmp(argv[2], "r") == 0)
		mode = 1;
	else if(strcmp(argv[2], "rb") == 0)
		mode = 2;
	else if(strcmp(argv[2], "w") == 0)
		mode = 3;
	else if(strcmp(argv[2], "wb") == 0)
		mode = 4;
	else if(strcmp(argv[2], "a") == 0)
		mode = 5;
	else if(strcmp(argv[2], "ab") == 0)
		mode = 6;
	else if(strcmp(argv[2], "r+") == 0)
		mode = 7;
	else if(strcmp(argv[2], "r+b") == 0)
		mode = 8;
	else if(strcmp(argv[2], "rb+") == 0)
		mode = 9;
	else if(strcmp(argv[2], "w+") == 0)
		mode = 10;
	else if(strcmp(argv[2], "w+b") == 0)
		mode = 11;
	else if(strcmp(argv[2], "wb+") == 0)
		mode = 12;
	else if(strcmp(argv[2], "a+") == 0)
		mode = 13;
	else if(strcmp(argv[2], "a+b") == 0)
		mode = 14;
	else if(strcmp(argv[2], "ab+") == 0)
		mode = 15;
	else
		printf("wrong mode:%s\n", argv[2]);
	if(mode < 1 || mode > 15)
		return -1;

	// i just want to do this exchange: mode and str
	// if you like: just use argv[2].	
	modep = mode_to_str(mode);
	printf("mode:%s\n", modep);
	fp = fopen(file, modep);
	PP(fp);
	if(fp == NULL)
		perror("fopen failed:");

	fclose(fp);
    return 0;
}
