//
//  Person.h
//  hello
//
//  Created by eyu on 2018/10/20.
//  Copyright © 2018年 ccteam. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
{
@private
    int age;
}

- (int)age;
- (void)setAge:(int)new_age;

- (void)testException;

@end
