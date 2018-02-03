/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScreenFocusSystemManager : NSObject <BKSEventFocusObserving, _UIFocusMovementPerformerDelegate, _UIFocusSystemDelegate> {
    bool  _allowsForwardingFocusMovementActions;
    UIFocusSystem * _focusSystem;
    UIScreen * _screen;
    _UIFocusScrollManager * _scrollManager;
}

@property (getter=_uiktest_allowsForwardingFocusMovementActions, setter=_uiktest_setAllowsForwardingFocusMovementActions:, nonatomic) bool allowsForwardingFocusMovementActions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIFocusSystem *focusSystem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) _UIFocusScrollManager *scrollManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_focusMapContainerForFocusSystem:(id)arg1;
- (void)_focusMovementPerformer:(id)arg1 didFailToPerformFocusMovement:(id)arg2;
- (void)_focusSystem:(id)arg1 didFinishUpdatingFocusInContext:(id)arg2;
- (bool)_focusSystem:(id)arg1 prefersDeferralForFocusUpdateInContext:(id)arg2;
- (bool)_focusSystem:(id)arg1 shouldRestoreFocusInContext:(id)arg2;
- (id)_preferredFocusEnvironmentsForFocusSystem:(id)arg1;
- (bool)_uiktest_allowsForwardingFocusMovementActions;
- (void)_uiktest_setAllowsForwardingFocusMovementActions:(bool)arg1;
- (void)dealloc;
- (id)focusSystem;
- (void)focusedDeferralPropertiesDidChange:(id)arg1;
- (id)initWithScreen:(id)arg1 scrollManager:(id)arg2;
- (id)screen;
- (id)scrollManager;

@end
