/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarVisualProvider_Split : NSObject <_UIStatusBarVisualProvider> {
    NSTimer * _airplaneModeIgnoreChangesTimer;
    _UIStatusBarDisplayItemPlacement * _batteryChargingPlacement;
    NSTimer * _batteryExpansionTimer;
    UILayoutGuide * _cutoutLayoutGuide;
    bool  _expanded;
    NSLayoutConstraint * _leadingBottomConstraint;
    UILayoutGuide * _mainRegionsLayoutGuide;
    NSDictionary * _orderedDisplayItemPlacements;
    _UIStatusBarDisplayItemPlacement * _pillIconPlacement;
    NSTimer * _pillTimer;
    _UIStatusBarDisplayItemPlacement * _serviceNamePlacement;
    _UIStatusBar * _statusBar;
    NSTimer * _systemUpdatesTimer;
}

@property (nonatomic, retain) NSTimer *airplaneModeIgnoreChangesTimer;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *batteryChargingPlacement;
@property (nonatomic, retain) NSTimer *batteryExpansionTimer;
@property (nonatomic, retain) UILayoutGuide *cutoutLayoutGuide;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expanded;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *leadingBottomConstraint;
@property (nonatomic, retain) UILayoutGuide *mainRegionsLayoutGuide;
@property (nonatomic, retain) NSDictionary *orderedDisplayItemPlacements;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *pillIconPlacement;
@property (nonatomic, retain) NSTimer *pillTimer;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *serviceNamePlacement;
@property (nonatomic) _UIStatusBar *statusBar;
@property (nonatomic, readonly) _UIStatusBarStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimer *systemUpdatesTimer;

+ (struct CGSize { double x1; double x2; })intrinsicContentSizeForOrientation:(long long)arg1;

- (void).cxx_destruct;
- (id)_additionAnimationForBatteryCharging;
- (id)_animationForAirplaneMode;
- (id)_animationForBackgroundActivityIcon;
- (id)_animationForBackgroundActivityPill;
- (void)_applyToAppearingRegions:(bool)arg1 block:(id /* block */)arg2;
- (void)_applyToRegionWithIdentifiers:(id)arg1 block:(id /* block */)arg2;
- (void)_collapseBattery;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_collapseChargingBoltTransformForDisplayItem:(id)arg1;
- (id)_defaultAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)_disableSystemUpdates;
- (id)_entryKeysDelayedDuringBatteryExpansion;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_expandedChargingBoltTransformForDisplayItem:(id)arg1;
- (id)_removalAnimationForBatteryCharging;
- (void)_resetBattery;
- (bool)_shouldShowSystemUpdateForDisplayItemWithIdentifier:(id)arg1;
- (void)_stopBatteryCollapseTimer;
- (void)_switchPillToTimeWithUpdate:(bool)arg1;
- (id)_systemUpdateAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)_updateBackgroundActivityWithEntry:(id)arg1 timeEntry:(id)arg2 needsUpdate:(bool)arg3;
- (void)_updateDataForBackgroundActivity:(id)arg1;
- (void)_updateDataForBatteryCharging:(id)arg1;
- (void)_updateDataForService:(id)arg1;
- (void)_updateDataForSystemNavigation:(id)arg1;
- (void)_updateDataForSystemUpdates:(id)arg1;
- (void)_updateSystemNavigationWithData:(id)arg1;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)airplaneModeIgnoreChangesTimer;
- (id)batteryChargingPlacement;
- (id)batteryExpansionTimer;
- (id)cutoutLayoutGuide;
- (void)dataUpdated:(id)arg1;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
- (bool)expanded;
- (id)leadingBottomConstraint;
- (id)mainRegionsLayoutGuide;
- (void)modeUpdatedFromMode:(long long)arg1;
- (id)orderedDisplayItemPlacements;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)pillIconPlacement;
- (id)pillTimer;
- (void)region:(id)arg1 highlighted:(bool)arg2 initialPress:(bool)arg3;
- (id)region:(id)arg1 willSetDisplayItems:(id)arg2;
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)serviceNamePlacement;
- (void)setAirplaneModeIgnoreChangesTimer:(id)arg1;
- (void)setBatteryChargingPlacement:(id)arg1;
- (void)setBatteryExpansionTimer:(id)arg1;
- (void)setCutoutLayoutGuide:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setLeadingBottomConstraint:(id)arg1;
- (void)setMainRegionsLayoutGuide:(id)arg1;
- (void)setOrderedDisplayItemPlacements:(id)arg1;
- (void)setPillIconPlacement:(id)arg1;
- (void)setPillTimer:(id)arg1;
- (void)setServiceNamePlacement:(id)arg1;
- (void)setStatusBar:(id)arg1;
- (void)setSystemUpdatesTimer:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (id)statusBar;
- (id)styleAttributes;
- (void)styleUpdatedFromStyle:(long long)arg1;
- (id)systemUpdatesTimer;
- (id)willUpdateWithData:(id)arg1;

@end
