//
//  main.c
//  asm
//
//  Created by eyu on 13-7-27.
//  Copyright (c) 2013年 ccteam. All rights reserved.
//

#if 1


#include <stdio.h>
#include "../../../../common/time.h"


int add(int a, int b){
    return a + b;
}

int main(int argc, const char * argv[])
{
    int ret = 0;
    
    // printf("Hello, World!\n");
    
    // add assembly codes
#if 0
    __asm volatile ("movl $1, %eax");
    __asm volatile ("movl $1, %ebx");
    __asm volatile ("addl %ebx, %eax");
#endif
    
    //printf("ret: %d\n", ret);
    
    return 0;
}


#endif
