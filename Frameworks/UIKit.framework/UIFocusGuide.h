/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFocusGuide : UILayoutGuide <_UIFocusGuideRegionDelegate, _UIFocusRegionContainer, _UILegacyFocusRegion> {
    bool  _automaticallyDisableWhenIntersectingFocus;
    bool  _automaticallyPreferOwningView;
    bool  _didSetPreferredFocusedEnvironments;
    bool  _enabled;
    NSArray * _preferredFocusEnvironments;
}

@property (getter=_automaticallyDisableWhenIntersectingFocus, setter=_setAutomaticallyDisableWhenIntersectingFocus:, nonatomic) bool automaticallyDisableWhenIntersectingFocus;
@property (getter=_automaticallyPreferOwningView, setter=_setAutomaticallyPreferOwningView:, nonatomic) bool automaticallyPreferOwningView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_isEligibleForFocusInteraction, nonatomic, readonly) bool eligibleForFocusInteraction;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (getter=_linearFocusMovementSequences, nonatomic, readonly, copy) NSArray *linearFocusMovementSequences;
@property (getter=_parentFocusEnvironment, nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, copy) NSArray *preferredFocusEnvironments;
@property (getter=_preferredFocusMovementStyle, nonatomic, readonly) long long preferredFocusMovementStyle;
@property (nonatomic) UIView *preferredFocusedView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_automaticallyDisableWhenIntersectingFocus;
- (bool)_automaticallyPreferOwningView;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inCoordinateSpace:(id)arg2;
- (void)_didUpdateFocusToPreferredFocusedView;
- (id)_encodablePreferredFocusEnvironments;
- (id)_focusDebugOverlayParentView;
- (id)_focusRegionFocusSystem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_focusRegionFrame;
- (id)_focusRegionGuides;
- (id)_focusRegionView;
- (id)_fulfillPromisedFocusRegion;
- (bool)_isEligibleForFocusInteraction;
- (bool)_isPromiseFocusRegion;
- (bool)_isTransparentFocusRegion;
- (bool)_legacy_isEligibleForFocusInteraction;
- (id)_parentFocusEnvironment;
- (id)_preferredFocusRegionCoordinateSpace;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (void)_setAutomaticallyDisableWhenIntersectingFocus:(bool)arg1;
- (void)_setAutomaticallyPreferOwningView:(bool)arg1;
- (bool)_uili_isFocusGuide;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)focusGuideRegion:(id)arg1 preferredFocusEnvironmentsForMovementRequest:(id)arg2;
- (void)focusGuideRegion:(id)arg1 willParticipateAsDestinationRegionInFocusUpdate:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (void)setEnabled:(bool)arg1;
- (void)setNeedsFocusUpdate;
- (void)setPreferredFocusEnvironments:(id)arg1;
- (void)setPreferredFocusedView:(id)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;

@end
