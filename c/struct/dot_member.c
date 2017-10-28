#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

struct student
{
	int 	age;
	char 	name[16];
};

int main()
{
	struct student s = {.name = "xi", .age = 18};
	struct student s1 = {.age = 18, .name = "eyu"};

	printf("name:%s, age:%d\n", s.name, s.age);
	printf("name:%s, age:%d\n", s1.name, s1.age);
	
    return 0;
}
