/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDBltDelayToSync : PBCodable <NSCopying> {
    unsigned int  _delayMs;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int delayMs : 1; 
        unsigned int initial : 1; 
    }  _has;
    bool  _initial;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int delayMs;
@property (nonatomic) bool hasDelayMs;
@property (nonatomic) bool hasInitial;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool initial;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)delayMs;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDelayMs;
- (bool)hasInitial;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)initial;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDelayMs:(unsigned int)arg1;
- (void)setHasDelayMs:(bool)arg1;
- (void)setHasInitial:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInitial:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
