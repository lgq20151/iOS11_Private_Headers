/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSleepAlarmAWDSleepAlarmStatistics : PBCodable <NSCopying> {
    struct { 
        unsigned int mean : 1; 
        unsigned int median : 1; 
        unsigned int percentile25 : 1; 
        unsigned int percentile75 : 1; 
        unsigned int stddev : 1; 
    }  _has;
    long long  _mean;
    long long  _median;
    long long  _percentile25;
    long long  _percentile75;
    long long  _stddev;
}

@property (nonatomic) bool hasMean;
@property (nonatomic) bool hasMedian;
@property (nonatomic) bool hasPercentile25;
@property (nonatomic) bool hasPercentile75;
@property (nonatomic) bool hasStddev;
@property (nonatomic) long long mean;
@property (nonatomic) long long median;
@property (nonatomic) long long percentile25;
@property (nonatomic) long long percentile75;
@property (nonatomic) long long stddev;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMean;
- (bool)hasMedian;
- (bool)hasPercentile25;
- (bool)hasPercentile75;
- (bool)hasStddev;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)mean;
- (long long)median;
- (void)mergeFrom:(id)arg1;
- (long long)percentile25;
- (long long)percentile75;
- (bool)readFrom:(id)arg1;
- (void)setHasMean:(bool)arg1;
- (void)setHasMedian:(bool)arg1;
- (void)setHasPercentile25:(bool)arg1;
- (void)setHasPercentile75:(bool)arg1;
- (void)setHasStddev:(bool)arg1;
- (void)setMean:(long long)arg1;
- (void)setMedian:(long long)arg1;
- (void)setPercentile25:(long long)arg1;
- (void)setPercentile75:(long long)arg1;
- (void)setStddev:(long long)arg1;
- (long long)stddev;
- (void)writeTo:(id)arg1;

@end