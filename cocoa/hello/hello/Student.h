//
//  Student.h
//  hello
//
//  Created by eyu on 2018/10/20.
//  Copyright © 2018年 ccteam. All rights reserved.
//

#import <Foundation/Foundation.h>

#define INCLUDE_PERSON

#ifdef INCLUDE_PERSON
#import "Person.h"
#else
@class Person;
#endif

@interface Student : Person

@end
