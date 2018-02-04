/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMockIDSDevice : NSObject <NSCopying> {
    bool  _isActive;
    NSString * _name;
    NSUUID * _nanoRegistryPairingID;
    NSUUID * _nsuuid;
    NSString * _productBuildVersion;
    NSString * _service;
    NSString * _uniqueIDOverride;
}

@property (nonatomic) bool isActive;
@property (nonatomic, readonly) bool isDefaultPairedDevice;
@property (nonatomic, readonly) bool isLocallyPaired;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSUUID *nanoRegistryPairingID;
@property (nonatomic, retain) NSUUID *nsuuid;
@property (nonatomic, copy) NSString *productBuildVersion;
@property (nonatomic, copy) NSString *service;
@property (nonatomic, copy) NSString *uniqueIDOverride;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)hd_destinationIdentifier;
- (id)hd_deviceIdentifier;
- (bool)hd_isEquivalentToDevice:(id)arg1;
- (id)hd_shortDescription;
- (bool)isActive;
- (bool)isDefaultPairedDevice;
- (bool)isLocallyPaired;
- (id)name;
- (id)nanoRegistryPairingID;
- (id)nsuuid;
- (id)productBuildVersion;
- (id)service;
- (void)setIsActive:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNanoRegistryPairingID:(id)arg1;
- (void)setNsuuid:(id)arg1;
- (void)setProductBuildVersion:(id)arg1;
- (void)setService:(id)arg1;
- (void)setUniqueIDOverride:(id)arg1;
- (id)uniqueIDOverride;

@end