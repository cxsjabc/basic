//
//  main.cpp
//  hello_cpp
//
//  Created by eyu on 2019/4/27.
//  Copyright © 2019年 eyu. All rights reserved.
//

#include <iostream>

class A {
public:
    A(int _n):n(_n) { }
    
private:
    int n;
};

A *pa = new A(1);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
