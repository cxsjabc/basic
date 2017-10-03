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
#include <dirent.h>

int main()
{
    DIR *dp;
    struct dirent *dirp;
    
    dp = opendir("/");
    if(dp == NULL) {
        perror("opendir error:");
        return -1;
    }
    
    while((dirp = readdir(dp)) != NULL) {
        printf("%s\n", dirp->d_name);
    }
    
    closedir(dp);
    
    return 0;
}

#if 0
int i = 1;
int j;

j = i << 32;
printf("%d\n", j);
#endif

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

