/* made by EzioChiu.
 */

@protocol _UITextFieldContentViewContext <_UITextFieldContent_Internal>

@required

- (bool)_isPasscodeStyle;
- (UITextField *)_ownerField;
- (double)_passcodeStyleAlpha;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_unobscuredSecureRange;
- (struct CGPoint { double x1; double x2; })textContainerOrigin;

@end
