//
//  MainViewController.h
//  first
//
//  Created by eyu on 13-7-21.
//  Copyright (c) 2013年 ccteam. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

- (IBAction)showInfo:(id)sender;

@end
