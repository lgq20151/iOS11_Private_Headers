/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIActivityHelper : NSObject {
    _UIActivityApplicationExtensionDiscovery * _applicationExtensionDiscovery;
    NSArray * _cachedBuiltinActivities;
    <_UIActivityHelperDelegate> * _delegate;
}

@property (nonatomic, retain) _UIActivityApplicationExtensionDiscovery *applicationExtensionDiscovery;
@property (nonatomic, readonly) NSArray *cachedBuiltinActivities;
@property (nonatomic, readonly) <_UIActivityHelperDelegate> *delegate;

- (void).cxx_destruct;
- (id)_activitiesByApplyingBeforeTypePinningToActivities:(id)arg1 activitiesToBeforeTypePin:(id)arg2;
- (id)_activitiesByApplyingDefaultOrdering:(id)arg1;
- (id)_activitiesByTypeOrderingActivities:(id)arg1 activityTypeOrdering:(id)arg2;
- (id)_defaultOrderingDescriptorForActivity:(id)arg1;
- (id)_defaultSortItemForBuiltinActivity:(id)arg1;
- (id)_defaultSortOrderForApplicationDefinedActivity:(id)arg1;
- (id)_defaultSortOrderForExtensionBasedActivity:(id)arg1;
- (id)_defaultSortOrderForOpenInAppActivity:(id)arg1;
- (id)_defaultSortOrderForOtherActivity:(id)arg1;
- (id)activitiesByOrderingActivities:(id)arg1 applyDefaultOrdering:(bool)arg2 applyBeforeTypePinning:(bool)arg3 activityTypeOrdering:(id)arg4;
- (id)applicationExtensionDiscovery;
- (id)cachedBuiltinActivities;
- (void)cancelActivityMatchingUpdates;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)orderedAvailableActivitiesForMatchingContext:(id)arg1;
- (void)setApplicationExtensionDiscovery:(id)arg1;

@end
