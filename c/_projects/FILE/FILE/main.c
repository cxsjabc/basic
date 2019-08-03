//
//  main.c
//  FILE
//
//  Created by eyu on 2019/8/3.
//  Copyright © 2019 eyu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE *fp;
    
    fp = fopen("/tmp/1", "r");
    if(!fp) {
        perror("open file error!");
        return -1;
    }
    
    printf("bsize:%d!\n", fp->_blksize);    // use FILE internal variable
    
    fclose(fp);
    
    return 0;
}
