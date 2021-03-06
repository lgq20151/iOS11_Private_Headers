/* made by EzioChiu.
 */

@protocol PDFAKControllerDelegateProtocol <NSObject>

@optional

- (NSArray *)controller:(AKController *)arg1 willSetToolbarItems:(NSArray *)arg2;
- (void)controllerDidEnterToolMode:(AKController *)arg1;
- (void)controllerDidExitToolMode:(AKController *)arg1;
- (void)controllerWillDismissSignatureCaptureView:(AKController *)arg1;
- (void)controllerWillDismissSignatureManagerView:(AKController *)arg1;
- (void)controllerWillEnterToolMode:(AKController *)arg1;
- (void)controllerWillExitToolMode:(AKController *)arg1;
- (void)controllerWillShowSignatureCaptureView:(AKController *)arg1;
- (void)controllerWillShowSignatureManagerView:(AKController *)arg1;
- (void)editCheckpointReachedForAnnotationController:(AKController *)arg1;
- (void)editDetectedForAnnotationController:(AKController *)arg1;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(AKController *)arg2;
- (void)penStrokeCompletedForAnnotationController:(AKController *)arg1;
- (UIViewController *)popoverPresentingViewControllerForAnnotationController:(AKController *)arg1;
- (void)positionSketchOverlay:(UIView *)arg1 forAnnotationController:(AKController *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })positioningRectForCandidatePicker;
- (NSUndoManager *)undoManagerForAnnotationController:(AKController *)arg1;

@end
