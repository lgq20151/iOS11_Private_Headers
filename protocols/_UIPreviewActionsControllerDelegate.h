/* made by EzioChiu.
 */

@protocol _UIPreviewActionsControllerDelegate <NSObject>

@required

- (void)didDismissPreviewActionsController:(_UIPreviewActionsController *)arg1;
- (struct CGPoint { double x1; double x2; })initialPlatterPositionForPreviewActionsController:(_UIPreviewActionsController *)arg1;
- (struct CGSize { double x1; double x2; })maximumPreviewActionsViewSizeForPreviewActionsController:(_UIPreviewActionsController *)arg1;
- (void)previewActionsController:(_UIPreviewActionsController *)arg1 didCompleteWithSelectedAction:(UIPreviewAction *)arg2;
- (void)previewActionsController:(_UIPreviewActionsController *)arg1 didUpdatePlatterTranslation:(struct CGVector { double x1; double x2; })arg2 withVelocity:(struct CGVector { double x1; double x2; })arg3;

@end
