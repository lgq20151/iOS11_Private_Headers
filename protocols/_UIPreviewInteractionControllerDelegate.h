/* made by EzioChiu.
 */

@protocol _UIPreviewInteractionControllerDelegate <NSObject>

@required

- (void)previewInteractionController:(_UIPreviewInteractionController *)arg1 commitViewController:(UIViewController *)arg2;
- (UIViewController *)previewInteractionController:(_UIPreviewInteractionController *)arg1 viewControllerForPreviewingAtLocation:(struct CGPoint { double x1; double x2; })arg2 inCoordinateSpace:(id <UICoordinateSpace>)arg3 presentingViewController:(id*)arg4;

@optional

- (void)previewInteractionController:(_UIPreviewInteractionController *)arg1 didDismissViewController:(UIViewController *)arg2 committing:(bool)arg3;
- (void)previewInteractionController:(_UIPreviewInteractionController *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)previewInteractionController:(_UIPreviewInteractionController *)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)previewInteractionController:(_UIPreviewInteractionController *)arg1 willPresentViewController:(UIViewController *)arg2 forLocation:(struct CGPoint { double x1; double x2; })arg3 inSourceView:(UIView *)arg4;

@end
