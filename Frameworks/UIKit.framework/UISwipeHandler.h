/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISwipeHandler : NSObject <UIGestureRecognizerDelegate> {
    bool  _active;
    double  _confirmationTranslationAdjustment;
    struct { 
        unsigned long long direction; 
        bool primaryActionIsDestructive; 
        bool primaryActionCanBeTriggeredBySwipe; 
        double openThreshold; 
        double confirmationThreshold; 
    }  _currentSwipeConfig;
    unsigned long long  _currentSwipeState;
    UISwipeDismissalGestureRecognizer * _dismissalGestureRecognizer;
    double  _initialTranslation;
    bool  _resetSwipeWhileInitiating;
    UIPanGestureRecognizer * _swipeActionPanRecognizer;
    UISwipeActionController * _swipeController;
    _UIStatesFeedbackGenerator * _swipeFeedbackGenerator;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) struct { unsigned long long x1; bool x2; bool x3; double x4; double x5; } currentSwipeConfig;
@property (nonatomic, readonly) unsigned long long currentSwipeState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInteracting, nonatomic, readonly) bool interacting;
@property (readonly) Class superclass;
@property (nonatomic) UISwipeActionController *swipeController;
@property (nonatomic, retain) _UIStatesFeedbackGenerator *swipeFeedbackGenerator;

- (void).cxx_destruct;
- (struct { unsigned long long x1; unsigned long long x2; bool x3; double x4; double x5; double x6; })_currentSwipeInfoWithTargetOffset:(double)arg1 animated:(bool)arg2 usingSpringWithStiffness:(double)arg3;
- (unsigned long long)_directionForGestureRecognizer:(id)arg1;
- (void)_dismissalRecognizerDidRecognize:(id)arg1;
- (void)_moveSwipedItemToOffset:(double)arg1 animated:(bool)arg2 usingSpringWithStiffness:(double)arg3;
- (void)_setUp;
- (void)_swipeRecognizerBegan:(id)arg1;
- (void)_swipeRecognizerChanged:(id)arg1;
- (void)_swipeRecognizerDidRecognize:(id)arg1;
- (void)_swipeRecognizerEnded:(id)arg1 wasCancelled:(bool)arg2;
- (struct { unsigned long long x1; bool x2; bool x3; double x4; double x5; })currentSwipeConfig;
- (unsigned long long)currentSwipeState;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithSwipeController:(id)arg1;
- (void)initiateSwipeWithDirection:(unsigned long long)arg1 configuration:(id)arg2 location:(struct CGPoint { double x1; double x2; })arg3 userInitiated:(bool)arg4;
- (bool)isActive;
- (bool)isInteracting;
- (void)resetSwipe;
- (void)setActive:(bool)arg1;
- (void)setSwipeController:(id)arg1;
- (void)setSwipeFeedbackGenerator:(id)arg1;
- (id)swipeController;
- (id)swipeFeedbackGenerator;

@end
