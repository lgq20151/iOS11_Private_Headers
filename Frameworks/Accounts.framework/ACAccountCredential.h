/* made by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACAccountCredential : NSObject <ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding> {
    NSMutableDictionary * _credentialItems;
    NSString * _credentialType;
    bool  _dirty;
    NSMutableSet * _dirtyProperties;
    bool  _empty;
    ACAccount * _owningAccount;
    bool  _requiresTouchID;
}

@property (nonatomic, copy) NSString *credentialType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDirty, nonatomic) bool dirty;
@property (nonatomic, readonly) NSSet *dirtyProperties;
@property (getter=isEmpty, nonatomic) bool empty;
@property (nonatomic, retain) NSDate *expiryDate;
@property (nonatomic, copy) NSString *findMyiPhoneToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hsaToken;
@property (nonatomic, copy) NSString *mapsToken;
@property (nonatomic, copy) NSString *oauthRefreshToken;
@property (nonatomic, copy) NSString *oauthToken;
@property (nonatomic, copy) NSString *oauthTokenNoSync;
@property (nonatomic, copy) NSString *oauthTokenSecret;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) bool requiresTouchID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *token;
@property (nonatomic, copy) NSDate *tokenExpiryDate;

+ (id)additionalServiceSegmentForAccountTypeIdentifier:(id)arg1;
+ (id)allSupportedKeys;
+ (id)credentialPolicyForAccountTypeIdentifier:(id)arg1 key:(id)arg2 clientID:(id)arg3;
+ (id)credentialWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;
+ (id)credentialWithPassword:(id)arg1;
+ (id)nonPersistentKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2;
+ (id)supportedKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_clearDirtyProperties;
- (id)_encodeProtobuf;
- (id)_encodeProtobufData;
- (id)_initWithProtobuf:(id)arg1;
- (id)_initWithProtobufData:(id)arg1;
- (void)_markPropertyDirty:(id)arg1;
- (void)_setOwningAccount:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialItemForKey:(id)arg1;
- (id)credentialItems;
- (id)credentialType;
- (id)dirtyProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)expiryDate;
- (id)findMyiPhoneToken;
- (unsigned long long)hash;
- (id)hsaToken;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOAuth2Token:(id)arg1 refreshToken:(id)arg2 expiryDate:(id)arg3;
- (id)initWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;
- (id)initWithPassword:(id)arg1;
- (bool)isDirty;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)keysForCredentialItems;
- (id)mapsToken;
- (id)oauthRefreshToken;
- (id)oauthToken;
- (id)oauthTokenNoSync;
- (id)oauthTokenSecret;
- (id)password;
- (bool)requiresTouchID;
- (void)setCredentialItem:(id)arg1 forKey:(id)arg2;
- (void)setCredentialType:(id)arg1;
- (void)setDirty:(bool)arg1;
- (void)setEmpty:(bool)arg1;
- (void)setExpiryDate:(id)arg1;
- (void)setFindMyiPhoneToken:(id)arg1;
- (void)setHsaToken:(id)arg1;
- (void)setMapsToken:(id)arg1;
- (void)setOauthRefreshToken:(id)arg1;
- (void)setOauthToken:(id)arg1;
- (void)setOauthTokenNoSync:(id)arg1;
- (void)setOauthTokenSecret:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setRequiresTouchID:(bool)arg1;
- (void)setToken:(id)arg1;
- (void)setTokenExpiryDate:(id)arg1;
- (id)token;
- (id)tokenExpiryDate;

@end
