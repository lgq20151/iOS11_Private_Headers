/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICompatibilityInputViewController : UIInputViewController <_UIKBDelegateAwareInputController> {
    UIKeyboard * _deferredSystemView;
    UIKeyboardInputMode * _incomingExtensionInputMode;
    double  _incomingExtensionInputModeTime;
    UIViewController * _inputController;
    UIKeyboardInputMode * _inputMode;
    NSArray * _internalEdgeMatchConstraints;
    double  _lastSuspendedTime;
    double  _resetInputModeTime;
    bool  _shouldRegenerateSizingConstraints;
    bool  _shouldSuppressRemoteInputController;
    bool  _tearingDownInputController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *inputController;
@property (nonatomic, retain) NSArray *internalEdgeMatchConstraints;
@property (readonly) Class superclass;

+ (bool)_requiresProxyInterface;
+ (void)applicationDidReceiveMemoryWarning:(id)arg1;
+ (id)deferredInputModeControllerWithKeyboard:(id)arg1;
+ (id)inputSnapshotViewForInputMode:(id)arg1 orientation:(long long)arg2;
+ (id)inputViewControllerWithView:(id)arg1;

- (id)_compatView;
- (id)_compatibilityController;
- (id)_initAsDeferredController;
- (id)_keyboard;
- (id)_keyboardForThisViewController;
- (id)_systemViewControllerForInputMode:(id)arg1;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;
- (void)addSnapshotViewForInputMode:(id)arg1;
- (void)assertCurrentInputModeIfNecessary;
- (id)childCompatibilityController;
- (void)dealloc;
- (void)didFinishTranslation;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)didSuspend:(id)arg1;
- (void)finishSplitTransition:(bool)arg1;
- (void)generateCompatibleSizeConstraintsIfNecessary;
- (id)inputController;
- (id)internalEdgeMatchConstraints;
- (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;
- (void)killIncomingExtension;
- (void)loadView;
- (id)preferredFocusedView;
- (void)rebuildChildConstraints;
- (void)removeSnapshotView;
- (void)resetInputMode;
- (void)resetInputModeInMainThread;
- (void)setInputController:(id)arg1;
- (void)setInputMode:(id)arg1;
- (void)setInternalEdgeMatchConstraints:(id)arg1;
- (void)setTearingDownInputController;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (void)shouldUpdateInputMode:(id)arg1;
- (void)takeSnapshotView;
- (void)tearDownInputController;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willBeginTranslation;
- (void)willResume:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
