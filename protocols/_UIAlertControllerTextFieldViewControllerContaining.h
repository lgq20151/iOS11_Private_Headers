/* made by EzioChiu.
 */

@protocol _UIAlertControllerTextFieldViewControllerContaining <NSObject>

@required

- (void)_returnKeyPressedInLastTextField;
- (bool)_shouldSupportReturnKeyPresses;
- (UIView *)_textFieldContainingViewWithTextField:(UITextField *)arg1;

@end
