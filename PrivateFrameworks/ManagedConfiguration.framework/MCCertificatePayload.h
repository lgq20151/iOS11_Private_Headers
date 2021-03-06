/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCCertificatePayload : MCPayload {
    NSData * _certificatePersistentID;
    NSString * _installedOnDeviceID;
}

@property (nonatomic, retain) NSData *certificatePersistentID;
@property (nonatomic, readonly, retain) NSDate *expiry;
@property (nonatomic, copy) NSString *installedOnDeviceID;
@property (nonatomic, readonly) bool isFullyTrustedRootCert;
@property (nonatomic, readonly) bool isIdentity;
@property (nonatomic, readonly) bool isRoot;
@property (nonatomic, readonly) bool isSigned;

- (void).cxx_destruct;
- (id)certificatePersistentID;
- (struct __SecCertificate { }*)copyCertificate;
- (struct __SecIdentity { }*)copyIdentityFromKeychain;
- (id)description;
- (id)expiry;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installedOnDeviceID;
- (bool)isFullyTrustedRootCert;
- (bool)isIdentity;
- (bool)isRoot;
- (bool)isSigned;
- (void)setCertificatePersistentID:(id)arg1;
- (void)setInstalledOnDeviceID:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;

@end
