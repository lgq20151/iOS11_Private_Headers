/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSiriServerConnectionOpen : PBCodable <NSCopying> {
    int  _connectionType;
    unsigned long long  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) int connectionType;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (bool)hasConnectionType;
- (bool)hasDuration;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConnectionType:(int)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
