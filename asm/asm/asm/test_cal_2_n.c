//
//  main.c
//  asm
//
//  Created by eyu on 13-7-27.
//  Copyright (c) 2013年 ccteam. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#include "../../../../common/time.h"

// use external asm function
// gcc test_cal_2_n.c -arch i386 cal_2_n.o
// cal_2_n.o is generated by: nasm -f macho cal_2_n.asm
//#define USE_EXT_ASM
//#define USE_ASM_INLINED

#ifdef USE_EXT_ASM
#elif !defined(USE_ASM_INLINED) && !defined(USE_ASM_INLINED_OPTIMIZED)
int cal_2_n(int n){
	int ret = 1;
	while(n-- > 0)
		ret += ret;
	return ret;
}
#endif

int main(int argc, const char * argv[])
{
    int ret = -1;
	int n = 5;
	int loop_cnt = 100000000;

	if(argc > 1)
		n = atoi(argv[1]);
	if(argc > 2)
		loop_cnt = atoi(argv[2]);

// It seems that USE_EXT_ASM codes is very short, seems very fast. But, in release mode compiler has optimized the cal_2_n func call, it's inlined. The executing time is: use asm: 1.1s, use c: 0.33s.
//  in debug mode, the executing time is almost the same.
#ifdef USE_EXT_ASM
    printf("USE_EXT_ASM:n:%d, loop_cnt:%d\n", n, loop_cnt);
	TIME_START(loop_cnt)
    __asm volatile ("pushl %eax");  // must add this line because cal_2_n use eax
    __asm volatile ("movl $5, %ecx");
    __asm volatile ("call _cal_2_n");
    __asm volatile ("movl %%eax, %0":"=m"(ret)::"memory");
    __asm volatile ("popl %eax");   // must add this line  because cal_2_n use eax
    TIME_END
#elif defined USE_ASM_INLINED   // 0.972s, is less than c codes
    printf("USE_ASM_INLINED:n:%d, loop_cnt:%d\n", n, loop_cnt);
    TIME_START(loop_cnt)
    __asm volatile ("pushl %eax");  // must add this line because cal_2_n use eax
    __asm volatile ("movl $5, %ecx");
    __asm volatile ("_cal_2_n:\n"
    "movl $1, %eax\n"
    "cmpl $0, %ecx\n"
    "jz cal_2_n_out\n"
"mul_internal:\n"
    "addl %eax, %eax\n"
    "loop mul_internal\n"
    "cal_2_n_out:");
    __asm volatile ("movl %%eax, %0":"=m"(ret)::"memory");
    __asm volatile ("popl %eax");   // must add this line  because cal_2_n use eax
    TIME_END
#elif defined USE_ASM_INLINED_OPTIMIZED   // 0.36s, how to optimize faster than c codes?
    printf("USE_ASM_INLINED_OPTIMIZED:n:%d, loop_cnt:%d\n", n, loop_cnt);
    TIME_START(loop_cnt)
    __asm volatile ("pushq %rax");  // must add this line because cal_2_n use eax
    __asm volatile ("movl $5, %ecx");
    __asm volatile ("_cal_2_n:\n"
                    "movl $1, %eax\n"
                    "cmpl $0, %ecx\n"
                    "jz cal_2_n_out\n"
                    "mul_internal:\n"
                    "addl %eax, %eax\n"
                    "decl %ecx\n"
                    "cmpl $0, %ecx\n"
                    "jg mul_internal\n"
                    "cal_2_n_out:");
    __asm volatile ("movl %%eax, %0":"=m"(ret)::"memory");
    __asm volatile ("popq %rax");   // must add this line  because cal_2_n use eax
    TIME_END
#else           // 0.32s
     printf("C source:n:%d, loop_cnt:%d\n", n, loop_cnt);
	TIME_START(loop_cnt)
		ret = cal_2_n(n);
	TIME_END

#endif

	printf("ret:%d\n", ret);
    return 0;
}

