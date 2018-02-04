/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSTableHeaderFooterView : UIView {
    UIButton * _button;
    <VSTableHeaderFooterViewDelegate> * _delegate;
    VSFontCenter * _fontCenter;
    long long  _kind;
    UIStackView * _stackView;
    UILabel * _textLabel;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic) <VSTableHeaderFooterViewDelegate> *delegate;
@property (nonatomic, retain) VSFontCenter *fontCenter;
@property (nonatomic) long long kind;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, retain) UILabel *textLabel;

- (void).cxx_destruct;
- (void)_didInvalidateIntrinsicContentSize;
- (id)button;
- (void)dealloc;
- (id)delegate;
- (id)fontCenter;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (long long)kind;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFontCenter:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setKind:(long long)arg1;
- (void)setStackView:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stackView;
- (id)textLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end