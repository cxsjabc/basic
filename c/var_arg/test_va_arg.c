#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define debug(fmt, ...)		printf(fmt, ##__VA_ARGS__)
#define debug1(fmt, ...)	printf(fmt, __VA_ARGS__)
#define debug2(fmt, ...)	printf(fmt __VA_ARGS__)
#define debug3(fmt...)		printf(fmt, ##__VA_ARGS__)
#define debug4(...)		printf(__VA_ARGS__)

int main(int argc, char *argv[])
{
	//debug("hello, %s\n", "cat");
	//debug1("hello, %s\n", "cat");
	//debug1("hello\n");
	//debug2("hello, %s\n", "cat");
	//debug3("hello, %s\n", "cat");
	debug4("hello, %s\n", "cat");
    return 0;
}
