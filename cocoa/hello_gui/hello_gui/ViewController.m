//
//  ViewController.m
//  hello_gui
//
//  Created by eyu on 2018/10/14.
//  Copyright © 2018年 ccteam. All rights reserved.
//

#import "ViewController.h"

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    // Do any additional setup after loading the view.
}


- (void)setRepresentedObject:(id)representedObject {
    [super setRepresentedObject:representedObject];

    // Update the view, if already loaded.
}

- (IBAction)convert:(id)sender
{
    float f1 = [text1 floatValue];
    [text2 setFloatValue:(f1 + 1)];
}

- (void)awakeFromNib
{
    NSDate * date = [NSDate date];
    [text2 setObjectValue:date];
    
    _voices = [NSSpeechSynthesizer availableVoices];
    speech = [[NSSpeechSynthesizer alloc] initWithVoice:nil];
    [speech setDelegate:self];
}

- (NSInteger)numberOfRowsInTableView:(NSTableView *)tableView
{
    return [_voices count];
}

- (nullable id)tableView:(NSTableView *)tableView objectValueForTableColumn:(nullable NSTableColumn *)tableColumn row:(NSInteger)row
{
    return [_voices objectAtIndex:row];
}

- (void)tableViewSelectionDidChange:(NSNotification *)notification
{
    NSInteger row = [tv selectedRow];
    NSString *voice = [_voices objectAtIndex:row];
    
    [speech setVoice:voice];
}

@end
