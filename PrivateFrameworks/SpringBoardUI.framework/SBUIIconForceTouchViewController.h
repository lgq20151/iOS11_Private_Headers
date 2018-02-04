/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIIconForceTouchViewController : UIViewController <UIGestureRecognizerDelegate> {
    double  _currentPeekProgress;
    SBUIIconForceTouchControllerDataProvider * _dataProvider;
    <SBUIIconForceTouchViewControllerDelegate> * _delegate;
    NSMutableArray * _dismissCompletionHandlers;
    SBUIIconForceTouchIconViewWrapperView * _iconViewWrapperViewAbove;
    SBUIIconForceTouchIconViewWrapperView * _iconViewWrapperViewBelow;
    NSArray * _initialLayoutConstraints;
    long long  _layout;
    UIView * _parallaxView;
    NSMutableArray * _presentCompletionHandlers;
    SBUIIconForceTouchWrapperViewController * _primaryViewController;
    SBUIIconForceTouchWrapperViewController * _secondaryViewController;
    NSArray * _showingLayoutConstraints;
    double  _smoothedValue;
    long long  _state;
    SBUIIconForceTouchVisualEffectView * _visualEffectView;
}

@property (nonatomic, readonly) SBUIIconForceTouchControllerDataProvider *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBUIIconForceTouchViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long layout;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (long long)_layoutForDataProvider:(id)arg1;
- (void)_peekAnimated:(bool)arg1 withRelativeTouchForce:(double)arg2 allowSmoothing:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_presentAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_revealWithRelativeForce:(double)arg1;
- (void)_scaleIconViewWithPercent:(double)arg1;
- (id)dataProvider;
- (void)dealloc;
- (id)delegate;
- (bool)dismissAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataProvider:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)layout;
- (void)loadView;
- (bool)peekAnimated:(bool)arg1 withRelativeTouchForce:(double)arg2 allowSmoothing:(bool)arg3;
- (bool)presentAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (long long)state;
- (void)viewDidLayoutSubviews;

@end