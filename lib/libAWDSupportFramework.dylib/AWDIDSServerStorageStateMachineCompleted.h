/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSServerStorageStateMachineCompleted : PBCodable <NSCopying> {
    struct { 
        unsigned int linkType : 1; 
        unsigned int timeTaken : 1; 
        unsigned int timestamp : 1; 
        unsigned int totalMessages : 1; 
        unsigned int wasPrimary : 1; 
    }  _has;
    unsigned long long  _linkType;
    NSString * _serviceIdentifier;
    unsigned long long  _timeTaken;
    unsigned long long  _timestamp;
    unsigned long long  _totalMessages;
    bool  _wasPrimary;
}

@property (nonatomic) bool hasLinkType;
@property (nonatomic, readonly) bool hasServiceIdentifier;
@property (nonatomic) bool hasTimeTaken;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalMessages;
@property (nonatomic) bool hasWasPrimary;
@property (nonatomic) unsigned long long linkType;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (nonatomic) unsigned long long timeTaken;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long totalMessages;
@property (nonatomic) bool wasPrimary;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLinkType;
- (bool)hasServiceIdentifier;
- (bool)hasTimeTaken;
- (bool)hasTimestamp;
- (bool)hasTotalMessages;
- (bool)hasWasPrimary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)linkType;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serviceIdentifier;
- (void)setHasLinkType:(bool)arg1;
- (void)setHasTimeTaken:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalMessages:(bool)arg1;
- (void)setHasWasPrimary:(bool)arg1;
- (void)setLinkType:(unsigned long long)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setTimeTaken:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalMessages:(unsigned long long)arg1;
- (void)setWasPrimary:(bool)arg1;
- (unsigned long long)timeTaken;
- (unsigned long long)timestamp;
- (unsigned long long)totalMessages;
- (bool)wasPrimary;
- (void)writeTo:(id)arg1;

@end
