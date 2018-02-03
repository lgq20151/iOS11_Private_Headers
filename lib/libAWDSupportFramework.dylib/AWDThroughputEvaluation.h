/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDThroughputEvaluation : PBCodable <NSCopying> {
    unsigned int  _actualHighBandwidth;
    unsigned int  _actualLowBandwidth;
    unsigned int  _cca;
    int  _deviation;
    unsigned int  _estimatedHighBandwidth;
    unsigned int  _estimatedLowBandwidth;
    struct { 
        unsigned int wifiRssi : 1; 
        unsigned int actualHighBandwidth : 1; 
        unsigned int actualLowBandwidth : 1; 
        unsigned int cca : 1; 
        unsigned int deviation : 1; 
        unsigned int estimatedHighBandwidth : 1; 
        unsigned int estimatedLowBandwidth : 1; 
        unsigned int maxOfActualLowBandwidth : 1; 
        unsigned int movingAvgHighBandwidth : 1; 
        unsigned int movingAvgLowBandwidth : 1; 
        unsigned int phyRate : 1; 
        unsigned int qbssLoad : 1; 
    }  _has;
    unsigned int  _maxOfActualLowBandwidth;
    unsigned int  _movingAvgHighBandwidth;
    unsigned int  _movingAvgLowBandwidth;
    unsigned int  _phyRate;
    unsigned int  _qbssLoad;
    long long  _wifiRssi;
}

@property (nonatomic) unsigned int actualHighBandwidth;
@property (nonatomic) unsigned int actualLowBandwidth;
@property (nonatomic) unsigned int cca;
@property (nonatomic) int deviation;
@property (nonatomic) unsigned int estimatedHighBandwidth;
@property (nonatomic) unsigned int estimatedLowBandwidth;
@property (nonatomic) bool hasActualHighBandwidth;
@property (nonatomic) bool hasActualLowBandwidth;
@property (nonatomic) bool hasCca;
@property (nonatomic) bool hasDeviation;
@property (nonatomic) bool hasEstimatedHighBandwidth;
@property (nonatomic) bool hasEstimatedLowBandwidth;
@property (nonatomic) bool hasMaxOfActualLowBandwidth;
@property (nonatomic) bool hasMovingAvgHighBandwidth;
@property (nonatomic) bool hasMovingAvgLowBandwidth;
@property (nonatomic) bool hasPhyRate;
@property (nonatomic) bool hasQbssLoad;
@property (nonatomic) bool hasWifiRssi;
@property (nonatomic) unsigned int maxOfActualLowBandwidth;
@property (nonatomic) unsigned int movingAvgHighBandwidth;
@property (nonatomic) unsigned int movingAvgLowBandwidth;
@property (nonatomic) unsigned int phyRate;
@property (nonatomic) unsigned int qbssLoad;
@property (nonatomic) long long wifiRssi;

- (unsigned int)actualHighBandwidth;
- (unsigned int)actualLowBandwidth;
- (unsigned int)cca;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)deviation;
- (id)dictionaryRepresentation;
- (unsigned int)estimatedHighBandwidth;
- (unsigned int)estimatedLowBandwidth;
- (bool)hasActualHighBandwidth;
- (bool)hasActualLowBandwidth;
- (bool)hasCca;
- (bool)hasDeviation;
- (bool)hasEstimatedHighBandwidth;
- (bool)hasEstimatedLowBandwidth;
- (bool)hasMaxOfActualLowBandwidth;
- (bool)hasMovingAvgHighBandwidth;
- (bool)hasMovingAvgLowBandwidth;
- (bool)hasPhyRate;
- (bool)hasQbssLoad;
- (bool)hasWifiRssi;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxOfActualLowBandwidth;
- (void)mergeFrom:(id)arg1;
- (unsigned int)movingAvgHighBandwidth;
- (unsigned int)movingAvgLowBandwidth;
- (unsigned int)phyRate;
- (unsigned int)qbssLoad;
- (bool)readFrom:(id)arg1;
- (void)setActualHighBandwidth:(unsigned int)arg1;
- (void)setActualLowBandwidth:(unsigned int)arg1;
- (void)setCca:(unsigned int)arg1;
- (void)setDeviation:(int)arg1;
- (void)setEstimatedHighBandwidth:(unsigned int)arg1;
- (void)setEstimatedLowBandwidth:(unsigned int)arg1;
- (void)setHasActualHighBandwidth:(bool)arg1;
- (void)setHasActualLowBandwidth:(bool)arg1;
- (void)setHasCca:(bool)arg1;
- (void)setHasDeviation:(bool)arg1;
- (void)setHasEstimatedHighBandwidth:(bool)arg1;
- (void)setHasEstimatedLowBandwidth:(bool)arg1;
- (void)setHasMaxOfActualLowBandwidth:(bool)arg1;
- (void)setHasMovingAvgHighBandwidth:(bool)arg1;
- (void)setHasMovingAvgLowBandwidth:(bool)arg1;
- (void)setHasPhyRate:(bool)arg1;
- (void)setHasQbssLoad:(bool)arg1;
- (void)setHasWifiRssi:(bool)arg1;
- (void)setMaxOfActualLowBandwidth:(unsigned int)arg1;
- (void)setMovingAvgHighBandwidth:(unsigned int)arg1;
- (void)setMovingAvgLowBandwidth:(unsigned int)arg1;
- (void)setPhyRate:(unsigned int)arg1;
- (void)setQbssLoad:(unsigned int)arg1;
- (void)setWifiRssi:(long long)arg1;
- (long long)wifiRssi;
- (void)writeTo:(id)arg1;

@end
