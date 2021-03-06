/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDSaveUserPrivacySettingsOperationInfo : CKOperationInfo {
    NSString * _applicationBundleID;
    long long  _discoverable;
}

@property (nonatomic, copy) NSString *applicationBundleID;
@property (nonatomic) long long discoverable;

- (void).cxx_destruct;
- (id)applicationBundleID;
- (long long)discoverable;
- (id)init;
- (void)setApplicationBundleID:(id)arg1;
- (void)setDiscoverable:(long long)arg1;

@end
