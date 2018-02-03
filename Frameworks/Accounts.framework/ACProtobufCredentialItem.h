/* made by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACProtobufCredentialItem : PBCodable <NSCopying> {
    NSString * _accountIdentifier;
    NSMutableArray * _dirtyProperties;
    ACProtobufDate * _expirationDate;
    struct { 
        unsigned int isPersistent : 1; 
    }  _has;
    bool  _isPersistent;
    ACProtobufURL * _objectID;
    NSString * _serviceName;
}

@property (nonatomic, retain) NSString *accountIdentifier;
@property (nonatomic, retain) NSMutableArray *dirtyProperties;
@property (nonatomic, retain) ACProtobufDate *expirationDate;
@property (nonatomic, readonly) bool hasExpirationDate;
@property (nonatomic) bool hasIsPersistent;
@property (nonatomic, readonly) bool hasObjectID;
@property (nonatomic) bool isPersistent;
@property (nonatomic, retain) ACProtobufURL *objectID;
@property (nonatomic, retain) NSString *serviceName;

+ (Class)dirtyPropertiesType;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (void)addDirtyProperties:(id)arg1;
- (void)clearDirtyProperties;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dirtyProperties;
- (id)dirtyPropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)dirtyPropertiesCount;
- (id)expirationDate;
- (bool)hasExpirationDate;
- (bool)hasIsPersistent;
- (bool)hasObjectID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isPersistent;
- (void)mergeFrom:(id)arg1;
- (id)objectID;
- (bool)readFrom:(id)arg1;
- (id)serviceName;
- (void)setAccountIdentifier:(id)arg1;
- (void)setDirtyProperties:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHasIsPersistent:(bool)arg1;
- (void)setIsPersistent:(bool)arg1;
- (void)setObjectID:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
