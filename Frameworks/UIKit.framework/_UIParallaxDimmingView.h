/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIParallaxDimmingView : UIView {
    UIView * _addingSubview;
    bool  _backgroundIsDimmed;
    UIColor * _dimmingColor;
    UIImageView * leftEdgeFade;
}

@property (nonatomic, retain) UIView *addingSubview;
@property (nonatomic) bool backgroundIsDimmed;
@property (nonatomic, retain) UIColor *dimmingColor;

- (void).cxx_destruct;
- (id)_basicAnimationWithKeyPath:(id)arg1;
- (void)_updateLeftEdgeFade:(bool)arg1;
- (id)addingSubview;
- (bool)backgroundIsDimmed;
- (void)crossFade;
- (id)defaultBorderColor;
- (void)didMoveToWindow;
- (id)dimmingColor;
- (id)initViewWrappingView:(id)arg1 withLeftBorder:(double)arg2 shouldReverseLayoutDirection:(bool)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 overrideDimmingColor:(id)arg2;
- (void)setAddingSubview:(id)arg1;
- (void)setBackgroundIsDimmed:(bool)arg1;
- (void)setDimmingColor:(id)arg1;

@end
