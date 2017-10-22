#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int average(int cnt, ...)
{
	int i = 0;
	va_list ap;
	int sum;
	if(cnt <= 0)
		return -1;	// means error: TODO: improve it!

	sum = 0;
	va_start(ap, cnt);
	while(i < cnt) {
		sum += va_arg(ap, int);		// overflow?
		++i;
	}
	va_end(ap);
	return sum / cnt;
}


int main()
{
	PD(average(0, 10));
	PD(average(1, 10));
	PD(average(2, 10, 20));
	PD(average(3, 10, 20, 30));
    return 0;
}
