/* made by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACProtobufAccountType : PBCodable <NSCopying> {
    NSString * _accountTypeDescription;
    NSString * _credentialProtectionPolicy;
    NSString * _credentialType;
    bool  _encryptAccountProperties;
    struct { 
        unsigned int supportsAuthentication : 1; 
        unsigned int visibility : 1; 
        unsigned int encryptAccountProperties : 1; 
        unsigned int obsolete : 1; 
        unsigned int supportsMultipleAccounts : 1; 
    }  _has;
    NSString * _identifier;
    ACProtobufURL * _objectID;
    bool  _obsolete;
    NSString * _owningBundleID;
    int  _supportsAuthentication;
    bool  _supportsMultipleAccounts;
    int  _visibility;
}

@property (nonatomic, retain) NSString *accountTypeDescription;
@property (nonatomic, retain) NSString *credentialProtectionPolicy;
@property (nonatomic, retain) NSString *credentialType;
@property (nonatomic) bool encryptAccountProperties;
@property (nonatomic, readonly) bool hasCredentialProtectionPolicy;
@property (nonatomic, readonly) bool hasCredentialType;
@property (nonatomic) bool hasEncryptAccountProperties;
@property (nonatomic, readonly) bool hasObjectID;
@property (nonatomic) bool hasObsolete;
@property (nonatomic, readonly) bool hasOwningBundleID;
@property (nonatomic) bool hasSupportsAuthentication;
@property (nonatomic) bool hasSupportsMultipleAccounts;
@property (nonatomic) bool hasVisibility;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) ACProtobufURL *objectID;
@property (nonatomic) bool obsolete;
@property (nonatomic, retain) NSString *owningBundleID;
@property (nonatomic) int supportsAuthentication;
@property (nonatomic) bool supportsMultipleAccounts;
@property (nonatomic) int visibility;

- (void).cxx_destruct;
- (id)accountTypeDescription;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialProtectionPolicy;
- (id)credentialType;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)encryptAccountProperties;
- (bool)hasCredentialProtectionPolicy;
- (bool)hasCredentialType;
- (bool)hasEncryptAccountProperties;
- (bool)hasObjectID;
- (bool)hasObsolete;
- (bool)hasOwningBundleID;
- (bool)hasSupportsAuthentication;
- (bool)hasSupportsMultipleAccounts;
- (bool)hasVisibility;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objectID;
- (bool)obsolete;
- (id)owningBundleID;
- (bool)readFrom:(id)arg1;
- (void)setAccountTypeDescription:(id)arg1;
- (void)setCredentialProtectionPolicy:(id)arg1;
- (void)setCredentialType:(id)arg1;
- (void)setEncryptAccountProperties:(bool)arg1;
- (void)setHasEncryptAccountProperties:(bool)arg1;
- (void)setHasObsolete:(bool)arg1;
- (void)setHasSupportsAuthentication:(bool)arg1;
- (void)setHasSupportsMultipleAccounts:(bool)arg1;
- (void)setHasVisibility:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setObsolete:(bool)arg1;
- (void)setOwningBundleID:(id)arg1;
- (void)setSupportsAuthentication:(int)arg1;
- (void)setSupportsMultipleAccounts:(bool)arg1;
- (void)setVisibility:(int)arg1;
- (int)supportsAuthentication;
- (bool)supportsMultipleAccounts;
- (int)visibility;
- (void)writeTo:(id)arg1;

@end
