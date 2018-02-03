/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCarouselLowerButtonLongPressed : PBCodable <NSCopying> {
    unsigned long long  _durationMs;
    struct { 
        unsigned int durationMs : 1; 
        unsigned int timestamp : 1; 
        unsigned int isOnWrist : 1; 
        unsigned int isWaterLocked : 1; 
    }  _has;
    bool  _isOnWrist;
    bool  _isWaterLocked;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long durationMs;
@property (nonatomic) bool hasDurationMs;
@property (nonatomic) bool hasIsOnWrist;
@property (nonatomic) bool hasIsWaterLocked;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool isOnWrist;
@property (nonatomic) bool isWaterLocked;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)durationMs;
- (bool)hasDurationMs;
- (bool)hasIsOnWrist;
- (bool)hasIsWaterLocked;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isOnWrist;
- (bool)isWaterLocked;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDurationMs:(unsigned long long)arg1;
- (void)setHasDurationMs:(bool)arg1;
- (void)setHasIsOnWrist:(bool)arg1;
- (void)setHasIsWaterLocked:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsOnWrist:(bool)arg1;
- (void)setIsWaterLocked:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end