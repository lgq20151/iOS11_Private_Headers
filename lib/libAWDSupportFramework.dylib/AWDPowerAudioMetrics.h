/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerAudioMetrics : PBCodable <NSCopying> {
    unsigned int  _audioHeadsetDuration;
    unsigned int  _audioHeadsetPowerMicroWatt;
    unsigned int  _audioSpeakerDuration;
    unsigned int  _audioSpeakerPowerMicroWatt;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _audioVolumeLevelDurationSpeakers;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _audioVolumeLevelDurations;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int audioHeadsetDuration : 1; 
        unsigned int audioHeadsetPowerMicroWatt : 1; 
        unsigned int audioSpeakerDuration : 1; 
        unsigned int audioSpeakerPowerMicroWatt : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int audioHeadsetDuration;
@property (nonatomic) unsigned int audioHeadsetPowerMicroWatt;
@property (nonatomic) unsigned int audioSpeakerDuration;
@property (nonatomic) unsigned int audioSpeakerPowerMicroWatt;
@property (nonatomic, readonly) unsigned int*audioVolumeLevelDurationSpeakers;
@property (nonatomic, readonly) unsigned long long audioVolumeLevelDurationSpeakersCount;
@property (nonatomic, readonly) unsigned int*audioVolumeLevelDurations;
@property (nonatomic, readonly) unsigned long long audioVolumeLevelDurationsCount;
@property (nonatomic) bool hasAudioHeadsetDuration;
@property (nonatomic) bool hasAudioHeadsetPowerMicroWatt;
@property (nonatomic) bool hasAudioSpeakerDuration;
@property (nonatomic) bool hasAudioSpeakerPowerMicroWatt;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)addAudioVolumeLevelDuration:(unsigned int)arg1;
- (void)addAudioVolumeLevelDurationSpeaker:(unsigned int)arg1;
- (unsigned int)audioHeadsetDuration;
- (unsigned int)audioHeadsetPowerMicroWatt;
- (unsigned int)audioSpeakerDuration;
- (unsigned int)audioSpeakerPowerMicroWatt;
- (unsigned int)audioVolumeLevelDurationAtIndex:(unsigned long long)arg1;
- (unsigned int)audioVolumeLevelDurationSpeakerAtIndex:(unsigned long long)arg1;
- (unsigned int*)audioVolumeLevelDurationSpeakers;
- (unsigned long long)audioVolumeLevelDurationSpeakersCount;
- (unsigned int*)audioVolumeLevelDurations;
- (unsigned long long)audioVolumeLevelDurationsCount;
- (void)clearAudioVolumeLevelDurationSpeakers;
- (void)clearAudioVolumeLevelDurations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAudioHeadsetDuration;
- (bool)hasAudioHeadsetPowerMicroWatt;
- (bool)hasAudioSpeakerDuration;
- (bool)hasAudioSpeakerPowerMicroWatt;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAudioHeadsetDuration:(unsigned int)arg1;
- (void)setAudioHeadsetPowerMicroWatt:(unsigned int)arg1;
- (void)setAudioSpeakerDuration:(unsigned int)arg1;
- (void)setAudioSpeakerPowerMicroWatt:(unsigned int)arg1;
- (void)setAudioVolumeLevelDurationSpeakers:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setAudioVolumeLevelDurations:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setHasAudioHeadsetDuration:(bool)arg1;
- (void)setHasAudioHeadsetPowerMicroWatt:(bool)arg1;
- (void)setHasAudioSpeakerDuration:(bool)arg1;
- (void)setHasAudioSpeakerPowerMicroWatt:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
