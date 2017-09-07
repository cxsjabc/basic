//
//  backup1.cpp
//  hello
//
//  Created by eyu on 2017/9/7.
//  Copyright © 2017年 ccteam. All rights reserved.
//

#include <stdio.h>
#if 0
int main()
{
    int a1, a2, a3;
    char *s1, *s2, *s3;
    
    a1 = isatty(fileno(stdin));
    a2 = isatty(fileno(stdout));
    a3 = isatty(fileno(stderr));
    printf("isatty:%d,%d,%d\n", a1, a2, a3);
    
    s1 = ttyname(fileno(stdin));
    s2 = ttyname(fileno(stdout));
    s3 = ttyname(fileno(stderr));
    printf("ttyname:%s,%s,%s\n", s1, s2, s3);
    
#if 0
    printf("hello, my cat!\n");
#endif
    
#if 0
    int fd;
    ssize_t size;
    fd = open("/dev/ttys002", O_RDWR);
    if(fd >= 0) {
        while(1)
        {
            char buf[16];
            memset(buf, 0, 16);
            buf[0] = 'x';
            //scanf("%s", buf);
            size = write(fd, buf, 1);
            if(size > 0) {
                printf("size:%zd, buf:%s\n", size, buf);
            }
            sleep(1);
        }
        close(fd);
    }
#endif
    
#if 0
    fclose(stdout);
    printf("bye, my cat!\n");
#endif
    
#if 0
    while(1) {
        char ch;
        scanf("%c", &ch);
        printf("%c", ch);
    }
#endif
    
    return 0;
}
#endif
