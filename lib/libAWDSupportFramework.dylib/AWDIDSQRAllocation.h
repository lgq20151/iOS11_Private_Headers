/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSQRAllocation : PBCodable <NSCopying> {
    unsigned long long  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int timestamp : 1; 
        unsigned int hasRecipientAccepted : 1; 
        unsigned int payloadSize : 1; 
        unsigned int result : 1; 
    }  _has;
    unsigned int  _hasRecipientAccepted;
    unsigned int  _payloadSize;
    unsigned int  _result;
    NSString * _service;
    unsigned long long  _timestamp;
    NSString * _topic;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasHasRecipientAccepted;
@property (nonatomic) bool hasPayloadSize;
@property (nonatomic) unsigned int hasRecipientAccepted;
@property (nonatomic) bool hasResult;
@property (nonatomic, readonly) bool hasService;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTopic;
@property (nonatomic) unsigned int payloadSize;
@property (nonatomic) unsigned int result;
@property (nonatomic, retain) NSString *service;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *topic;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (bool)hasDuration;
- (bool)hasHasRecipientAccepted;
- (bool)hasPayloadSize;
- (unsigned int)hasRecipientAccepted;
- (bool)hasResult;
- (bool)hasService;
- (bool)hasTimestamp;
- (bool)hasTopic;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)payloadSize;
- (bool)readFrom:(id)arg1;
- (unsigned int)result;
- (id)service;
- (void)setDuration:(unsigned long long)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasHasRecipientAccepted:(bool)arg1;
- (void)setHasPayloadSize:(bool)arg1;
- (void)setHasRecipientAccepted:(unsigned int)arg1;
- (void)setHasResult:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPayloadSize:(unsigned int)arg1;
- (void)setResult:(unsigned int)arg1;
- (void)setService:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTopic:(id)arg1;
- (unsigned long long)timestamp;
- (id)topic;
- (void)writeTo:(id)arg1;

@end
