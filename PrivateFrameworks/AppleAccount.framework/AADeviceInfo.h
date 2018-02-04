/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AADeviceInfo : NSObject {
    APSConnection * _apsConnection;
    NSData * _token;
    bool  _tokenDone;
    NSObject<OS_dispatch_semaphore> * _tokenSema;
}

+ (id)apnsToken;
+ (id)appleIDClientIdentifier;
+ (id)clientInfoHeader;
+ (id)infoDictionary;
+ (bool)isInternalBuild;
+ (bool)isMultiUserMode;
+ (id)osVersion;
+ (id)productVersion;
+ (id)serialNumber;
+ (id)udid;
+ (id)userAgentHeader;

- (void).cxx_destruct;
- (id)apnsToken;
- (id)appleIDClientIdentifier;
- (id)buildVersion;
- (id)clientInfoHeader;
- (id)deviceBackingColor;
- (id)deviceClass;
- (id)deviceColor;
- (id)deviceCoverGlassColor;
- (id)deviceEnclosureColor;
- (id)deviceHousingColor;
- (id)deviceInfoDictionary;
- (id)deviceName;
- (bool)hasCellularCapability;
- (id)internationalMobileEquipmentIdentity;
- (id)mobileEquipmentIdentifier;
- (id)modelNumber;
- (id)osName;
- (id)osVersion;
- (id)productType;
- (id)productVersion;
- (id)regionCode;
- (id)serialNumber;
- (id)storageCapacity;
- (id)udid;
- (id)userAgentHeader;
- (id)wifiMacAddress;

@end