/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDevice : HMFObject <HMFLogging, HMFMerging, HMFObject, NSSecureCoding> {
    HMDAccount * _account;
    HMDDeviceCapabilities * _capabilities;
    NSString * _destination;
    NSUUID * _identifier;
    NSUUID * _idsIdentifier;
    NSUUID * _idsIdentifierHash;
    NSString * _name;
    HMFProductInfo * _productInfo;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDHomeKitVersion * _version;
}

@property (nonatomic) HMDAccount *account;
@property (copy) HMDDeviceCapabilities *capabilities;
@property (getter=isCurrentDevice, readonly) bool currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *destination;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (setter=setIDSIdentifier:, copy) NSUUID *idsIdentifier;
@property (setter=setIDSIdentifierHash:, copy) NSUUID *idsIdentifierHash;
@property (readonly, copy) NSString *name;
@property (copy) HMFProductInfo *productInfo;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, copy) HMDHomeKitVersion *version;

+ (id)currentDeviceWithIDSService:(id)arg1;
+ (id)destinationForDevice:(id)arg1 service:(id)arg2;
+ (id)deviceDestinationForDestination:(id)arg1;
+ (id)deviceDestinationForDevice:(id)arg1 service:(id)arg2;
+ (id)deviceWithDestination:(id)arg1;
+ (id)identifierFromDevice:(id)arg1 service:(id)arg2 error:(id*)arg3;
+ (id)identifierFromDeviceDestination:(id)arg1 error:(id*)arg2;
+ (id)idsIdentifierHashFromDevice:(id)arg1 error:(id*)arg2;
+ (id)idsIdentifierHashFromDeviceUniqueIdentifier:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (bool)isValidDestination:(id)arg1;
+ (id)logCategory;
+ (id)namespace;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (bool)bsoIsEqual:(id)arg1;
- (id)capabilities;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)idsIdentifier;
- (id)idsIdentifierHash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 idsIdentifier:(id)arg2 idsIdentifierHash:(id)arg3 name:(id)arg4 productInfo:(id)arg5 destination:(id)arg6 version:(id)arg7 capabilities:(id)arg8;
- (id)initWithService:(id)arg1 device:(id)arg2;
- (bool)isCurrentDevice;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (bool)mergeObject:(id)arg1;
- (id)name;
- (id)productInfo;
- (id)propertyDescription;
- (id)propertyQueue;
- (void)setAccount:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setIDSIdentifier:(id)arg1;
- (void)setIDSIdentifierHash:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProductInfo:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)shortDescription;
- (id)version;

@end
