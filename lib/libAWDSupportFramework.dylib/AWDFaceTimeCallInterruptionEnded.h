/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDFaceTimeCallInterruptionEnded : PBCodable <NSCopying> {
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int interruptionDuration : 1; 
        unsigned int isAudioResumed : 1; 
        unsigned int isVideo : 1; 
        unsigned int isVideoResumed : 1; 
        unsigned int linkQuality : 1; 
        unsigned int onLockScreen : 1; 
    }  _has;
    unsigned int  _interruptionDuration;
    unsigned int  _isAudioResumed;
    unsigned int  _isVideo;
    unsigned int  _isVideoResumed;
    int  _linkQuality;
    unsigned int  _onLockScreen;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *guid;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasInterruptionDuration;
@property (nonatomic) bool hasIsAudioResumed;
@property (nonatomic) bool hasIsVideo;
@property (nonatomic) bool hasIsVideoResumed;
@property (nonatomic) bool hasLinkQuality;
@property (nonatomic) bool hasOnLockScreen;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int interruptionDuration;
@property (nonatomic) unsigned int isAudioResumed;
@property (nonatomic) unsigned int isVideo;
@property (nonatomic) unsigned int isVideoResumed;
@property (nonatomic) int linkQuality;
@property (nonatomic) unsigned int onLockScreen;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasGuid;
- (bool)hasInterruptionDuration;
- (bool)hasIsAudioResumed;
- (bool)hasIsVideo;
- (bool)hasIsVideoResumed;
- (bool)hasLinkQuality;
- (bool)hasOnLockScreen;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (unsigned int)interruptionDuration;
- (unsigned int)isAudioResumed;
- (bool)isEqual:(id)arg1;
- (unsigned int)isVideo;
- (unsigned int)isVideoResumed;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (unsigned int)onLockScreen;
- (bool)readFrom:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasInterruptionDuration:(bool)arg1;
- (void)setHasIsAudioResumed:(bool)arg1;
- (void)setHasIsVideo:(bool)arg1;
- (void)setHasIsVideoResumed:(bool)arg1;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setHasOnLockScreen:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInterruptionDuration:(unsigned int)arg1;
- (void)setIsAudioResumed:(unsigned int)arg1;
- (void)setIsVideo:(unsigned int)arg1;
- (void)setIsVideoResumed:(unsigned int)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
