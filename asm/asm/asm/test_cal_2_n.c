//
//  main.c
//  asm
//
//  Created by eyu on 13-7-27.
//  Copyright (c) 2013年 ccteam. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>

#define USE_EXT_ASM

#ifdef USE_EXT_ASM
#else
int cal_2_n(int n){
	int ret = 1;
	while(n-- > 0)
		ret += ret;
	return ret;
}
#endif

int main(int argc, const char * argv[])
{
    int ret, n;
	int loop_cnt = 1;

	if(argc > 1)
		n = atoi(argv[1]);
	if(argc > 2)
		loop_cnt = atoi(argv[2]);

	while(loop_cnt--) {
		asm volatile("movl $4, %ecx");
		asm volatile("call _cal_2_n");
    }

    return 0;
}

