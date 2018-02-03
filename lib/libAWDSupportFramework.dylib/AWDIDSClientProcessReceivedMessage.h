/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSClientProcessReceivedMessage : PBCodable <NSCopying> {
    unsigned long long  _deltaTime;
    struct { 
        unsigned int deltaTime : 1; 
        unsigned int payloadSize : 1; 
        unsigned int priority : 1; 
        unsigned int qos : 1; 
        unsigned int threadPriority : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _payloadSize;
    unsigned long long  _priority;
    unsigned long long  _qos;
    NSString * _service;
    unsigned long long  _threadPriority;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long deltaTime;
@property (nonatomic) bool hasDeltaTime;
@property (nonatomic) bool hasPayloadSize;
@property (nonatomic) bool hasPriority;
@property (nonatomic) bool hasQos;
@property (nonatomic, readonly) bool hasService;
@property (nonatomic) bool hasThreadPriority;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long payloadSize;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) unsigned long long qos;
@property (nonatomic, retain) NSString *service;
@property (nonatomic) unsigned long long threadPriority;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)deltaTime;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeltaTime;
- (bool)hasPayloadSize;
- (bool)hasPriority;
- (bool)hasQos;
- (bool)hasService;
- (bool)hasThreadPriority;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)payloadSize;
- (unsigned long long)priority;
- (unsigned long long)qos;
- (bool)readFrom:(id)arg1;
- (id)service;
- (void)setDeltaTime:(unsigned long long)arg1;
- (void)setHasDeltaTime:(bool)arg1;
- (void)setHasPayloadSize:(bool)arg1;
- (void)setHasPriority:(bool)arg1;
- (void)setHasQos:(bool)arg1;
- (void)setHasThreadPriority:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPayloadSize:(unsigned long long)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setQos:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setThreadPriority:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)threadPriority;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
