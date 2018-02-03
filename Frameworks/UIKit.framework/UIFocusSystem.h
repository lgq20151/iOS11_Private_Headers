/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFocusSystem : NSObject <_UIFocusEnvironmentInternal, _UIFocusEnvironmentPrivate> {
    <_UIFocusSystemDelegate> * _delegate;
    bool  _enabled;
    struct { 
        unsigned int shouldIgnoreFocusUpdateIfNeeded : 1; 
        unsigned int isPendingFocusRestoration : 1; 
        unsigned int delegateRespondsToPreferredFocusEnvironments : 1; 
        unsigned int delegateRespondsToPrefersDeferralForFocusUpdateInContext : 1; 
        unsigned int delegateRespondsToShouldRestoreFocusInContext : 1; 
        unsigned int delegateRespondsToDidFinishUpdatingFocusInContext : 1; 
        unsigned int delegateRespondsToFocusMapContainer : 1; 
    }  _flags;
    _UIFocusAnimationCoordinatorManager * _focusAnimationCoordinatorManager;
    <_UIFocusHapticFeedbackGenerator> * _focusHapticFeedbackGenerator;
    _UIFocusSoundGenerator * _focusSoundGenerator;
    <UIFocusItem> * _focusedItem;
    _UIFocusUpdateRequest * _pendingFocusUpdateRequest;
    <UIFocusItem> * _previousFocusedItem;
}

@property (getter=_currentFocusAnimationCoordinator, nonatomic, readonly) UIFocusAnimationCoordinator *currentFocusAnimationCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_delegate, setter=_setDelegate:, nonatomic) <_UIFocusSystemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_isEligibleForFocusInteraction, nonatomic, readonly) bool eligibleForFocusInteraction;
@property (getter=_isEnabled, setter=_setEnabled:, nonatomic) bool enabled;
@property (getter=_focusAnimationCoordinatorManager, setter=_setFocusAnimationCoordinatorManager:, nonatomic, retain) _UIFocusAnimationCoordinatorManager *focusAnimationCoordinatorManager;
@property (getter=_focusHapticFeedbackGenerator, setter=_setFocusHapticFeedbackGenerator:, nonatomic, retain) <_UIFocusHapticFeedbackGenerator> *focusHapticFeedbackGenerator;
@property (getter=_focusMapContainer, nonatomic, readonly) <_UIFocusRegionContainer> *focusMapContainer;
@property (getter=_focusSoundGenerator, setter=_setFocusSoundGenerator:, nonatomic, retain) _UIFocusSoundGenerator *focusSoundGenerator;
@property (nonatomic, readonly) <UIFocusItem> *focusedItem;
@property (getter=_focusedView, nonatomic, readonly) UIView *focusedView;
@property (readonly) unsigned long long hash;
@property (getter=_hostFocusSystem, nonatomic, readonly) UIFocusSystem *hostFocusSystem;
@property (getter=_linearFocusMovementSequences, nonatomic, readonly, copy) NSArray *linearFocusMovementSequences;
@property (getter=_parentFocusEnvironment, nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (getter=_preferredFirstResponder, nonatomic, readonly) UIResponder *preferredFirstResponder;
@property (getter=_preferredFirstResponderFocusSystem, nonatomic, readonly) UIFocusSystem *preferredFirstResponderFocusSystem;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (getter=_preferredFocusMovementStyle, nonatomic, readonly) long long preferredFocusMovementStyle;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (getter=_previousFocusedItem, nonatomic, readonly) <UIFocusItem> *previousFocusedItem;
@property (readonly) Class superclass;

+ (id)_allFocusSystems;
+ (bool)environment:(id)arg1 containsEnvironment:(id)arg2;
+ (id)focusSystemForEnvironment:(id)arg1;
+ (void)registerURL:(id)arg1 forSoundIdentifier:(id)arg2;

- (void).cxx_destruct;
- (void)_cancelPendingFocusRestoration;
- (id)_contextForUpdateToEnvironment:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_currentFocusAnimationCoordinator;
- (bool)_debug_isEnvironmentEligibleForFocusUpdate:(id)arg1 debugReport:(id)arg2;
- (id)_delegate;
- (void)_didFinishUpdatingFocusInContext:(id)arg1;
- (id)_focusAnimationCoordinatorManager;
- (void)_focusEnvironmentWillDisappear:(id)arg1;
- (id)_focusHapticFeedbackGenerator;
- (id)_focusMapContainer;
- (id)_focusSoundGenerator;
- (id)_focusedView;
- (id)_hostFocusSystem;
- (id)_init;
- (id)_initWithFocusEnabled:(bool)arg1;
- (bool)_isEligibleForFocusInteraction;
- (bool)_isEnabled;
- (bool)_isEnvironmentEligibleForFocusUpdate:(id)arg1 shouldResetFocus:(bool*)arg2 debugReport:(id)arg3;
- (id)_parentFocusEnvironment;
- (void)_performWithoutFocusUpdates:(id /* block */)arg1;
- (bool)_postsFocusUpdateNotifications;
- (id)_preferredFirstResponder;
- (id)_preferredFirstResponderFocusSystem;
- (id)_preferredFirstResponderFocusSystemForFocusedItem:(id)arg1;
- (bool)_prefersDeferralForFocusUpdateInContext:(id)arg1;
- (id)_previousFocusedItem;
- (void)_requestFocusUpdate:(id)arg1;
- (bool)_requiresFocusedItemToHaveContainingView;
- (void)_setDelegate:(id)arg1;
- (void)_setEnabled:(bool)arg1;
- (void)_setEnabled:(bool)arg1 withAnimationCoordinator:(id)arg2;
- (void)_setFocusAnimationCoordinatorManager:(id)arg1;
- (void)_setFocusHapticFeedbackGenerator:(id)arg1;
- (void)_setFocusSoundGenerator:(id)arg1;
- (void)_setNeedsFocusRestoration;
- (bool)_shouldRestoreFocusInContext:(id)arg1;
- (id)_simulatedProgrammaticFocusUpdateToEnvironment:(id)arg1;
- (void)_uiktest_setPreviousFocusedItem:(id)arg1;
- (bool)_uiktest_updateFocusToItem:(id)arg1;
- (bool)_updateFocusImmediatelyWithContext:(id)arg1;
- (bool)_updateFocusWithContext:(id)arg1 report:(id)arg2;
- (id)_validatedPendingFocusUpdateRequest;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusedItem;
- (id)init;
- (id)preferredFocusEnvironments;
- (void)requestFocusUpdateToEnvironment:(id)arg1;
- (void)setNeedsFocusUpdate;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;

@end
