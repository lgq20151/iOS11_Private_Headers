/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIButtonLabel : UILabel {
    UIButton * _button;
    NSDictionary * _cachedDefaultAttributes;
    bool  _reverseShadow;
}

+ (id)_defaultAttributes;

- (void).cxx_destruct;
- (id)_defaultAttributes;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 button:(id)arg2;
- (void)_invalidateCachedDefaultAttributes;
- (double)_paddingForBaselineSpacingFromEdge:(int)arg1 toNeighborEdge:(int)arg2;
- (void)_setMinimumFontSize:(double)arg1;
- (void)_setWantsAutolayout;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateTextColorWithFallbackColorIfNeeded;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setReverseShadow:(bool)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (void)tintColorDidChange;

@end
