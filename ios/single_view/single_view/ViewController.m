//
//  ViewController.m
//  snigle_view
//
//  Created by eyu on 2018/11/11.
//  Copyright © 2018年 eyu. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    idv = [[UIImageDragView alloc] initWithFrame:CGRectMake(0, 0, 200, 100)];
    [idv setBackgroundColor:[UIColor redColor]];
    [idv setUserInteractionEnabled:TRUE];
    [self.view addSubview:idv];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
