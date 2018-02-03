/* made by EzioChiu.
 */

@protocol UIAlertViewDelegate <NSObject>

@optional

- (void)alertView:(UIAlertView *)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(UIAlertView *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(UIAlertView *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(UIAlertView *)arg1;
- (bool)alertViewShouldEnableFirstOtherButton:(UIAlertView *)arg1;
- (void)didPresentAlertView:(UIAlertView *)arg1;
- (void)willPresentAlertView:(UIAlertView *)arg1;

@end
