//
//  backup1.c
//  first
//
//  Created by eyu on 13-7-21.
//  Copyright (c) 2013年 ccteam. All rights reserved.
//

#include <stdio.h>

#if 0

//extern int *d;
//extern int d[];

extern void show();

int compare_float(const void * pf1, const void * pf2)
{
    float f1 = *(float *)pf1;
    float f2 = *(float *)pf2;
    float f = f1 - f2;
    
    if(f > 0)
        return 1;
    else if(f == 0)
        return 0;
    else
        return -1;
}

//int n = *(d + 0);

{
#if 0
    int * p = (int *)malloc(10);
    if(p)
    {
        int * q = (int *)realloc(p, 12);
        P_D(p);
        P_D(q);
        
        free(NULL);
    }
#endif
}

{
    int * p = (int *)calloc(2, 20);
}

{
#if 0
    srand(2001001);
    for (int i = 0; i < 100; ++i) {
        P_D(rand());
    }
    printf("*********\n");
    
    srand(2001001);
    for (int i = 0; i < 100; ++i) {
        P_D(rand());
    }
#endif
}

{
#if 0
    char * p = (char *)L"hello maomao";
    printf("%s\n", p);
    printf("%ls\n", p);
    
    //printf("你\n");   // on UTF-8 encoding, is ok; or, isn't ok
    wprintf(L"hello \n xichen");    // needs wchar.h
#endif
}

{
#if 0
    float arr[] = {1.2, 4.5, 100.6, 0.2, 4.3};
    qsort(arr, 5, sizeof(float), compare_float);
    
    for (int i = 0; i < 5; ++i) {
        printf("%f ", arr[i]);
    }
#endif
}

{
#if 0
    show();
#endif
}

{
#if 1
    int a = 2;
    int n[a * 3];   // var-length array
#endif
}

#endif