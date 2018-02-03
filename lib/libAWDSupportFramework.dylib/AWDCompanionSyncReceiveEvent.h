/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCompanionSyncReceiveEvent : PBCodable <NSCopying> {
    unsigned long long  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int processingTime : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _processingTime;
    unsigned long long  _sequenceNumber;
    NSString * _service;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasProcessingTime;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic, readonly) bool hasService;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long processingTime;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic, retain) NSString *service;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (bool)hasDuration;
- (bool)hasProcessingTime;
- (bool)hasSequenceNumber;
- (bool)hasService;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)processingTime;
- (bool)readFrom:(id)arg1;
- (unsigned long long)sequenceNumber;
- (id)service;
- (void)setDuration:(unsigned long long)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasProcessingTime:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setProcessingTime:(unsigned long long)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
