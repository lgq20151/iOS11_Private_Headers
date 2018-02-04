/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSAViewController : UIViewController {
    bool  _coachingTipsWereShowingBeforeRotation;
    bool  _firstLaunchCoachingTipsWereShowingBeforeRotation;
    NSArray * _leftApplicationToolbarItems;
    double  _leftToolbarItemsInset;
    double  _leftToolbarItemsMaximumWidth;
    NSArray * _rightApplicationToolbarItems;
    double  _rightToolbarItemsInset;
    double  _rightToolbarItemsMaximumWidth;
    bool  _shouldShowHelpOnAppear;
    bool  _showFirstLaunchCoachingTipAfterViewAppears;
    bool  _viewDidAppear;
}

@property (nonatomic, readonly) UIColor *applicationBackgroundColor;
@property (nonatomic, readonly) UIColor *applicationToolbarBackgroundColor;
@property (nonatomic, readonly) UIColor *applicationToolbarTintColor;
@property (nonatomic, readonly) UIColor *applicationToolbarTitleColor;
@property (nonatomic, readonly) id coachingTipsButton;
@property (nonatomic) bool coachingTipsWereShowingBeforeRotation;
@property (nonatomic) bool firstLaunchCoachingTipsWereShowingBeforeRotation;
@property (nonatomic, readonly) bool isLayoutBelowApplicationToolbar;
@property (nonatomic, readonly) bool isViewVisible;
@property (nonatomic, retain) NSArray *leftApplicationToolbarItems;
@property (nonatomic, readonly) double leftToolbarItemsInset;
@property (nonatomic) double leftToolbarItemsMaximumWidth;
@property (getter=isPresentingModalViewController, nonatomic, readonly) bool presentingModalViewController;
@property (nonatomic, retain) NSArray *rightApplicationToolbarItems;
@property (nonatomic, readonly) double rightToolbarItemsInset;
@property (nonatomic) double rightToolbarItemsMaximumWidth;
@property (nonatomic) bool shouldShowHelpOnAppear;
@property (nonatomic) bool showFirstLaunchCoachingTipAfterViewAppears;
@property (nonatomic, readonly) NSString *toolbarButtonModalGearImageName;
@property (nonatomic) bool viewDidAppear;

- (id)applicationBackgroundColor;
- (id)applicationToolbarBackgroundColor;
- (id)applicationToolbarTintColor;
- (id)applicationToolbarTitleColor;
- (id)coachingTipsButton;
- (bool)coachingTipsWereShowingBeforeRotation;
- (void)dealloc;
- (void)dismissCoachingTips;
- (void)dismissHelpWithCompletion:(id /* block */)arg1;
- (id)firstLaunchCoachingTipShownUserDefaultKey;
- (bool)firstLaunchCoachingTipsWereShowingBeforeRotation;
- (void)hideFirstLaunchCoachingTipIfNecessary;
- (id)imageViewFromSnapshotOfView:(id)arg1;
- (bool)isFirstLaunchCoachingTipShowing;
- (bool)isLayoutBelowApplicationToolbar;
- (bool)isPresentingModalViewController;
- (bool)isViewVisible;
- (id)leftApplicationToolbarItems;
- (double)leftToolbarItemsInset;
- (double)leftToolbarItemsMaximumWidth;
- (bool)modalToolbarSupportsUndo;
- (void)p_startListeningForVoiceOverNotifications;
- (void)p_stopListeningForVoiceOverNotifications;
- (void)p_voiceOverStatusDidChange;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)rightApplicationToolbarItems;
- (double)rightToolbarItemsInset;
- (double)rightToolbarItemsMaximumWidth;
- (void)setCoachingTipsWereShowingBeforeRotation:(bool)arg1;
- (void)setFirstLaunchCoachingTipsWereShowingBeforeRotation:(bool)arg1;
- (void)setLeftApplicationToolbarItems:(id)arg1;
- (void)setLeftToolbarItemsMaximumWidth:(double)arg1;
- (void)setRightApplicationToolbarItems:(id)arg1;
- (void)setRightToolbarItemsMaximumWidth:(double)arg1;
- (void)setShouldShowHelpOnAppear:(bool)arg1;
- (void)setShowFirstLaunchCoachingTipAfterViewAppears:(bool)arg1;
- (void)setViewDidAppear:(bool)arg1;
- (bool)shouldShowHelpOnAppear;
- (bool)showFirstLaunchCoachingTipAfterViewAppears;
- (void)showFirstLaunchCoachingTipIfNecessary;
- (void)showHelpWithTopicId:(id)arg1 completion:(id /* block */)arg2;
- (void)toggleCoachingTips:(id)arg1;
- (id)toolbarButtonForCoachingTipsWithTarget:(id)arg1 action:(SEL)arg2;
- (id)toolbarButtonForModalDone;
- (id)toolbarButtonForModalDoneWithTarget:(id)arg1 action:(SEL)arg2;
- (id)toolbarButtonForUndoWithIsModal:(bool)arg1;
- (id)toolbarButtonItemForCoachingTipsWithTarget:(id)arg1 action:(SEL)arg2;
- (id)toolbarButtonModalGearImageName;
- (id)toolbarButtonWithImageName:(id)arg1 disabledImageName:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)toolbarButtonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)toolbarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 isModal:(bool)arg4;
- (bool)viewDidAppear;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willHideCoachingTips;
- (void)willSetupApplicationToolbar;
- (void)willShowCoachingTips;

@end