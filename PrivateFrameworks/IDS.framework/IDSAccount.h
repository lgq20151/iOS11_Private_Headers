/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSAccount : NSObject {
    _IDSAccount * _internal;
}

@property (nonatomic, readonly, retain) _IDSAccount *_internal;
@property (setter=_setIsEnabled:, nonatomic) bool _isEnabled;
@property (nonatomic, retain) NSDictionary *accountInfo;
@property (nonatomic, readonly) int accountType;
@property (nonatomic, readonly) NSSet *activeAliases;
@property (nonatomic, readonly) NSArray *aliasStrings;
@property (nonatomic, readonly) NSArray *aliases;
@property (nonatomic, readonly) bool canSend;
@property (nonatomic, readonly) NSDate *dateRegistered;
@property (nonatomic, readonly) NSArray *devices;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSArray *handles;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isUsableForOuterMessaging;
@property (nonatomic, readonly) bool isUserDisabled;
@property (nonatomic, retain) NSString *loginID;
@property (nonatomic, readonly) NSArray *nearbyDevices;
@property (nonatomic, readonly) NSDate *nextRegistrationDate;
@property (nonatomic, readonly) NSString *primaryServiceName;
@property (nonatomic, readonly) NSString *profileID;
@property (nonatomic, readonly) NSDictionary *profileInfo;
@property (nonatomic, readonly) NSData *pushToken;
@property (nonatomic, readonly) NSString *regionBasePhoneNumber;
@property (nonatomic, readonly) NSString *regionID;
@property (nonatomic, readonly) NSDictionary *regionServerContext;
@property (nonatomic, readonly) NSArray *registeredURIs;
@property (nonatomic, readonly) NSData *registrationCertificate;
@property (nonatomic, readonly) int registrationStatus;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) NSArray *vettedAliases;

- (void).cxx_destruct;
- (void)_callNearbyDevicesChanged;
- (id)_initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (id)_internal;
- (bool)_isEnabled;
- (void)_reloadCachedDevices;
- (void)_reregisterAndReidentify:(bool)arg1;
- (void)_setIsEnabled:(bool)arg1;
- (id)accountInfo;
- (int)accountType;
- (void)activateAlias:(id)arg1;
- (id)activeAliases;
- (void)addAliases:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addRegistrationDelegate:(id)arg1 queue:(id)arg2;
- (id)aliasStrings;
- (id)aliases;
- (void)authenticateAccount;
- (bool)canSend;
- (id)dateRegistered;
- (void)deactivateAlias:(id)arg1;
- (void)deactivateAndPurgeIdentify;
- (void)dealloc;
- (id)description;
- (id)devices;
- (id)displayName;
- (id)handles;
- (id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (bool)isActive;
- (bool)isUsableForOuterMessaging;
- (bool)isUserDisabled;
- (id)loginID;
- (id)nearbyDevices;
- (id)nextRegistrationDate;
- (void)passwordUpdated;
- (id)primaryServiceName;
- (id)profileID;
- (id)profileInfo;
- (id)pushToken;
- (id)regionBasePhoneNumber;
- (id)regionID;
- (id)regionServerContext;
- (void)registerAccount;
- (id)registeredURIs;
- (id)registrationCertificate;
- (int)registrationStatus;
- (void)removeAliases:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)removeRegistrationDelegate:(id)arg1;
- (id)serviceName;
- (void)setAccountInfo:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setLoginID:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)uniqueID;
- (void)unregisterAccount;
- (void)unvalidateAliases:(id)arg1;
- (void)updateAccountWithAccountInfo:(id)arg1;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)validateAliases:(id)arg1;
- (void)validateProfile;
- (id)vettedAliases;

@end