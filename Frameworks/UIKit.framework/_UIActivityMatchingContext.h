/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIActivityMatchingContext : NSObject <NSCopying> {
    NSArray * _activityItemValueClasses;
    NSArray * _activityItemValueExtensionMatchingDictionaries;
    NSArray * _activityItemValues;
    NSArray * _activityItems;
    NSArray * _activityTypeOrder;
    NSArray * _activityTypesGeneratedByDelegate;
    bool  _allowMatchingBuiltInActivities;
    bool  _allowMatchingExtensionActivities;
    NSArray * _applicationActivities;
    bool  _canExcludeExtensionActivities;
    UIActivity * _currentlySelectedActivity;
    long long  _excludedActivityCategories;
    NSArray * _excludedActivityTypes;
    NSArray * _externalMatchBuiltinOrderedActivities;
    NSData * _hostAuditTokenData;
    NSArray * _includedActivityTypes;
    NSArray * _prematchedExtensionActivities;
    bool  _shouldExcludeiCloudAddToDriveActivity;
    bool  _shouldExcludeiCloudSharingActivity;
    bool  _shouldMatchOnlyUserElectedExtensions;
    bool  _sourceIsManaged;
}

@property (nonatomic, retain) NSArray *activityItemValueClasses;
@property (nonatomic, retain) NSArray *activityItemValueExtensionMatchingDictionaries;
@property (nonatomic, readonly) NSArray *activityItemValues;
@property (nonatomic, readonly) NSArray *activityItems;
@property (nonatomic, retain) NSArray *activityTypeOrder;
@property (nonatomic, copy) NSArray *activityTypesGeneratedByDelegate;
@property (nonatomic) bool allowMatchingBuiltInActivities;
@property (nonatomic) bool allowMatchingExtensionActivities;
@property (nonatomic, retain) NSArray *applicationActivities;
@property (nonatomic) bool canExcludeExtensionActivities;
@property (nonatomic, retain) UIActivity *currentlySelectedActivity;
@property (nonatomic) long long excludedActivityCategories;
@property (nonatomic, retain) NSArray *excludedActivityTypes;
@property (nonatomic, retain) NSArray *externalMatchBuiltinOrderedActivities;
@property (nonatomic) const struct { unsigned int x1[8]; }*hostAuditToken;
@property (nonatomic, readonly) NSData *hostAuditTokenData;
@property (nonatomic, retain) NSArray *includedActivityTypes;
@property (nonatomic, retain) NSArray *prematchedExtensionActivities;
@property (nonatomic) bool shouldExcludeiCloudAddToDriveActivity;
@property (nonatomic) bool shouldExcludeiCloudSharingActivity;
@property (nonatomic) bool shouldMatchOnlyUserElectedExtensions;
@property (nonatomic, readonly) NSString *sourceApplicationIdentifier;
@property (nonatomic) bool sourceIsManaged;

- (void).cxx_destruct;
- (id)activitiesByFilteringExcludedActivities:(id)arg1;
- (id)activityItemValueClasses;
- (id)activityItemValueExtensionMatchingDictionaries;
- (id)activityItemValues;
- (id)activityItems;
- (id)activityTypeOrder;
- (id)activityTypesGeneratedByDelegate;
- (bool)allowMatchingBuiltInActivities;
- (bool)allowMatchingExtensionActivities;
- (id)applicationActivities;
- (bool)canExcludeExtensionActivities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentlySelectedActivity;
- (long long)excludedActivityCategories;
- (id)excludedActivityTypes;
- (id)externalMatchBuiltinOrderedActivities;
- (const struct { unsigned int x1[8]; }*)hostAuditToken;
- (id)hostAuditTokenData;
- (id)includedActivityTypes;
- (id)initWithActivityItems:(id)arg1 itemValues:(id)arg2;
- (id)prematchedExtensionActivities;
- (void)setActivityItemValueClasses:(id)arg1;
- (void)setActivityItemValueExtensionMatchingDictionaries:(id)arg1;
- (void)setActivityTypeOrder:(id)arg1;
- (void)setActivityTypesGeneratedByDelegate:(id)arg1;
- (void)setAllowMatchingBuiltInActivities:(bool)arg1;
- (void)setAllowMatchingExtensionActivities:(bool)arg1;
- (void)setApplicationActivities:(id)arg1;
- (void)setCanExcludeExtensionActivities:(bool)arg1;
- (void)setCurrentlySelectedActivity:(id)arg1;
- (void)setExcludedActivityCategories:(long long)arg1;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setExternalMatchBuiltinOrderedActivities:(id)arg1;
- (void)setHostAuditToken:(const struct { unsigned int x1[8]; }*)arg1;
- (void)setIncludedActivityTypes:(id)arg1;
- (void)setPrematchedExtensionActivities:(id)arg1;
- (void)setShouldExcludeiCloudAddToDriveActivity:(bool)arg1;
- (void)setShouldExcludeiCloudSharingActivity:(bool)arg1;
- (void)setShouldMatchOnlyUserElectedExtensions:(bool)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (bool)shouldExcludeActivity:(id)arg1;
- (bool)shouldExcludeiCloudAddToDriveActivity;
- (bool)shouldExcludeiCloudSharingActivity;
- (bool)shouldMatchOnlyUserElectedExtensions;
- (id)sourceApplicationIdentifier;
- (bool)sourceIsManaged;

@end
