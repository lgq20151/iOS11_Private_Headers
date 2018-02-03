/* made by EzioChiu.
 */

@protocol UIDocumentInteractionControllerDelegate <NSObject>

@optional

- (bool)documentInteractionController:(UIDocumentInteractionController *)arg1 canPerformAction:(SEL)arg2;
- (void)documentInteractionController:(UIDocumentInteractionController *)arg1 didEndSendingToApplication:(NSString *)arg2;
- (bool)documentInteractionController:(UIDocumentInteractionController *)arg1 performAction:(SEL)arg2;
- (void)documentInteractionController:(UIDocumentInteractionController *)arg1 willBeginSendingToApplication:(NSString *)arg2;
- (void)documentInteractionControllerDidDismissOpenInMenu:(UIDocumentInteractionController *)arg1;
- (void)documentInteractionControllerDidDismissOptionsMenu:(UIDocumentInteractionController *)arg1;
- (void)documentInteractionControllerDidEndPreview:(UIDocumentInteractionController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })documentInteractionControllerRectForPreview:(UIDocumentInteractionController *)arg1;
- (UIViewController *)documentInteractionControllerViewControllerForPreview:(UIDocumentInteractionController *)arg1;
- (UIView *)documentInteractionControllerViewForPreview:(UIDocumentInteractionController *)arg1;
- (void)documentInteractionControllerWillBeginPreview:(UIDocumentInteractionController *)arg1;
- (void)documentInteractionControllerWillPresentOpenInMenu:(UIDocumentInteractionController *)arg1;
- (void)documentInteractionControllerWillPresentOptionsMenu:(UIDocumentInteractionController *)arg1;

@end
