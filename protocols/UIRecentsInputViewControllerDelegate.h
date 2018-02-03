/* made by EzioChiu.
 */

@protocol UIRecentsInputViewControllerDelegate <NSObject>

@required

- (void)didSelectRecentInput;
- (void)switchToKeyboard;
- (UITextInputTraits *)textInputTraits;

@end
