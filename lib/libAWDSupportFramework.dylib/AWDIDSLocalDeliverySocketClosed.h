/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSLocalDeliverySocketClosed : PBCodable <NSCopying> {
    unsigned long long  _bytesReceived;
    unsigned long long  _bytesSent;
    unsigned long long  _closeError;
    NSString * _guid;
    struct { 
        unsigned int bytesReceived : 1; 
        unsigned int bytesSent : 1; 
        unsigned int closeError : 1; 
        unsigned int isToDefaultPairedDevice : 1; 
        unsigned int packetsReceived : 1; 
        unsigned int packetsSent : 1; 
        unsigned int priority : 1; 
        unsigned int socketError : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _isToDefaultPairedDevice;
    unsigned long long  _packetsReceived;
    unsigned long long  _packetsSent;
    unsigned long long  _priority;
    NSString * _service;
    unsigned long long  _socketError;
    NSString * _streamName;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long bytesReceived;
@property (nonatomic) unsigned long long bytesSent;
@property (nonatomic) unsigned long long closeError;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasBytesReceived;
@property (nonatomic) bool hasBytesSent;
@property (nonatomic) bool hasCloseError;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasIsToDefaultPairedDevice;
@property (nonatomic) bool hasPacketsReceived;
@property (nonatomic) bool hasPacketsSent;
@property (nonatomic) bool hasPriority;
@property (nonatomic, readonly) bool hasService;
@property (nonatomic) bool hasSocketError;
@property (nonatomic, readonly) bool hasStreamName;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long isToDefaultPairedDevice;
@property (nonatomic) unsigned long long packetsReceived;
@property (nonatomic) unsigned long long packetsSent;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, retain) NSString *service;
@property (nonatomic) unsigned long long socketError;
@property (nonatomic, retain) NSString *streamName;
@property (nonatomic) unsigned long long timestamp;

- (unsigned long long)bytesReceived;
- (unsigned long long)bytesSent;
- (unsigned long long)closeError;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasBytesReceived;
- (bool)hasBytesSent;
- (bool)hasCloseError;
- (bool)hasGuid;
- (bool)hasIsToDefaultPairedDevice;
- (bool)hasPacketsReceived;
- (bool)hasPacketsSent;
- (bool)hasPriority;
- (bool)hasService;
- (bool)hasSocketError;
- (bool)hasStreamName;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)isToDefaultPairedDevice;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)packetsReceived;
- (unsigned long long)packetsSent;
- (unsigned long long)priority;
- (bool)readFrom:(id)arg1;
- (id)service;
- (void)setBytesReceived:(unsigned long long)arg1;
- (void)setBytesSent:(unsigned long long)arg1;
- (void)setCloseError:(unsigned long long)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasBytesReceived:(bool)arg1;
- (void)setHasBytesSent:(bool)arg1;
- (void)setHasCloseError:(bool)arg1;
- (void)setHasIsToDefaultPairedDevice:(bool)arg1;
- (void)setHasPacketsReceived:(bool)arg1;
- (void)setHasPacketsSent:(bool)arg1;
- (void)setHasPriority:(bool)arg1;
- (void)setHasSocketError:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsToDefaultPairedDevice:(unsigned long long)arg1;
- (void)setPacketsReceived:(unsigned long long)arg1;
- (void)setPacketsSent:(unsigned long long)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setSocketError:(unsigned long long)arg1;
- (void)setStreamName:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)socketError;
- (id)streamName;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
