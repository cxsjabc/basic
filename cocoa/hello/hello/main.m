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
#if 0
        NSMutableString *s= [[NSMutableString alloc] init];
        NSArray *arr = [[NSArray alloc] init];
        
        //[arr objectAtIndex:0];
        
        NSLog(@"%lu", (unsigned long)[s length]);
        
        //test('a');
#endif
        
#if 1
        Person *p = [Person new];
    #if 1
            [p testException];
    #else
            @try {
                [p testException];
            } @catch(NSException *e) {
                NSLog(@"an exception is catched!");
            } @finally {
                [p release];
            }
    #endif
        
#endif
    }
    //return 0;
}
