//
//  main.c
//  usb_checker
//
//  Created by eyu on 14-8-21.
//  Copyright (c) 2014年 ccteam. All rights reserved.
//

#include <stdio.h>
#include <CoreFoundation/CoreFoundation.h> 
#include <IOKit/IOKitLib.h>

void diveceAdd(void* refCon, io_iterator_t iterator){
    printf("usb plug in..\n");
    
    io_service_t service=0;
    while (TRUE) {
        service = IOIteratorNext(iterator);
        if(service == 0){
            printf("no device...just wait...\n");
            sleep(1);
            continue;
        }else {
            CFStringRef className;
            io_name_t name;
            className = IOObjectCopyClass(service);
            if((CFEqual(className, CFSTR("IOUSBService")))==true){
                IORegistryEntryGetName(service, name);
                printf("Found device with name:{%s}\n",name);
            }else {
                printf("device with name:%s",name);
            }
            CFRelease(className);
            IOObjectRelease(service);
            sleep(1);
            continue;
        }
    }
    
}


int main(int argc, const char * argv[])
{
    
    printf(" ======= start ====\n");
    CFDictionaryRef macthDic=NULL;
    io_iterator_t iter=0;
    IONotificationPortRef notificationPort=NULL;
    CFRunLoopSourceRef runLoopSource;
    kern_return_t kr;
    macthDic=IOServiceMatching("IOUSBDevice");
    notificationPort=IONotificationPortCreate(kIOMasterPortDefault);
    runLoopSource=IONotificationPortGetRunLoopSource(notificationPort);
    CFRunLoopAddSource(CFRunLoopGetCurrent(), runLoopSource, kCFRunLoopDefaultMode);
    kr=IOServiceAddMatchingNotification(notificationPort, kIOFirstMatchNotification, macthDic, diveceAdd, NULL, &iter);
    
    diveceAdd(NULL,iter);
    
    
    printf(" ===========\n ");
    
    CFRunLoopRun();
    IONotificationPortDestroy(notificationPort);
    IOObjectRelease(iter);
    
    return 0;
}

