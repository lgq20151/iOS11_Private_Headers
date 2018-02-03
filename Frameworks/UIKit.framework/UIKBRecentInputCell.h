/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRecentInputCell : UICollectionViewCell {
    UILabel * _label;
}

@property (nonatomic, retain) UILabel *label;

+ (id)textColorForRenderConfig:(id)arg1 isSelected:(bool)arg2;
+ (id)titleAttributesForRenderConfig:(id)arg1;

- (bool)_canFocusProgrammatically;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFocused;
- (id)label;
- (void)layoutSubviews;
- (void)setInputText:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSelected:(bool)arg1;

@end
