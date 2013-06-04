//
//  JHActivityButton.h
//  JHActivityButtonExample
//
//  Created by justin howlett on 2013-05-31.
//  Copyright (c) 2013 JustinHowlett. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "easing.h"
/* TODO: UIAppearance, */
/** UIAppearance: color for activity indicator, bg color for states, */


@interface JHActivityButton : UIButton

typedef NS_ENUM(NSInteger, JHActivityButtonStyle) {
   
    JHActivityButtonStyleExpandLeft,
    JHActivityButtonStyleExpandRight,
    JHActivityButtonStyleExpandUp,
    JHActivityButtonStyleExpandDown,
    JHActivityButtonStyleZoomIn,
    JHActivityButtonStyleZoomOut,
    JHActivityButtonStyleSlideLeft,
    JHActivityButtonStyleSlideRight,
    JHActivityButtonStyleSlideUp,
    JHActivityButtonStyleSlideDown,
    JHActivityButtonStyleContractCircle
};

@property(nonatomic,assign)             AHEasingFunction            easingFunction;
@property(nonatomic,assign)             CGFloat                     animationTime; //default is 0.3
@property(nonatomic,assign,readonly)    BOOL                        isDisplayingActivityIndicator;
@property(nonatomic,assign)             BOOL                        shouldSuppressStateChangeOnTap;
@property(nonatomic,assign,readonly)    JHActivityButtonStyle       style;
@property(nonatomic,assign)             CGFloat                     rectangleCornerRadius; /** will only update right away if in normal state */
@property(nonatomic,readonly)           UIActivityIndicatorView*    indicator;

-(instancetype)initFrame:(CGRect)frame style:(JHActivityButtonStyle)style;

-(void)setBackgroundColor:(UIColor *)color forState:(UIControlState)state;
-(void)animateToActivityIndicatorState:(BOOL)shouldAnimateToActivityState;

@end


@interface UIView (Raster)
-(UIImage*)getRasterCopy;
@end