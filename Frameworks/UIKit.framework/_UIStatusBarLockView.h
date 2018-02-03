/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarLockView : UIView <CAAnimationDelegate, _UIStatusBarDisplayable> {
    _UIStatusBarImageView * _bodyView;
    id /* block */  _completionBlock;
    _UIStatusBarImageView * _shackleView;
}

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic, readonly) double baselineOffset;
@property (nonatomic, retain) _UIStatusBarImageView *bodyView;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIStatusBarImageView *shackleView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsCrossfade;

- (void).cxx_destruct;
- (void)animateUnlockCompletionBlock:(id /* block */)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)applyStyleAttributes:(id)arg1;
- (id)bodyView;
- (id /* block */)completionBlock;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)jiggleCompletionBlock:(id /* block */)arg1;
- (void)reset;
- (void)setBodyView:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setShackleView:(id)arg1;
- (id)shackleView;

@end
