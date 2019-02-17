//
//  Person.m
//  hello
//
//  Created by eyu on 2018/10/20.
//  Copyright © 2018年 ccteam. All rights reserved.
//

#import "Person.h"

@implementation Person

- (id)init
{
    if(self = [super init]) {
        NSLog(@"Person class: init is called! retaincount:%lu", [self retainCount]);
    }
    return self;
}

- (int)age
{
    return age;
}

- (void)setAge:(int)new_age
{
    age = new_age;
}

- (void)testException
{
    @throw [NSException exceptionWithName:@"person_exception" reason:@"no reason, just throw it" userInfo:nil];
}

@end
