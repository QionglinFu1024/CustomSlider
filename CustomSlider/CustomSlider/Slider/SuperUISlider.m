//
//  SuperUISlider.m
//  CustomSlider
//
//  Created by bear on 2021/5/26.
//

#import "SuperUISlider.h"

@implementation SuperUISlider

- (CGRect)trackRectForBounds:(CGRect)bounds {
    return CGRectMake(0, 0, CGRectGetWidth(self.frame), CGRectGetHeight(self.frame));
}


@end
