//
//  hello.c
//
//
//  Created by xi.chen on 2017/9/2.
//  Copyright © 2017 All rights reserved.
//

#include <string.h>
#include <fcntl.h>
#include <unistd.h>


#include <stdio.h>

int main()
{
    int i = 1;
    int j;
    
    j = i << 32;
    printf("%d\n", j);
    
    return 0;
}

#if 0
int i, j;
unsigned int m;

i = 1;
j = 2;

printf("%d\n", i > j);
#endif

#if 0
char ch;
int i = 0xF;

ch = 'a';
i = i + ch;
printf("%d\n", i);
#endif

