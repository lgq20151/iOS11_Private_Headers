/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarServiceItemView : UIStatusBarItemView {
    int  _contentType;
    unsigned long long  _crossfadeStep;
    NSString * _crossfadeString;
    double  _crossfadeWidth;
    double  _letterSpacing;
    bool  _loopNowIfNecessary;
    bool  _loopingNecessaryForString;
    bool  _loopingNow;
    double  _maxWidth;
    NSString * _serviceString;
    double  _serviceWidth;
}

- (void).cxx_destruct;
- (id)_contentsImageFromString:(id)arg1 withWidth:(double)arg2 letterSpacing:(double)arg3;
- (id)_crossfadeContentsImage;
- (void)_crossfadeStepAnimation;
- (bool)_crossfaded;
- (void)_finalAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_loopAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (bool)_loopingNecessary;
- (id)_serviceContentsImage;
- (id)accessibilityHUDRepresentation;
- (double)addContentOverlap:(double)arg1;
- (bool)animatesDataChange;
- (id)contentsImage;
- (double)extraRightPadding;
- (long long)legibilityStyle;
- (void)performPendedActions;
- (double)resetContentOverlap;
- (void)setVisible:(bool)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (double)standardPadding;
- (double)updateContentsAndWidth;
- (bool)updateForContentType:(int)arg1 serviceString:(id)arg2 serviceCrossfadeString:(id)arg3 maxWidth:(double)arg4 actions:(int)arg5;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end