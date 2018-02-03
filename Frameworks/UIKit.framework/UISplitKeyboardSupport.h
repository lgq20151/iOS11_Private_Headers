/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISplitKeyboardSupport : UIKeyboardMotionSupport <UIGestureRecognizerDelegate, UIKeyboardKeyplaneTransitionDelegate> {
    id /* block */  _bounceCompletionBlock;
    CADisplayLink * _displayLink;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTranslation;
    bool  _isSplitting;
    bool  _isTranslating;
    double  _lastBounceTime;
    double  _lastTranslationNotificationTime;
    bool  _splitLockState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _targetTranslation;
    UIPanGestureRecognizer * _translateRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translationVelocity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSplitting;
@property (nonatomic, readonly) bool isTranslating;
@property (readonly) Class superclass;

- (void)_connectController:(id)arg1;
- (void)_disconnectingController:(id)arg1;
- (void)_updateBounceAnimation:(id)arg1;
- (void)_updatedController;
- (void)bounceAnimationDidFinish;
- (void)cancelBounceAnimation;
- (bool)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (void)dealloc;
- (void)dock;
- (void)finishTransitionWithCompletion:(id /* block */)arg1;
- (bool)generateSplitNotificationForNewPlacement:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)invalidateDisplayLink;
- (bool)isSplitting;
- (bool)isTranslating;
- (void)prepareForTransition;
- (bool)startedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (void)transitionDidFinish:(bool)arg1;
- (void)translateDetected:(id)arg1;
- (void)translateToPlacement:(id)arg1 animated:(bool)arg2;
- (void)translateToPlacement:(id)arg1 quietly:(bool)arg2 animated:(bool)arg3;
- (void)undock;
- (void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;
- (void)updatedControllerApplicator:(id)arg1;

@end