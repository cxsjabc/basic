/**
* Tcp Server program, It is a simple example only.
* zhengsh 200520602061 2
* when client connect to server, send a welcome message and timestamp in server.
*/
#include <stdio.h>
#include <sys/socket.h>
#include <unistd.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <time.h>
#include <arpa/inet.h>
#define SERVER_PORT 20000 // define the defualt connect port id
#define LENGTH_OF_LISTEN_QUEUE 10 //length of listen queue in server
#define BUFFER_SIZE 255
#define WELCOME_MESSAGE "welcome to connect the server. "

#define LOG(log)		fprintf(stderr, #log "\n");

int main(int argc, char **argv)
{
	int servfd,clifd;
	int cnt = 0;
	fd_set read_set, ready_set;

	struct sockaddr_in servaddr,cliaddr;
	if ((servfd = socket(AF_INET,SOCK_STREAM,0)) < 0)
	{
		printf("create socket error!\n");
		exit(1);
	}
	bzero(&servaddr,sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(SERVER_PORT);
	servaddr.sin_addr.s_addr = htons(INADDR_ANY);
	if (bind(servfd,(struct sockaddr*)&servaddr,sizeof(servaddr))<0)
	{
		printf("bind to port %d failure!\n",SERVER_PORT);
		exit(1);
	}
	if (listen(servfd,LENGTH_OF_LISTEN_QUEUE) < 0)
	{
		printf("call listen failure!\n");
		exit(1);
	}
#if 0
	printf("listening...\n");
	while (1)
	{
		//server loop will nerver exit unless any body kill the process
		char buf[BUFFER_SIZE];
		long timestamp;
		socklen_t length = sizeof(cliaddr);
		clifd = accept(servfd,(struct sockaddr*)&cliaddr,&length);
		if (clifd < 0)
		{
			printf("error comes when call accept!\n");

			break;
		
		}
		printf("cnt: %d\n", ++cnt);
		strcpy(buf,WELCOME_MESSAGE);
		//inet_ntop(INET_ADDRSTRLEN,cliaddr.sin_addr,buf,BUFFER_SIZE);

		//printf("from client,IP:%s,Port:%d\n",inet_ntoa(cliaddr.sin_addr),ntohs(cliaddr.sin_port));
		printf("port:%d\n", ntohs(cliaddr.sin_port));
		printf("addr:%s\n", inet_ntoa(cliaddr.sin_addr));
		//printf("addr:%s\n", inet_ntoa(cliaddr.sin_addr));
		timestamp = time(NULL);
		strcat(buf,"timestamp in server:");
		strcat(buf,ctime(&timestamp));
		send(clifd,buf,BUFFER_SIZE,0);
		close(clifd); 

	}//exit
#endif

#if 1
		FD_ZERO(&read_set);
		FD_SET(STDIN_FILENO, &read_set);
		FD_SET(servfd, &read_set);
		while(1) {
			ready_set = read_set;
			int ret;
			ret = select(servfd + 1, &ready_set, NULL, NULL, NULL);
			if(ret > 0) {
				if(FD_ISSET(STDIN_FILENO, &ready_set)) {
					char buf[32];
					gets(buf);
					printf("input str is: %s\n", buf);
				}
				if(FD_ISSET(servfd, &ready_set)){
					printf("listened something ...\n");
				}
			}else {
				printf("end...\n");
				break;
			}
		}
#endif

	close(servfd);
	return 0;
}
