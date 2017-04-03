#include <stdio.h>
#include <string.h>

typedef struct xi_format_header
{
	int magic;
	int cpu_type;
	int version;
	int data_pos;
	int data_length;
	int data_type;		// 1 means all ascii
}xi_format_header;


int generate_xi_format_file(const char *file_name, char *data)
{
	FILE *fd;
	fd = fopen(file_name, "wb");
	if(!fd)
		return -1;
	
	xi_format_header header;
	header.magic = 0x4958;
	header.cpu_type = 0xCC;
	header.version = 1;
	header.data_pos = sizeof(xi_format_header) * 2;
	header.data_length = strlen(data);
    header.data_type = 1;	

	size_t ret;
	ret = fwrite(&header, sizeof(xi_format_header), 1, fd);
	if(ret < 1){
		fprintf(stderr, "write header failed...\n");
		goto err;
	}
	
	int seek_ret;
	seek_ret = fseek(fd, sizeof(xi_format_header), SEEK_CUR);
	if(seek_ret < 0){
		fprintf(stderr, "seek error...\n");
		goto err;
	}

	ret = fwrite(data, header.data_length, 1, fd);
	if(ret < 1){
		fprintf(stderr, "write data failed...\n");
		goto err;
	}

	fclose(fd);
	return 0;

err:
	if(fd)
		fclose(fd);
	return -1;
}

int main()
{
	char *s = "hello, eyu, i am xiyi\n";
	int ret;
	ret = generate_xi_format_file("xi_format_file.cx", s);
	printf("ret:%d\n", ret);

	return 0;
}
