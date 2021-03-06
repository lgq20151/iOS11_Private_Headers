/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKStatisticsCollectionQueryServerConfiguration : HKQueryServerConfiguration {
    NSDate * _anchorDate;
    NSDateComponents * _intervalComponents;
    unsigned long long  _mergeStrategy;
    unsigned long long  _options;
}

@property (nonatomic, retain) NSDate *anchorDate;
@property (nonatomic, retain) NSDateComponents *intervalComponents;
@property (nonatomic) unsigned long long mergeStrategy;
@property (nonatomic) unsigned long long options;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)intervalComponents;
- (unsigned long long)mergeStrategy;
- (unsigned long long)options;
- (void)setAnchorDate:(id)arg1;
- (void)setIntervalComponents:(id)arg1;
- (void)setMergeStrategy:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end
