#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <sys/un.h>

#include "common_local.h"

int main()
{
	int sockfd;
	struct sockaddr_in addr;
	size_t len;
	int res;
	int ch = 'A';

	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	addr.sin_port = htons(9734);	// can't use htonl, because sin_port is 16bit
	len = sizeof(addr);

	res = connect(sockfd, (struct sockaddr *)&addr, len);	
	PD(res);
	if(res == -1) {
		perror("connect failed:");
		return -1;
	}

	write(sockfd, &ch, 1);
	read(sockfd, &ch, 1);
	printf("char from server is:%c\n", ch);
	
	close(sockfd);
    return 0;
}
