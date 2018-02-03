/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerTextFieldView : UIView {
    UIView * _containerView;
    NSArray * _containerViewConstraints;
    _UIAlertControllerTextField * _textField;
}

@property (nonatomic, retain) UIView *containerView;
@property (readonly) UITextField *textField;

- (void).cxx_destruct;
- (double)_borderWidth;
- (void)_loadConstraints;
- (id)_textFieldFont;
- (id)containerView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContainerView:(id)arg1;
- (id)textField;

@end
