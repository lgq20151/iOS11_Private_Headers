/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBLinearCandidateViewCell : UIKBHandwritingCandidateViewCell

+ (bool)needsThemedView;
+ (double)systemFontSize;

- (bool)_canFocusProgrammatically;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFocused;
- (void)setSelected:(bool)arg1;
- (id)textLabelColor;

@end
