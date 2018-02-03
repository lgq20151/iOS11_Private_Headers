/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardHandBiasTransitionCoordinator : NSObject <UIGestureRecognizerDelegate> {
    UIKeyboardHandBiasTransitionContext * _currentContext;
    UIKeyboardSquishTransition * _currentTransition;
    <UIKeyboardHandBiasTransitionCoordinatorDelegate> * _delegate;
    bool  _edgeSwipeDetected;
    double  _edgeSwipeProgress;
    double  _edgeSwipeVelocity;
    UIPanGestureRecognizer * _gestureRecognizer;
    long long  _initialBias;
    double  _initialEdgeTranslation;
    bool  _interactive;
    double  _swipeWidthRatio;
    bool  _transitionDidBegin;
    unsigned long long  _transitionStartEdge;
    long long  _transitionTargetBias;
}

@property (nonatomic, retain) UIKeyboardHandBiasTransitionContext *currentContext;
@property (nonatomic, retain) UIKeyboardSquishTransition *currentTransition;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIKeyboardHandBiasTransitionCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIPanGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (getter=isInteractive, nonatomic) bool interactive;
@property (readonly) Class superclass;
@property (nonatomic) double swipeWidthRatio;

- (void).cxx_destruct;
- (void)_didRecognizeSpacebarGestureOnStartEdge:(unsigned long long)arg1 withDistance:(double)arg2;
- (void)_handBiasPanGestureRecognizerStateDidChange:(id)arg1;
- (void)beginHandBiasTransitionWithContext:(id)arg1;
- (id)currentContext;
- (id)currentTransition;
- (id)delegate;
- (void)finishHandBiasTransition;
- (id)gestureRecognizer;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)installGestureRecognizers;
- (bool)isInteractive;
- (void)setCurrentContext:(id)arg1;
- (void)setCurrentTransition:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setSwipeWidthRatio:(double)arg1;
- (double)swipeWidthRatio;
- (void)uninstallGestureRecognizers;

@end
