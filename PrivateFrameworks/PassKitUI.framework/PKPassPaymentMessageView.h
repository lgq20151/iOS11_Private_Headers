/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPaymentMessageView : PKPassFooterContentView {
    UIImageView * _alertImageView;
    UILabel * _bodyLabel;
    UIView * _bottomRule;
    UIButton * _button;
    UILabel * _titleLabel;
}

- (void).cxx_destruct;
- (id)_actionButton;
- (id)_alertImage;
- (id)_bodyLabel;
- (id)_bottomRule;
- (void)_layoutPaymentSubviews;
- (void)_layoutValueAddedServiceSubviews;
- (id)_titleLabel;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 pass:(id)arg2 title:(id)arg3 body:(id)arg4;
- (id)initWithStyle:(long long)arg1 pass:(id)arg2 title:(id)arg3 body:(id)arg4 buttonTitle:(id)arg5 action:(SEL)arg6 isImportant:(bool)arg7;
- (void)layoutSubviews;

@end
