/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPushProxyManagerReceive : PBCodable <NSCopying> {
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int isNearby : 1; 
        unsigned int messageCommand : 1; 
    }  _has;
    unsigned int  _isNearby;
    unsigned int  _messageCommand;
    unsigned long long  _timestamp;
    NSString * _topic;
}

@property (nonatomic, retain) NSString *guid;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasIsNearby;
@property (nonatomic) bool hasMessageCommand;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTopic;
@property (nonatomic) unsigned int isNearby;
@property (nonatomic) unsigned int messageCommand;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *topic;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasGuid;
- (bool)hasIsNearby;
- (bool)hasMessageCommand;
- (bool)hasTimestamp;
- (bool)hasTopic;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)isNearby;
- (void)mergeFrom:(id)arg1;
- (unsigned int)messageCommand;
- (bool)readFrom:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasIsNearby:(bool)arg1;
- (void)setHasMessageCommand:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsNearby:(unsigned int)arg1;
- (void)setMessageCommand:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTopic:(id)arg1;
- (unsigned long long)timestamp;
- (id)topic;
- (void)writeTo:(id)arg1;

@end
