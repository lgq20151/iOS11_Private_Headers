/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPercentDrivenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning> {
    NSString * __originalFillMode;
    bool  __transitionInterrupted;
    NSUUID * __uuid;
    NSUUID * _animationTrackingAnimatorUUID;
    long long  _completionCurve;
    double  _completionSpeed;
    bool  _didCommitAnimations;
    double  _duration;
    <UIViewImplicitlyAnimating> * _interruptibleAnimator;
    <UITimingCurveProvider> * _timingCurve;
    bool  _wantsInteractiveStart;
}

@property (setter=_setOriginalFillMode:, nonatomic, retain) NSString *_originalFillMode;
@property (getter=_isTransitionInterrupted, setter=_setTransitionInterrupted:, nonatomic) bool _transitionInterrupted;
@property (setter=_setUuid:, nonatomic, retain) NSUUID *_uuid;
@property (nonatomic) long long completionCurve;
@property (nonatomic) double completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) double percentComplete;
@property (readonly) Class superclass;
@property (nonatomic, retain) <UITimingCurveProvider> *timingCurve;
@property (nonatomic) bool wantsInteractiveStart;

- (void).cxx_destruct;
- (void)_continueInterruptibleTransition:(id)arg1 reverse:(bool)arg2;
- (bool)_isTransitionInterrupted;
- (id)_originalFillMode;
- (void)_resetInteractionController;
- (void)_setDuration:(double)arg1;
- (void)_setOriginalFillMode:(id)arg1;
- (void)_setTransitionInterrupted:(bool)arg1;
- (void)_setUuid:(id)arg1;
- (bool)_startInterruptibleTransition:(id)arg1;
- (void)_stopInteractiveTransition;
- (void)_stopInteractiveTransition:(id)arg1;
- (void)_updateInteractiveTransition:(id)arg1 percent:(double)arg2 isFinished:(bool)arg3 didComplete:(bool)arg4;
- (bool)_useAnimatorTrackingToDriveTransition;
- (id)_uuid;
- (void)cancelInteractiveTransition;
- (long long)completionCurve;
- (double)completionSpeed;
- (double)duration;
- (void)finishInteractiveTransition;
- (id)init;
- (void)pauseInteractiveTransition;
- (double)percentComplete;
- (void)setCompletionCurve:(long long)arg1;
- (void)setCompletionSpeed:(double)arg1;
- (void)setTimingCurve:(id)arg1;
- (void)setWantsInteractiveStart:(bool)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1 containerViews:(id)arg2 animation:(id /* block */)arg3;
- (id)timingCurve;
- (void)updateInteractiveTransition:(double)arg1;
- (bool)wantsInteractiveStart;

@end
