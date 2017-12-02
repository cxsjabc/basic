#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int sock;
	int cnt = 0;

	while(1) {
		sock = socket(AF_UNIX, SOCK_STREAM, 0);		
		if(sock == -1)
			break;
		else
			++cnt;
	}
	
	printf("max socket count is:%d\n", cnt);	 // my result: 253
    return 0;
}
