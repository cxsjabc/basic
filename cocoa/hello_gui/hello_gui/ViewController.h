//
//  ViewController.h
//  hello_gui
//
//  Created by eyu on 2018/10/14.
//  Copyright © 2018年 ccteam. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <AppKit/AppKit.h>

@interface ViewController : NSViewController
{
    IBOutlet id text1;
    IBOutlet id text2;
    IBOutlet id button1;
}

- (IBAction)convert:(id)sender;

@end

