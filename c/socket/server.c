#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int serv_sock, client_sock;
	struct sockaddr_un serv_addr, client_addr;
	unsigned int serv_len, client_len;
	int cnt = 0;

	unlink("server_socket");
	serv_sock = socket(AF_UNIX, SOCK_STREAM, 0);

	serv_addr.sun_family = AF_UNIX;
	strcpy(serv_addr.sun_path, "server_socket");
	serv_len = sizeof(serv_addr);

	bind(serv_sock, (struct socketaddr *)&serv_addr, serv_len);

	listen(serv_sock, 5);


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
		read(client_sock, &ch, 1);
		ch++;
		write(client_sock, &ch, 1);
		close(client_sock);
	}

    return 0;
}
