/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPushFilterChanged : PBCodable <NSCopying> {
    unsigned int  _changedReason;
    unsigned int  _changedTopicsCount;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int changedReason : 1; 
        unsigned int changedTopicsCount : 1; 
    }  _has;
    unsigned long long  _timestamp;
    NSString * _topic;
}

@property (nonatomic) unsigned int changedReason;
@property (nonatomic) unsigned int changedTopicsCount;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasChangedReason;
@property (nonatomic) bool hasChangedTopicsCount;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTopic;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *topic;

- (unsigned int)changedReason;
- (unsigned int)changedTopicsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasChangedReason;
- (bool)hasChangedTopicsCount;
- (bool)hasGuid;
- (bool)hasTimestamp;
- (bool)hasTopic;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChangedReason:(unsigned int)arg1;
- (void)setChangedTopicsCount:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasChangedReason:(bool)arg1;
- (void)setHasChangedTopicsCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTopic:(id)arg1;
- (unsigned long long)timestamp;
- (id)topic;
- (void)writeTo:(id)arg1;

@end
