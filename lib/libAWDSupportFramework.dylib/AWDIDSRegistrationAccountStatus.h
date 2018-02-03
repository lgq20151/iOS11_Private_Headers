/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSRegistrationAccountStatus : PBCodable <NSCopying> {
    int  _accountType;
    unsigned int  _doesExist;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int accountType : 1; 
        unsigned int doesExist : 1; 
        unsigned int isEnabled : 1; 
        unsigned int isUserDisabled : 1; 
        unsigned int isiCloudSignedIn : 1; 
        unsigned int registrationError : 1; 
        unsigned int registrationErrorReason : 1; 
        unsigned int registrationStatus : 1; 
    }  _has;
    unsigned int  _isEnabled;
    unsigned int  _isUserDisabled;
    unsigned int  _isiCloudSignedIn;
    int  _registrationError;
    int  _registrationErrorReason;
    int  _registrationStatus;
    NSString * _serviceIdentifier;
    unsigned long long  _timestamp;
}

@property (nonatomic) int accountType;
@property (nonatomic) unsigned int doesExist;
@property (nonatomic) bool hasAccountType;
@property (nonatomic) bool hasDoesExist;
@property (nonatomic) bool hasIsEnabled;
@property (nonatomic) bool hasIsUserDisabled;
@property (nonatomic) bool hasIsiCloudSignedIn;
@property (nonatomic) bool hasRegistrationError;
@property (nonatomic) bool hasRegistrationErrorReason;
@property (nonatomic) bool hasRegistrationStatus;
@property (nonatomic, readonly) bool hasServiceIdentifier;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int isEnabled;
@property (nonatomic) unsigned int isUserDisabled;
@property (nonatomic) unsigned int isiCloudSignedIn;
@property (nonatomic) int registrationError;
@property (nonatomic) int registrationErrorReason;
@property (nonatomic) int registrationStatus;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (nonatomic) unsigned long long timestamp;

- (int)accountType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)doesExist;
- (bool)hasAccountType;
- (bool)hasDoesExist;
- (bool)hasIsEnabled;
- (bool)hasIsUserDisabled;
- (bool)hasIsiCloudSignedIn;
- (bool)hasRegistrationError;
- (bool)hasRegistrationErrorReason;
- (bool)hasRegistrationStatus;
- (bool)hasServiceIdentifier;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (unsigned int)isEnabled;
- (bool)isEqual:(id)arg1;
- (unsigned int)isUserDisabled;
- (unsigned int)isiCloudSignedIn;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)registrationError;
- (int)registrationErrorReason;
- (int)registrationStatus;
- (id)serviceIdentifier;
- (void)setAccountType:(int)arg1;
- (void)setDoesExist:(unsigned int)arg1;
- (void)setHasAccountType:(bool)arg1;
- (void)setHasDoesExist:(bool)arg1;
- (void)setHasIsEnabled:(bool)arg1;
- (void)setHasIsUserDisabled:(bool)arg1;
- (void)setHasIsiCloudSignedIn:(bool)arg1;
- (void)setHasRegistrationError:(bool)arg1;
- (void)setHasRegistrationErrorReason:(bool)arg1;
- (void)setHasRegistrationStatus:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsEnabled:(unsigned int)arg1;
- (void)setIsUserDisabled:(unsigned int)arg1;
- (void)setIsiCloudSignedIn:(unsigned int)arg1;
- (void)setRegistrationError:(int)arg1;
- (void)setRegistrationErrorReason:(int)arg1;
- (void)setRegistrationStatus:(int)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
