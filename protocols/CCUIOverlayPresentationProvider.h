/* made by EzioChiu.
 */

@protocol CCUIOverlayPresentationProvider <NSObject>

@required

- (bool)allowHotPocketDuringTransition;
- (CCUIAnimationBatch *)animationBatchForTransitionState:(CCUIOverlayTransitionState *)arg1 previousTransitionState:(CCUIOverlayTransitionState *)arg2;
- (unsigned long long)backgroundMaterialOptions;
- (unsigned long long)finalTransitionTypeForState:(CCUIOverlayTransitionState *)arg1 gestureTranslation:(struct CGPoint { double x1; double x2; })arg2 gestureVelocity:(struct CGPoint { double x1; double x2; })arg3;
- (bool)isPanDismissalAvailable;
- (void)layoutViews;
- (<CCUIOverlayMetricsProvider> *)metricsProvider;
- (void)setMetricsProvider:(id <CCUIOverlayMetricsProvider>)arg1;
- (void)setViewProvider:(id <CCUIOverlayViewProvider>)arg1;
- (bool)tapAllowsDismissalForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (CCUIOverlayTransitionState *)transitionStateForType:(unsigned long long)arg1 interactive:(bool)arg2 translation:(struct CGPoint { double x1; double x2; })arg3;
- (<CCUIOverlayViewProvider> *)viewProvider;

@optional

- (CCUIAnimationBatch *)cleanupForDismissal;
- (<CCUIOverlayFlickGestureBehavior> *)flickGestureBehavior;
- (unsigned long long)headerMode;
- (CCUIAnimationBatch *)prepareForPresentation;
- (CCUIAnimationBatch *)secondaryAnimationBatchForTransitionState:(CCUIOverlayTransitionState *)arg1 previousTransitionState:(CCUIOverlayTransitionState *)arg2;

@end
