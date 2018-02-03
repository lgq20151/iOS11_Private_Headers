/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCompanionSyncErrorEvent : PBCodable <NSCopying> {
    int  _error;
    struct { 
        unsigned int sequenceNumber : 1; 
        unsigned int timestamp : 1; 
        unsigned int error : 1; 
    }  _has;
    unsigned long long  _sequenceNumber;
    NSString * _service;
    unsigned long long  _timestamp;
}

@property (nonatomic) int error;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic, readonly) bool hasService;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic, retain) NSString *service;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsError:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)error;
- (id)errorAsString:(int)arg1;
- (bool)hasError;
- (bool)hasSequenceNumber;
- (bool)hasService;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)sequenceNumber;
- (id)service;
- (void)setError:(int)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
