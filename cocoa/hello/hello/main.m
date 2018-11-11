//
//  main.m
//  hello 
//
//  Created by eyu on 2018/10/14.
//  Copyright © 2018年 ccteam. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Student.h"
#import "Test.h"

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
        Test *test = [Test new];
        test->count = 100;
        // if only one thread, just loop 100 times;
        // but, if two threads, loop times is often not 100.
        [NSThread detachNewThreadSelector:@selector(addLoop) toTarget:test withObject:test];
        [NSThread detachNewThreadSelector:@selector(addLoop1) toTarget:test withObject:test];
        
        sleep(2);
        [test show];
#endif
        
#if 1
        int a = 12;
        char c = 'a';
        
        printf("&a:%p, &c:%p\n", &a, &c);
#endif
        
#if 0
        8;
#endif
        
#if 0
        NSMutableString *s= [[NSMutableString alloc] init];
        NSArray *arr = [[NSArray alloc] init];
        
        //[arr objectAtIndex:0];
        
        NSLog(@"%lu", (unsigned long)[s length]);
        
        //test('a');
#endif
        
#if 0
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
