#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <sys/un.h>

#include "common_local.h"

int main()
{
	int sockfd;
	struct sockaddr_un addr;
	size_t len;
	int res;
	int ch = 'A';

	sockfd = socket(AF_UNIX, SOCK_STREAM, 0);
	addr.sun_family = AF_UNIX;
	strcpy(addr.sun_path, "server_socket");
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
