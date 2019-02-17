//
//  assist.m
//  hello
//
//  Created by eyu on 2018/10/20.
//  Copyright © 2018年 ccteam. All rights reserved.
//

#import <Foundation/Foundation.h>

#if 0
FILE *fp;
char buf[128];

if(argc == 1) {
    NSLog(@"no file arg!\n");
    return -1;
}

fp = fopen(argv[1], "r");
if(!fp)
return -2;

while(fgets(buf, 100, fp)) {
    buf[strlen(buf) - 1] = '\0';
    NSLog(@"%s length:%lu", buf, strlen(buf));
}

fclose(fp);
#endif

#if 0
BOOL b;

b = 0xFF00; // 0xFF01
// insert code here...
NSLog(@"%d", b);
#endif
