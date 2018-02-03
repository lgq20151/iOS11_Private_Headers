/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarActivityView : UIView <_UIStatusBarDisplayable> {
    CAGradientLayer * _barLayer;
    UIColor * _color;
    _UIStatusBarCycleAnimation * _cycleAnimation;
    bool  _isSlow;
    CALayer * _mainLayer;
    CALayer * _pointLayer;
    double  _thickness;
}

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic, retain) CAGradientLayer *barLayer;
@property (nonatomic, readonly) double baselineOffset;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic, retain) _UIStatusBarCycleAnimation *cycleAnimation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSlow;
@property (nonatomic, retain) CALayer *mainLayer;
@property (nonatomic, retain) CALayer *pointLayer;
@property (readonly) Class superclass;
@property (nonatomic) double thickness;
@property (nonatomic, readonly) bool wantsCrossfade;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_stopAnimatingWithStoppingAnimations:(bool)arg1 completionHandler:(id /* block */)arg2;
- (double)_thicknessForTraitCollection:(id)arg1;
- (void)applyStyleAttributes:(id)arg1;
- (id)barLayer;
- (id)color;
- (id)cycleAnimation;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isSlow;
- (id)mainLayer;
- (id)pointLayer;
- (void)setBarLayer:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setCycleAnimation:(id)arg1;
- (void)setIsSlow:(bool)arg1;
- (void)setMainLayer:(id)arg1;
- (void)setPointLayer:(id)arg1;
- (void)setThickness:(double)arg1;
- (void)startAnimating;
- (void)stopAnimatingWithCompletionHandler:(id /* block */)arg1;
- (double)thickness;
- (void)traitCollectionDidChange:(id)arg1;

@end
