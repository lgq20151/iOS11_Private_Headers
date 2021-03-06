/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRCarPlayAppDeclaration : NSObject {
    NSSet * _autoMakerProtocols;
    NSString * _bundleIdentifier;
    bool  _launchUsingSiri;
    bool  _requiresGeoSupport;
    bool  _supportsCalling;
    bool  _supportsMessaging;
    bool  _supportsPlayableContent;
    bool  _systemApp;
}

@property (nonatomic, retain) NSSet *autoMakerProtocols;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) bool launchUsingSiri;
@property (nonatomic) bool requiresGeoSupport;
@property (nonatomic) bool supportsCalling;
@property (nonatomic) bool supportsMessaging;
@property (nonatomic) bool supportsPlayableContent;
@property (getter=isSystemApp, nonatomic) bool systemApp;

+ (id)declarationForAppProxy:(id)arg1;
+ (id)declarationForBundleIdentifier:(id)arg1 entitlements:(id)arg2 infoPlist:(id)arg3;
+ (id)declarationForBundleIdentifier:(id)arg1 info:(id)arg2 entitlements:(id)arg3;
+ (id)requiredEntitlementKeys;
+ (id)requiredInfoKeys;

- (void).cxx_destruct;
- (id)autoMakerProtocols;
- (id)bundleIdentifier;
- (bool)isSystemApp;
- (bool)launchUsingSiri;
- (bool)requiresGeoSupport;
- (void)setAutoMakerProtocols:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setLaunchUsingSiri:(bool)arg1;
- (void)setRequiresGeoSupport:(bool)arg1;
- (void)setSupportsCalling:(bool)arg1;
- (void)setSupportsMessaging:(bool)arg1;
- (void)setSupportsPlayableContent:(bool)arg1;
- (void)setSystemApp:(bool)arg1;
- (bool)supportsCalling;
- (bool)supportsMessaging;
- (bool)supportsPlayableContent;

@end
