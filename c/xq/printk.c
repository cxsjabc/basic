#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#define	printk	printf

#undef DEBUG
//#define DEBUG

#ifdef DEBUG
#define pr_debug(fmt, arg...) printk(fmt, ##arg) 
#elif LOG_LEVEL >= 7
#define pr_debug(fmt, arg...) printk(fmt, ##arg) 
#else
#define pr_debug(fmt, arg...)	
#endif

int main(int argc, char *argv[])
{
    printk("xm is clever when she is clever!\n");

	pr_debug("it's outputted!\n");
    return 0;
}
