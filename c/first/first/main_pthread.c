//
//  main_pthread.c
//  first
//
//  Created by eyu on 15/7/17.
//  Copyright (c) 2015年 ccteam. All rights reserved.
//

#if 1
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <memory.h>
#include <unistd.h>
#include <pthread.h>
#include <signal.h>
#include <setjmp.h>
#include <sys/types.h>

#include "assist.h"
#include "buffer.h"

#define P_D(n) printf(#n " is %d\n", (n))
#define P_S(s) printf(#s " is %s\n", (s))

#define LOOP_FOR_EVER   while(1) {}

#define FAIL_NOT_ZERO(ret)  \
    if((ret) != 0)  \
    {       \
        printf("error:%s@%d!\n", __FUNCTION__, __LINE__); \
        return -1; \
    }

sigset_t set;
jmp_buf jb;

void thread(void)
{
    //int *p = NULL;
    long ret;
    printf("This is a pthread.\n");
    while (1) {
        int sig;
        sigwait(&set, &sig);
        if(sig == SIGUSR1)
        {
            printf("[Son Thread]Received siguser1...\n");
        }
    }
    
    // cause crash
    //*p = 1;
    ret = 3;
    pthread_exit((void *)ret);
}

void segv_handler(int args)
{
    static int i = 1;
    printf("catch SIGSEGV signal...%d\n", i++);
    sleep(1);
    
#if 0
    longjmp(jb, 1);
#endif
}

void sigint_handler(int args)
{
    printf("Catch SIGINT signal...pid:%d, tid:%d\n", getpid(), pthread_self());
}

void enter_segv_state()
{
    int *p = NULL;
    printf("%s +\n", __func__);
    *p = 1;
    
}

int main(int argc, const char * argv[])
{
#if 1
    int ret = chdir("/");
    P_D(ret);
#endif
    
#if 0
    pthread_t id;
    int ret;
    void *p_ret;
#endif
    
#if 0
    int ret1;
    sigset_t block_set;
    
    sigemptyset(&set);
    sigaddset(&set, SIGUSR1);
    sigprocmask(SIG_SETMASK, &set, NULL);
    
    sigemptyset(&block_set);
    sigaddset(&block_set, SIGINT);
    sigaddset(&block_set, SIGQUIT);
    //sigprocmask(SIG_BLOCK, &block_set, NULL);
    
    signal(SIGSEGV, segv_handler);
    signal(SIGINT, sigint_handler);
    //enter_segv_state();
    sleep(100);
    LOOP_FOR_EVER;
#endif
    
#if 0
    ret1 = setjmp(jb);
    if(ret1 == 1)
    {
        printf("Truly catch SIGSEGV...\n");
    }
#endif

#if 0
    ret=pthread_create(&id,NULL,(void *) thread,NULL);
    if(ret!=0){
        printf ("Create pthread error!\n");
        exit (1);
    }
    
    printf("This is the main process.\n");
    sleep(1);
    
    while(1)
    {
        char ch;
        scanf("%c", &ch);
        if(ch == 'a')
        {
            printf("[Main]send signal SIGUSR1\n");
            pthread_kill(id, SIGUSR1);
        }
    }
    
    ret = pthread_join(id, &p_ret);
    FAIL_NOT_ZERO(ret);
    printf("thread ret:%ld\n", (long)p_ret);
#endif
    
    return 0;
}




#endif

