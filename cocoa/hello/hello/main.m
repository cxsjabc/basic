﻿//
//  main.m
//  hello 
//
//  Created by eyu on 2018/10/14.
//  Copyright © 2018年 ccteam. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Student.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSString *s;
        
        s = @"abc猫猫";
        
        NSLog(@"%u", [s length]);
    }
    return 0;
}