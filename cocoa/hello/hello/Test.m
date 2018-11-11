//
//  Test.m
//  hello
//
//  Created by eyu on 2018/11/11.
//  Copyright © 2018年 ccteam. All rights reserved.
//

#import "Test.h"

int Test_Count;

@implementation Test

- (void)addLoop
{
    NSLog(@"count:%d", count);
    while(count--) {
        ++Test_Count;
        //usleep(100000);
    }
}

- (void)addLoop1
{
    NSLog(@"count:%d", count);
    while(count--) {
        ++Test_Count;
        //usleep(100000);
    }
}

- (void)show
{
    NSLog(@"Test_Count:%d", Test_Count);
}

@end
