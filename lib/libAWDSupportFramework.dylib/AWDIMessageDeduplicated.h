/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIMessageDeduplicated : PBCodable <NSCopying> {
    unsigned int  _deduplicationInterval;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int deduplicationInterval : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int deduplicationInterval;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasDeduplicationInterval;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)deduplicationInterval;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasDeduplicationInterval;
- (bool)hasGuid;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeduplicationInterval:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasDeduplicationInterval:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
