/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCSingleAppPayload : MCAppWhitelistPayloadBase

@property (nonatomic, readonly) NSString *applicationBundleID;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (id)applicationBundleID;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)mustInstallNonInteractively;
- (id)restrictions;
- (id)subtitle1Description;
- (id)subtitle1Label;

@end
