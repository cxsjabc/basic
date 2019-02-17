//
//  hello_driver.c
//  hello_driver
//
//  Created by eyu on 2018/10/18.
//  Copyright © 2018年 ccteam. All rights reserved.
//

#include <mach/mach_types.h>
#include <libkern/libkern.h>

kern_return_t hello_driver_start(kmod_info_t * ki, void *d);
kern_return_t hello_driver_stop(kmod_info_t *ki, void *d);

kern_return_t hello_driver_start(kmod_info_t * ki, void *d)
{
    printf("hello world!\n");
    return KERN_SUCCESS;
}

kern_return_t hello_driver_stop(kmod_info_t *ki, void *d)
{
     printf("goodbye world!\n");
    return KERN_SUCCESS;
}
