/* made by EzioChiu.
 */

@protocol PLComposeRecipientViewControllerDelegate <NSObject>

@required

- (UINavigationController *)backingNavigationControllerForComposeRecipientViewController:(PLComposeRecipientViewController *)arg1;

@optional

- (void)composeRecipientViewControllerRecipientContainerViewDidResize:(PLComposeRecipientViewController *)arg1 fromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)composeRecipientViewControllerReturnKeyPressed:(PLComposeRecipientViewController *)arg1;

@end
