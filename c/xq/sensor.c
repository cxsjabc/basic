#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

struct sensor
{
	int id;
	char name[32];
	long extra;
};

void	dump_sensor(struct sensor *s)
{
	printf("sensor info: ----\n");
	printf("\tid:%d\n", s->id);
	printf("\tname:%s\n", s->name);
	printf("\textra:%ld\n", s->extra);
	printf("sensor info end.\n");
}

int main(int argc, char *argv[])
{
	struct sensor s;

	s.id = 1;
	strcpy(s.name, "bigsensor");
	s.extra = 0;

	dump_sensor(&s);
    return 0;
}
