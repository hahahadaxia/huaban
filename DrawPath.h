//
//  DrawPath.h
//  10-涂鸦画板
//
//

#import <UIKit/UIKit.h>

@interface DrawPath : UIBezierPath

@property (nonatomic, strong) UIColor *lineColor;

+ (instancetype)path;

@end
