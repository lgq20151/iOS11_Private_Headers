/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFEndOfArticleTopicButton : UIButton {
    NSMutableDictionary * _unadjustedControlStateTitles;
}

@property (nonatomic, readonly) NSMutableDictionary *unadjustedControlStateTitles;

+ (id)buttonColor;
+ (id)topicButton;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAccessibilityElement;
- (void)setHighlighted:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)unadjustedControlStateTitles;

@end
