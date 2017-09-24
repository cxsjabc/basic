//
//  main.c
//  first
//
//  Created by xichen的mac on 13-7-6.
//  Copyright (c) 2013年 ccteam. All rights reserved.
//

#if 0 // ENABLE_C
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <memory.h>
#include <unistd.h>

#include "assist.h"
#include "buffer.h"

#define P_D(n) printf(#n " is %d\n", (n))
#define P_S(s) printf(#s " is %s\n", (s))

#define LOOP_FOR_EVER   while(1) {}

const char * s = "hello\nint\neyu haha\nmaomao\n";


void test_get_line(cc_buffer * buf, size_t line)
{
    size_t len;
    char * ret  = cc_buffer_get_line(buf, line, &len);
    if(!ret)
    {
        return;
    }
    P_S(ret);
    
    cc_buffer_free_line(buf, ret);
}

void f1()
{
    printf("leave f1, pid:%d\n", getpid());
}

void f2()
{
    printf("leave f2\n");
}

int main(int argc, const char * argv[])
{
    
#if 1
    pid_t pid;
    //atexit(f1);
    //atexit(f2);
    //atexit(f1);
    
    //LOOP_FOR_EVER;
    //sleep(2);
    
    pid = fork();
    if(pid < 0)
        printf("fork fail!\n");
    else if(pid == 0)
    {
        printf("child process..., pid:%d, ppid:%d\n", getpid(), getppid());
        sleep(5);
        printf("after sleep,child process..., pid:%d, ppid:%d\n", getpid(), getppid());
        exit(2);
    }
    else
    {
        int status = 1;
        pid_t ret = 0;
        
        //ret = wait(&status);
        //ret = waitpid(pid, &status, 0);
        do
        {
            ret = waitpid(pid, &status, WNOHANG);
            if(ret == 0)
            {
                printf("no child exit...\n");
                sleep(1);
            }
        }while(ret == 0);
        
        if(ret == pid)
            printf("successful get child:%d\n", ret);
        printf("parent process..., pid:%d, ppid:%d, wait ret:%d, wait status:%d, exitstatus:%d\n", getpid(), getppid(), ret, WIFEXITED(status), WEXITSTATUS(status));
    }
#endif
    
#if 0
    pid_t pid;
    pid = getpid();
    P_D(pid);
    printf("__GNUC__:%d", __GNUC__);
#endif

#if 0
    //char *pc = (char*)0x00001111;
    int *pc = (int*)0x00001111;
    *pc = 17;
#endif
    
    {
#if 0
        cc_buffer * buf = cc_buffer_create(s);
        if(!buf)
            return -1;
        
        test_get_line(buf, 1);
        test_get_line(buf, 2);
        test_get_line(buf, 3);
        test_get_line(buf, 4);
        
        cc_buffer_free(buf);
#endif
    }
    
    {
#if 0
        char buf[11];
        
        while(1)
        {
            cc_getline(buf, 10);
        
            printf("%s\n", buf);
            
            cc_fflush_stdin();
            memset(buf, 0, 11);
        }
#endif
    }
    
    {
#if 0
        char buf[] = "xi = 26";
        char * ret;
        char * value;
        
        ret = cc_parse_ini(buf, &value);
        if(ret)
        {
            P_S(ret);
            P_S(value);
        }
#endif
    }
    
    //P_D(sizeof(long double));
    
    return 0;
}


void show()
{
    printf("version...\n");
}

#endif
