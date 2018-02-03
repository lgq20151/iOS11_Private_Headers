/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSLocalDeliveryMessageReceived : PBCodable <NSCopying> {
    struct { 
        unsigned int isFromDefaultPairedDevice : 1; 
        unsigned int linkType : 1; 
        unsigned int messageSize : 1; 
        unsigned int priority : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _isFromDefaultPairedDevice;
    unsigned long long  _linkType;
    unsigned long long  _messageSize;
    unsigned long long  _priority;
    NSString * _service;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasIsFromDefaultPairedDevice;
@property (nonatomic) bool hasLinkType;
@property (nonatomic) bool hasMessageSize;
@property (nonatomic) bool hasPriority;
@property (nonatomic, readonly) bool hasService;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long isFromDefaultPairedDevice;
@property (nonatomic) unsigned long long linkType;
@property (nonatomic) unsigned long long messageSize;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, retain) NSString *service;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsFromDefaultPairedDevice;
- (bool)hasLinkType;
- (bool)hasMessageSize;
- (bool)hasPriority;
- (bool)hasService;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)isFromDefaultPairedDevice;
- (unsigned long long)linkType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)messageSize;
- (unsigned long long)priority;
- (bool)readFrom:(id)arg1;
- (id)service;
- (void)setHasIsFromDefaultPairedDevice:(bool)arg1;
- (void)setHasLinkType:(bool)arg1;
- (void)setHasMessageSize:(bool)arg1;
- (void)setHasPriority:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsFromDefaultPairedDevice:(unsigned long long)arg1;
- (void)setLinkType:(unsigned long long)arg1;
- (void)setMessageSize:(unsigned long long)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
