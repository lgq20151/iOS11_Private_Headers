/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarDisplayItemPlacement : NSObject <_UIStatusBarPrioritized> {
    bool  _enabled;
    NSSet * _excludedPlacements;
    NSSet * _excludedRegionIdentifiers;
    NSString * _identifier;
    long long  _priority;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) NSSet *excludedPlacements;
@property (nonatomic, readonly) NSSet *excludedRegionIdentifiers;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long priority;

+ (id)_placementWithIdentifier:(id)arg1 priority:(long long)arg2 excludingPlacements:(id)arg3 excludingAllPlacementsInRegions:(id)arg4;
+ (id)placementWithIdentifier:(id)arg1 priority:(long long)arg2;
+ (id)placementWithIdentifier:(id)arg1 priority:(long long)arg2 excludingAllPlacementsInRegions:(id)arg3;
+ (id)placementWithIdentifier:(id)arg1 priority:(long long)arg2 excludingPlacements:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)disabledPlacement;
- (id)excludedPlacements;
- (id)excludedRegionIdentifiers;
- (id)identifier;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (long long)priority;
- (void)setEnabled:(bool)arg1;

@end
