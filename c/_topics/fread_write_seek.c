#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

/*
 * fread / fwrite file pos are different. If mix fread and fwrite, use fseek.
*/

int main(int argc, char *argv[])
{
	FILE *fp;
	char buf[128];
	int ret;

	fp = fopen("1", "r+");
	if(!fp)
		return -1;

	ret = fread(buf, 1, 2, fp);
	PD(ret);
	PD(ftell(fp));
	/** Note: need do fseek! or, the data is written to the end of file **/
	fseek(fp, 0, SEEK_CUR);
	ret = fwrite("ab", 1, 2, fp);
	PD(ret);
	PD(ftell(fp));

	fclose(fp);
	return 0;
}
