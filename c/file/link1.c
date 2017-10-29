#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;

	res = linkat(0, "in", 0, "in_link", 0);	// error
	PE(res, "maomao get a error!");
	res = linkat(0, "~/codes/basic/c/file/in", 0, "~/codes/basic/c/file/in_link", 0);	// error
	PE(res, "maomao get a error!");
	res = linkat(0, "/Users/xichen/codes/basic/c/file/in", 0, "/Users/xichen/codes/basic/c/file/in_link", 0);  // ok for me
	PE(res, "maomao get a error!");

    return 0;
}
