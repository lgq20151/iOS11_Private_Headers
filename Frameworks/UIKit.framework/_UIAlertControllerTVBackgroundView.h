/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerTVBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying> {
    NSMutableDictionary * _alphas;
    UIView * _backgroundView;
    bool  _isHighlighted;
    bool  _isPressed;
    _UIFloatingShadowView * _shadowView;
    bool  _shouldShowShadow;
    bool  _shouldUseTintColorAsBackgroundColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldShowShadow;
@property (nonatomic) bool shouldUseTintColorAsBackgroundColor;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })backgroundInsetAmount;

- (void).cxx_destruct;
- (double)_alphaForHighlighted:(bool)arg1 pressed:(bool)arg2;
- (id)_displayedBackgroundColor;
- (void)_setContinuousCornerRadius:(double)arg1;
- (double)alphaForState:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAlpha:(double)arg1 forState:(unsigned long long)arg2;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPressed:(bool)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;
- (void)setShouldShowShadow:(bool)arg1;
- (void)setShouldUseTintColorAsBackgroundColor:(bool)arg1;
- (bool)shouldShowShadow;
- (bool)shouldUseTintColorAsBackgroundColor;
- (void)tintColorDidChange;

@end
