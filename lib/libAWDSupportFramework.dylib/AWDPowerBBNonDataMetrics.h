/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerBBNonDataMetrics : PBCodable <NSCopying> {
    unsigned int  _aPWakeCacheFlushCnt;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int aPWakeCacheFlushCnt : 1; 
        unsigned int idlePowerMicroWatt : 1; 
        unsigned int oOSPowerMicroWatt : 1; 
        unsigned int registrationPowerMicroWatt : 1; 
        unsigned int scanPowerMicroWatt : 1; 
        unsigned int voicePowerMicroWatt : 1; 
    }  _has;
    unsigned int  _idlePowerMicroWatt;
    unsigned int  _oOSPowerMicroWatt;
    unsigned int  _registrationPowerMicroWatt;
    unsigned int  _scanPowerMicroWatt;
    unsigned long long  _timestamp;
    unsigned int  _voicePowerMicroWatt;
}

@property (nonatomic) unsigned int aPWakeCacheFlushCnt;
@property (nonatomic) bool hasAPWakeCacheFlushCnt;
@property (nonatomic) bool hasIdlePowerMicroWatt;
@property (nonatomic) bool hasOOSPowerMicroWatt;
@property (nonatomic) bool hasRegistrationPowerMicroWatt;
@property (nonatomic) bool hasScanPowerMicroWatt;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasVoicePowerMicroWatt;
@property (nonatomic) unsigned int idlePowerMicroWatt;
@property (nonatomic) unsigned int oOSPowerMicroWatt;
@property (nonatomic) unsigned int registrationPowerMicroWatt;
@property (nonatomic) unsigned int scanPowerMicroWatt;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int voicePowerMicroWatt;

- (unsigned int)aPWakeCacheFlushCnt;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAPWakeCacheFlushCnt;
- (bool)hasIdlePowerMicroWatt;
- (bool)hasOOSPowerMicroWatt;
- (bool)hasRegistrationPowerMicroWatt;
- (bool)hasScanPowerMicroWatt;
- (bool)hasTimestamp;
- (bool)hasVoicePowerMicroWatt;
- (unsigned long long)hash;
- (unsigned int)idlePowerMicroWatt;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)oOSPowerMicroWatt;
- (bool)readFrom:(id)arg1;
- (unsigned int)registrationPowerMicroWatt;
- (unsigned int)scanPowerMicroWatt;
- (void)setAPWakeCacheFlushCnt:(unsigned int)arg1;
- (void)setHasAPWakeCacheFlushCnt:(bool)arg1;
- (void)setHasIdlePowerMicroWatt:(bool)arg1;
- (void)setHasOOSPowerMicroWatt:(bool)arg1;
- (void)setHasRegistrationPowerMicroWatt:(bool)arg1;
- (void)setHasScanPowerMicroWatt:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVoicePowerMicroWatt:(bool)arg1;
- (void)setIdlePowerMicroWatt:(unsigned int)arg1;
- (void)setOOSPowerMicroWatt:(unsigned int)arg1;
- (void)setRegistrationPowerMicroWatt:(unsigned int)arg1;
- (void)setScanPowerMicroWatt:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVoicePowerMicroWatt:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)voicePowerMicroWatt;
- (void)writeTo:(id)arg1;

@end
