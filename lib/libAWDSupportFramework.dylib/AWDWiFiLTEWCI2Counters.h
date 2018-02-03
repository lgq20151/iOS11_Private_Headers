/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiLTEWCI2Counters : PBCodable <NSCopying> {
    struct { 
        unsigned int lteTxPowerLimitCount : 1; 
        unsigned int lteTxPowerLimitTimeInMS : 1; 
        unsigned int timeSharingWLANIntervalCount : 1; 
        unsigned int timeSharingWLANTimeInMS : 1; 
        unsigned int timestamp : 1; 
        unsigned int type4DueToTimerExpiryCount : 1; 
        unsigned int type4HonouredCount : 1; 
        unsigned int type4HonouredTimeInMS : 1; 
        unsigned int wlanProtectionFramesDueToLTECoexCount : 1; 
        unsigned int wlanRxPriCount : 1; 
        unsigned int wlanRxPriTimeInMS : 1; 
    }  _has;
    unsigned long long  _lteTxPowerLimitCount;
    unsigned long long  _lteTxPowerLimitTimeInMS;
    unsigned long long  _timeSharingWLANIntervalCount;
    unsigned long long  _timeSharingWLANTimeInMS;
    unsigned long long  _timestamp;
    unsigned long long  _type4DueToTimerExpiryCount;
    unsigned long long  _type4HonouredCount;
    unsigned long long  _type4HonouredTimeInMS;
    NSMutableArray * _wci2Counters;
    unsigned long long  _wlanProtectionFramesDueToLTECoexCount;
    unsigned long long  _wlanRxPriCount;
    unsigned long long  _wlanRxPriTimeInMS;
}

@property (nonatomic) bool hasLteTxPowerLimitCount;
@property (nonatomic) bool hasLteTxPowerLimitTimeInMS;
@property (nonatomic) bool hasTimeSharingWLANIntervalCount;
@property (nonatomic) bool hasTimeSharingWLANTimeInMS;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType4DueToTimerExpiryCount;
@property (nonatomic) bool hasType4HonouredCount;
@property (nonatomic) bool hasType4HonouredTimeInMS;
@property (nonatomic) bool hasWlanProtectionFramesDueToLTECoexCount;
@property (nonatomic) bool hasWlanRxPriCount;
@property (nonatomic) bool hasWlanRxPriTimeInMS;
@property (nonatomic) unsigned long long lteTxPowerLimitCount;
@property (nonatomic) unsigned long long lteTxPowerLimitTimeInMS;
@property (nonatomic) unsigned long long timeSharingWLANIntervalCount;
@property (nonatomic) unsigned long long timeSharingWLANTimeInMS;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long type4DueToTimerExpiryCount;
@property (nonatomic) unsigned long long type4HonouredCount;
@property (nonatomic) unsigned long long type4HonouredTimeInMS;
@property (nonatomic, retain) NSMutableArray *wci2Counters;
@property (nonatomic) unsigned long long wlanProtectionFramesDueToLTECoexCount;
@property (nonatomic) unsigned long long wlanRxPriCount;
@property (nonatomic) unsigned long long wlanRxPriTimeInMS;

+ (Class)wci2CountersType;

- (void)addWci2Counters:(id)arg1;
- (void)clearWci2Counters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLteTxPowerLimitCount;
- (bool)hasLteTxPowerLimitTimeInMS;
- (bool)hasTimeSharingWLANIntervalCount;
- (bool)hasTimeSharingWLANTimeInMS;
- (bool)hasTimestamp;
- (bool)hasType4DueToTimerExpiryCount;
- (bool)hasType4HonouredCount;
- (bool)hasType4HonouredTimeInMS;
- (bool)hasWlanProtectionFramesDueToLTECoexCount;
- (bool)hasWlanRxPriCount;
- (bool)hasWlanRxPriTimeInMS;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lteTxPowerLimitCount;
- (unsigned long long)lteTxPowerLimitTimeInMS;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLteTxPowerLimitCount:(bool)arg1;
- (void)setHasLteTxPowerLimitTimeInMS:(bool)arg1;
- (void)setHasTimeSharingWLANIntervalCount:(bool)arg1;
- (void)setHasTimeSharingWLANTimeInMS:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType4DueToTimerExpiryCount:(bool)arg1;
- (void)setHasType4HonouredCount:(bool)arg1;
- (void)setHasType4HonouredTimeInMS:(bool)arg1;
- (void)setHasWlanProtectionFramesDueToLTECoexCount:(bool)arg1;
- (void)setHasWlanRxPriCount:(bool)arg1;
- (void)setHasWlanRxPriTimeInMS:(bool)arg1;
- (void)setLteTxPowerLimitCount:(unsigned long long)arg1;
- (void)setLteTxPowerLimitTimeInMS:(unsigned long long)arg1;
- (void)setTimeSharingWLANIntervalCount:(unsigned long long)arg1;
- (void)setTimeSharingWLANTimeInMS:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType4DueToTimerExpiryCount:(unsigned long long)arg1;
- (void)setType4HonouredCount:(unsigned long long)arg1;
- (void)setType4HonouredTimeInMS:(unsigned long long)arg1;
- (void)setWci2Counters:(id)arg1;
- (void)setWlanProtectionFramesDueToLTECoexCount:(unsigned long long)arg1;
- (void)setWlanRxPriCount:(unsigned long long)arg1;
- (void)setWlanRxPriTimeInMS:(unsigned long long)arg1;
- (unsigned long long)timeSharingWLANIntervalCount;
- (unsigned long long)timeSharingWLANTimeInMS;
- (unsigned long long)timestamp;
- (unsigned long long)type4DueToTimerExpiryCount;
- (unsigned long long)type4HonouredCount;
- (unsigned long long)type4HonouredTimeInMS;
- (id)wci2Counters;
- (id)wci2CountersAtIndex:(unsigned long long)arg1;
- (unsigned long long)wci2CountersCount;
- (unsigned long long)wlanProtectionFramesDueToLTECoexCount;
- (unsigned long long)wlanRxPriCount;
- (unsigned long long)wlanRxPriTimeInMS;
- (void)writeTo:(id)arg1;

@end
