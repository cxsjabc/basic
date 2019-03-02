//
//  main.c
//  asm
//
//  Created by eyu on 13-7-27.
//  Copyright (c) 2013年 ccteam. All rights reserved.
//

#if 1


#include <stdio.h>


int add(int a, int b){
    return a + b;
}

int main(int argc, const char * argv[])
{
    int ret;
    
    // printf("Hello, World!\n");
    
    // add assembly codes
#if 0
    __asm volatile ("movl $1, %eax");
    __asm volatile ("movl $1, %ebx");
    __asm volatile ("addl %ebx, %eax");
#endif
    
    __asm volatile ("pushl %eax");  // must add this line because cal_2_n use eax
    __asm volatile ("movl $5, %ecx");
    __asm volatile ("call cal_2_n");
    __asm volatile ("movl %%eax, %0":"=m"(ret)::"memory");
    __asm volatile ("popl %eax");   // must add this line  because cal_2_n use eax
    
    printf("ret: %d\n", ret);
    
    return 0;
}


#endif
