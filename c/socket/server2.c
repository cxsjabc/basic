#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int serv_sock, client_sock;
	struct sockaddr_in serv_addr, client_addr;
	unsigned int serv_len, client_len;
	int cnt = 0;
	int res;
	int backlog = 1;

	if(argc > 1)
		backlog = atoi(argv[1]);
	printf("server is running: backlog:%d\n", backlog);

	unlink("server_socket");
	serv_sock = socket(AF_INET, SOCK_STREAM, 0);

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	serv_addr.sin_port = htons(9734);
	serv_len = sizeof(serv_addr);

	res = bind(serv_sock, (struct socketaddr *)&serv_addr, serv_len);
	assert(res != -1);

	res = listen(serv_sock, backlog);
	assert(res != -1);


	while(1) {
		char ch;
		printf("server waiting...\n");
		client_len = sizeof(client_addr);
		client_sock = accept(serv_sock, (struct sockaddr*)&client_addr, &client_len);
		if(client_sock == -1) {
			perror("accept error!");
			break;
		}
		printf("\t accept client cnt:%d\n", ++cnt);
		sleep(10);	// for test listen(backlog)
		read(client_sock, &ch, 1);
		ch++;
		write(client_sock, &ch, 1);
		close(client_sock);
	}

    return 0;
}
