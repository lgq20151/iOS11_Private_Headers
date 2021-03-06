/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCircleView : UIView {
    bool  _backgroundColorFollowsTintColor;
    bool  _borderColorFollowsTintColor;
}

@property (nonatomic) bool backgroundColorFollowsTintColor;
@property (nonatomic) bool borderColorFollowsTintColor;

+ (bool)requiresConstraintBasedLayout;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)backgroundColorFollowsTintColor;
- (bool)borderColorFollowsTintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundColorFollowsTintColor:(bool)arg1;
- (void)setBorderColorFollowsTintColor:(bool)arg1;
- (void)tintColorDidChange;

@end
