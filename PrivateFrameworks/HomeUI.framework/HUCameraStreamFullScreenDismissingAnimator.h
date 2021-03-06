/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCameraStreamFullScreenDismissingAnimator : HUCameraStreamFullScreenAnimator <UIViewControllerAnimatedTransitioning> {
    UIView * _cameraOverlaySnapshot;
    UIView * _cameraViewSnapshot;
}

@property (nonatomic, readonly) UIView *cameraOverlaySnapshot;
@property (nonatomic, readonly) UIView *cameraViewSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)cameraOverlaySnapshot;
- (id)cameraViewSnapshot;
- (id)initWithSourceFrameInPresentingView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cameraViewSnapshot:(id)arg2 cameraOverlaySnapshot:(id)arg3;
- (double)transitionDuration:(id)arg1;

@end
