/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerBluetoothMetrics : PBCodable <NSCopying> {
    unsigned int  _btConnectedDuration;
    unsigned int  _btOthersDuration;
    unsigned int  _btRxDuration;
    unsigned int  _btSleepDuration;
    unsigned int  _btTotalPowerMicroWatt;
    unsigned int  _btTxDuration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int btConnectedDuration : 1; 
        unsigned int btOthersDuration : 1; 
        unsigned int btRxDuration : 1; 
        unsigned int btSleepDuration : 1; 
        unsigned int btTotalPowerMicroWatt : 1; 
        unsigned int btTxDuration : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int btConnectedDuration;
@property (nonatomic) unsigned int btOthersDuration;
@property (nonatomic) unsigned int btRxDuration;
@property (nonatomic) unsigned int btSleepDuration;
@property (nonatomic) unsigned int btTotalPowerMicroWatt;
@property (nonatomic) unsigned int btTxDuration;
@property (nonatomic) bool hasBtConnectedDuration;
@property (nonatomic) bool hasBtOthersDuration;
@property (nonatomic) bool hasBtRxDuration;
@property (nonatomic) bool hasBtSleepDuration;
@property (nonatomic) bool hasBtTotalPowerMicroWatt;
@property (nonatomic) bool hasBtTxDuration;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)btConnectedDuration;
- (unsigned int)btOthersDuration;
- (unsigned int)btRxDuration;
- (unsigned int)btSleepDuration;
- (unsigned int)btTotalPowerMicroWatt;
- (unsigned int)btTxDuration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBtConnectedDuration;
- (bool)hasBtOthersDuration;
- (bool)hasBtRxDuration;
- (bool)hasBtSleepDuration;
- (bool)hasBtTotalPowerMicroWatt;
- (bool)hasBtTxDuration;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBtConnectedDuration:(unsigned int)arg1;
- (void)setBtOthersDuration:(unsigned int)arg1;
- (void)setBtRxDuration:(unsigned int)arg1;
- (void)setBtSleepDuration:(unsigned int)arg1;
- (void)setBtTotalPowerMicroWatt:(unsigned int)arg1;
- (void)setBtTxDuration:(unsigned int)arg1;
- (void)setHasBtConnectedDuration:(bool)arg1;
- (void)setHasBtOthersDuration:(bool)arg1;
- (void)setHasBtRxDuration:(bool)arg1;
- (void)setHasBtSleepDuration:(bool)arg1;
- (void)setHasBtTotalPowerMicroWatt:(bool)arg1;
- (void)setHasBtTxDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
