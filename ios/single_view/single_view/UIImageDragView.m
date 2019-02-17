//
//  UIImageDragView.m
//  single_view
//
//  Created by eyu on 2018/11/11.
//  Copyright © 2018年 eyu. All rights reserved.
//

#import "UIImageDragView.h"

@implementation UIImageDragView

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    UITouch *touch = [touches anyObject];
    CGPoint p = [touch locationInView:self];
    
    NSLog(@"touches Began: point: x:%f, y:%f", p.x, p.y);
    
}

- (void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    UITouch *touch = [touches anyObject];
    CGPoint p = [touch locationInView:self];
    
    NSLog(@"touches touchesMoved: point: x:%f, y:%f", p.x, p.y);
}

@end
