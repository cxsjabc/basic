//
//  main_cpp.cpp
//  first
//
//  Created by eyu on 15/7/13.
//  Copyright (c) 2015年 ccteam. All rights reserved.
//

#if 0 // ENABLE_CPP

#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include "main_cpp.h"


using namespace std;

class A
{
public:
    A(int a)
    {
        this->a = a;
        cout << "A" << "(" << this->a << ")" << " constructor" << endl;
    }
    
    ~A()
    {
        cout << "~A" << "(" << a << ")" << endl;
    }
private:
    int a;
};


A a1(1);

void f1()
{
    printf("leave f1\n");
}

int main()
{
    static A a5(5);
    A a2(2);
    atexit(f1);
    A a3(3);
    static A a4(4);
    
    return 0;
}

#endif
