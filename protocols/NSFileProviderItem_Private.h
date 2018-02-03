/* made by EzioChiu.
 */

@protocol NSFileProviderItem_Private <NSFileProviderItem>

@optional

- (NSString *)containerDisplayName;
- (NSString *)displayName;
- (NSURL *)fileURL;
- (NSString *)fp_appContainerBundleIdentifier;
- (NSString *)fp_domainIdentifier;
- (bool)fp_isContainer;
- (bool)fp_isUbiquitous;
- (NSString *)fp_spotlightDomainIdentifier;
- (NSNumber *)hasUnresolvedConflicts;
- (NSNumber *)isDownloadRequested;
- (bool)isHidden;
- (NSString *)providerIdentifier;
- (NSString *)sharingPermissions;

@end
