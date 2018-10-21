//
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
        NSMutableString *s= [[NSMutableString alloc] init];
        
        [s appendString:@"abc猫猫"];
        
        NSLog(@"%lu", (unsigned long)[s length]);
    }
    return 0;
}
