/* made by EzioChiu.
 */

@protocol UIViewControllerPreviewingDelegate_Private <NSObject>

@optional

- (void)_previewingContext:(id <UIViewControllerPreviewing_Private>)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)_previewingContext:(id <UIViewControllerPreviewing_Private>)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)animateRevealWithInteractionProgress:(UIInteractionProgress *)arg1 forPreviewingAtLocation:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(UIView *)arg3 containerView:(UIView *)arg4;
- (UIViewController *)committedViewControllerForPreviewViewController:(UIViewController *)arg1;
- (void)didDismissPreviewViewController:(UIViewController *)arg1 committing:(bool)arg2;
- (void)performCommitTransitionForPreviewViewController:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<UIViewControllerTransitioningDelegate> *)previewPresentationTransitioningDelegateForPosition:(struct CGPoint { double x1; double x2; })arg1 inSourceView:(UIView *)arg2;
- (bool)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)willPresentPreviewViewController:(UIViewController *)arg1 forLocation:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(UIView *)arg3;

@end
