/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSiriSpeechRecognized : PBCodable <NSCopying> {
    unsigned long long  _durationFromVoiceRecordingEnd;
    unsigned long long  _durationFromVoiceSendEnd;
    struct { 
        unsigned int durationFromVoiceRecordingEnd : 1; 
        unsigned int durationFromVoiceSendEnd : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long durationFromVoiceRecordingEnd;
@property (nonatomic) unsigned long long durationFromVoiceSendEnd;
@property (nonatomic) bool hasDurationFromVoiceRecordingEnd;
@property (nonatomic) bool hasDurationFromVoiceSendEnd;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)durationFromVoiceRecordingEnd;
- (unsigned long long)durationFromVoiceSendEnd;
- (bool)hasDurationFromVoiceRecordingEnd;
- (bool)hasDurationFromVoiceSendEnd;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDurationFromVoiceRecordingEnd:(unsigned long long)arg1;
- (void)setDurationFromVoiceSendEnd:(unsigned long long)arg1;
- (void)setHasDurationFromVoiceRecordingEnd:(bool)arg1;
- (void)setHasDurationFromVoiceSendEnd:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
