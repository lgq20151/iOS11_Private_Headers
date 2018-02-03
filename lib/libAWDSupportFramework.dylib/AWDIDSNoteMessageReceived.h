/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSNoteMessageReceived : PBCodable <NSCopying> {
    int  _accountType;
    bool  _fromStorage;
    struct { 
        unsigned int localtimedelta : 1; 
        unsigned int servertimestamp : 1; 
        unsigned int timestamp : 1; 
        unsigned int accountType : 1; 
        unsigned int fromStorage : 1; 
    }  _has;
    unsigned long long  _localtimedelta;
    unsigned long long  _servertimestamp;
    NSString * _serviceIdentifier;
    unsigned long long  _timestamp;
}

@property (nonatomic) int accountType;
@property (nonatomic) bool fromStorage;
@property (nonatomic) bool hasAccountType;
@property (nonatomic) bool hasFromStorage;
@property (nonatomic) bool hasLocaltimedelta;
@property (nonatomic) bool hasServertimestamp;
@property (nonatomic, readonly) bool hasServiceIdentifier;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long localtimedelta;
@property (nonatomic) unsigned long long servertimestamp;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (nonatomic) unsigned long long timestamp;

- (int)accountType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)fromStorage;
- (bool)hasAccountType;
- (bool)hasFromStorage;
- (bool)hasLocaltimedelta;
- (bool)hasServertimestamp;
- (bool)hasServiceIdentifier;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)localtimedelta;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)servertimestamp;
- (id)serviceIdentifier;
- (void)setAccountType:(int)arg1;
- (void)setFromStorage:(bool)arg1;
- (void)setHasAccountType:(bool)arg1;
- (void)setHasFromStorage:(bool)arg1;
- (void)setHasLocaltimedelta:(bool)arg1;
- (void)setHasServertimestamp:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLocaltimedelta:(unsigned long long)arg1;
- (void)setServertimestamp:(unsigned long long)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
