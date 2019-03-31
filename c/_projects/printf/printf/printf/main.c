//
//  main.c
//  printf
//
//  Created by eyu on 2019/3/21.
//  Copyright © 2019年 eyu. All rights reserved.
//

#include <stdio.h>

#define PD(n) printf("%d\n", (n))

void test_printf_ret()
{
    int ret;
 
    ret = printf("123");
    PD(ret);
    ret = printf("猫");
    PD(ret);
    ret = printf("%x", 123);
    PD(ret);
    ret = printf("\u732B");
    PD(ret);
}

int main(int argc, const char * argv[]) {
    // printf("Hello, World!\n");
    
    test_printf_ret();
    return 0;
}
