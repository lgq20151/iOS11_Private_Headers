/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDeviceCapabilities : HMFObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _remoteGatewayCapable;
    bool  _residentCapable;
    bool  _supportsCloudDataSync;
    bool  _supportsDeviceSetup;
    bool  _supportsKeyTransferClient;
    bool  _supportsKeyTransferServer;
    bool  _supportsKeychainSync;
    bool  _supportsSharedEventTriggerActivation;
    bool  _supportsStandaloneMode;
    bool  _supportsWholeHouseAudio;
}

@property (getter=isRemoteGatewayCapable, nonatomic, readonly) bool remoteGatewayCapable;
@property (getter=isResidentCapable, nonatomic, readonly) bool residentCapable;
@property (nonatomic, readonly) bool supportsCloudDataSync;
@property (nonatomic, readonly) bool supportsDeviceSetup;
@property (nonatomic, readonly) bool supportsKeyTransferClient;
@property (nonatomic, readonly) bool supportsKeyTransferServer;
@property (nonatomic, readonly) bool supportsKeychainSync;
@property (nonatomic, readonly) bool supportsStandaloneMode;
@property (nonatomic, readonly) bool supportsWholeHouseAudio;

+ (id)deviceCapabilities;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProductInfo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRemoteGatewayCapable;
- (bool)isResidentCapable;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)shortDescription;
- (bool)supportsCloudDataSync;
- (bool)supportsDeviceSetup;
- (bool)supportsKeyTransferClient;
- (bool)supportsKeyTransferServer;
- (bool)supportsKeychainSync;
- (bool)supportsStandaloneMode;
- (bool)supportsWholeHouseAudio;

@end
