#include <stdio.h>
#include <unistd.h>
#include <assert.h>
#include <sys/resource.h>

#include "common_local.h"

int bss_end;

char *pb;
void show_program_break()
{
	void *p;

	p = sbrk(0);
	if(p != (void *)-1)
		pb = p, printf("program break:%p\n", p);
	else
		printf("get program break error!\n");
}

/* seems on Mac, brk failed always! */
int main()
{
	void *p;
		
	printf("bss_end:%p\n", (char *)&bss_end + 4);
	show_program_break();
	
	if(brk((char *)pb - 1) == (void *)-1)	// minus 1 to program break: error 
		perror("brk error");

	show_program_break();

	p = malloc(32);
	assert(p);
	
	show_program_break();

	if(brk((char *)pb - 10) == (void *)-1)	// error
		perror("brk error");
	if(brk((char *)pb) == (void *)-1)	// error
		perror("brk error");

	show_program_break();

#if 0	
	p = sbrk(0);
	printf("%p\n", p);	// assume: v  (different by each run)
	p = sbrk(0x100);
	printf("%p\n", p);	// v
	p = sbrk(0);
	printf("%p\n", p);	// v + 0x100
#endif

    return 0;
}
