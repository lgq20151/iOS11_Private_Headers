/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeNavigationBarTitleView : UIView {
    unsigned long long  _style;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *title;

- (id)_subtitleTextColor;
- (double)_verticalOffsetForSubtitleWhenMini:(bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setSubtitleText:(id)arg1 withStyle:(unsigned long long)arg2;
- (void)setTitle:(id)arg1;
- (id)title;

@end