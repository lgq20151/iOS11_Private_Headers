/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIMessageDeliveredMessage : PBCodable <NSCopying> {
    unsigned int  _deliveryDuration;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int deliveryDuration : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int deliveryDuration;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasDeliveryDuration;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)deliveryDuration;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasDeliveryDuration;
- (bool)hasGuid;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeliveryDuration:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasDeliveryDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
