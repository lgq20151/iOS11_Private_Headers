/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSOSShouldPlayAudioDuringCountdown : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int shouldPlayAudioDuringCountdown : 1; 
    }  _has;
    bool  _shouldPlayAudioDuringCountdown;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasShouldPlayAudioDuringCountdown;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool shouldPlayAudioDuringCountdown;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShouldPlayAudioDuringCountdown;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasShouldPlayAudioDuringCountdown:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setShouldPlayAudioDuringCountdown:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)shouldPlayAudioDuringCountdown;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
