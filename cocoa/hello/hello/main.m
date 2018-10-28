//
//  main.m
//  hello 
//
//  Created by eyu on 2018/10/14.
//  Copyright © 2018年 ccteam. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Student.h"

void test(char ch)
{
    int i = ch;
    
    
    printf("%d\n", i);
    
    for(i = 0; i < 100; ++i)
        printf("%d", i);
    printf("\n");
}

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSMutableString *s= [[NSMutableString alloc] init];
        NSArray *arr = [[NSArray alloc] init];
        
        [arr objectAtIndex:0];
        
        NSLog(@"%lu", (unsigned long)[s length]);
        
        test('a');
    }
    return 0;
}
