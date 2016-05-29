#include <stdio.h>

int main()
{
	int pp[2];
	int son;
	pipe(pp);

	son = fork();
	if(son == 0)
	{
		char buf[13] = {0};
		ssize_t size;
		//sleep(5);
		size = read(pp[0], buf, 12);
		if(size > 0)
		{
			printf("received: [%s]\n", buf);
		}
	}
	else if(son > 0)
	{	
		char buf[13] = "我hello";
		ssize_t size;
		size = write(pp[1], buf, 7);
		if(size > 0)
		{
			printf("Send: %d bytes, buf:%s\n", size, buf);
		}
	}

    return 0;
}
