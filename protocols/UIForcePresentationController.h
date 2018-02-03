/* made by EzioChiu.
 */

@protocol UIForcePresentationController <NSObject>

@required

- (bool)_canCommitPresentation;
- (bool)_canDismissPresentation;
- (UIView *)_revealContainerView;
- (bool)_sourceViewSnapshotAndScaleTransformSuppressed;
- (_UIStatesFeedbackGenerator *)feedbackGenerator;
- (<_UIForcePresentationControllerDelegate> *)forcePresentationControllerDelegate;
- (UIGestureRecognizer *)panningGestureRecognizer;
- (id /* block */)presentationPhaseCompletionBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, unsigned long long, void*, id, SEL
- (void)setFeedbackGenerator:(_UIStatesFeedbackGenerator *)arg1;
- (void)setForcePresentationControllerDelegate:(id <_UIForcePresentationControllerDelegate>)arg1;
- (void)setPanningGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)setPresentationPhaseCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)set_sourceViewSnapshotAndScaleTransformSuppressed:(bool)arg1;

@optional

- (void)_willCommitPresentation;

@end
