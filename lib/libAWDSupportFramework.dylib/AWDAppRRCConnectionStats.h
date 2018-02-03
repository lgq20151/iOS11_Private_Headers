/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDAppRRCConnectionStats : PBCodable <NSCopying> {
    unsigned int  _bundleBGDuration;
    unsigned int  _bundleFGDuration;
    NSString * _bundleName;
    struct { 
        unsigned int bundleBGDuration : 1; 
        unsigned int bundleFGDuration : 1; 
        unsigned int numMOConnectionTriggered : 1; 
        unsigned int numMTConnectionTriggered : 1; 
        unsigned int rAT : 1; 
        unsigned int totalBytesTransferred : 1; 
    }  _has;
    unsigned int  _numMOConnectionTriggered;
    unsigned int  _numMTConnectionTriggered;
    int  _rAT;
    unsigned int  _totalBytesTransferred;
}

@property (nonatomic) unsigned int bundleBGDuration;
@property (nonatomic) unsigned int bundleFGDuration;
@property (nonatomic, retain) NSString *bundleName;
@property (nonatomic) bool hasBundleBGDuration;
@property (nonatomic) bool hasBundleFGDuration;
@property (nonatomic, readonly) bool hasBundleName;
@property (nonatomic) bool hasNumMOConnectionTriggered;
@property (nonatomic) bool hasNumMTConnectionTriggered;
@property (nonatomic) bool hasRAT;
@property (nonatomic) bool hasTotalBytesTransferred;
@property (nonatomic) unsigned int numMOConnectionTriggered;
@property (nonatomic) unsigned int numMTConnectionTriggered;
@property (nonatomic) int rAT;
@property (nonatomic) unsigned int totalBytesTransferred;

- (int)StringAsRAT:(id)arg1;
- (unsigned int)bundleBGDuration;
- (unsigned int)bundleFGDuration;
- (id)bundleName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleBGDuration;
- (bool)hasBundleFGDuration;
- (bool)hasBundleName;
- (bool)hasNumMOConnectionTriggered;
- (bool)hasNumMTConnectionTriggered;
- (bool)hasRAT;
- (bool)hasTotalBytesTransferred;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numMOConnectionTriggered;
- (unsigned int)numMTConnectionTriggered;
- (int)rAT;
- (id)rATAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleBGDuration:(unsigned int)arg1;
- (void)setBundleFGDuration:(unsigned int)arg1;
- (void)setBundleName:(id)arg1;
- (void)setHasBundleBGDuration:(bool)arg1;
- (void)setHasBundleFGDuration:(bool)arg1;
- (void)setHasNumMOConnectionTriggered:(bool)arg1;
- (void)setHasNumMTConnectionTriggered:(bool)arg1;
- (void)setHasRAT:(bool)arg1;
- (void)setHasTotalBytesTransferred:(bool)arg1;
- (void)setNumMOConnectionTriggered:(unsigned int)arg1;
- (void)setNumMTConnectionTriggered:(unsigned int)arg1;
- (void)setRAT:(int)arg1;
- (void)setTotalBytesTransferred:(unsigned int)arg1;
- (unsigned int)totalBytesTransferred;
- (void)writeTo:(id)arg1;

@end
