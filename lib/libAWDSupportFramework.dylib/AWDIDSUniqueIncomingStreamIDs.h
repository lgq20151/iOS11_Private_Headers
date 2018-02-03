/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSUniqueIncomingStreamIDs : PBCodable <NSCopying> {
    struct { 
        unsigned int incomingCount : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    long long  _incomingCount;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasIncomingCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) long long incomingCount;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIncomingCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (long long)incomingCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIncomingCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIncomingCount:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
