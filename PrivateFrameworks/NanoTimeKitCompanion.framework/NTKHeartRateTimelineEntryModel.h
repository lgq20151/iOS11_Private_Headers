/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKHeartRateTimelineEntryModel : NTKTimelineEntryModel {
    long long  _BPM;
    bool  _hasBPM;
    bool  _lessThanMinute;
    NSDate * _measurementDate;
}

@property (nonatomic) long long BPM;
@property (nonatomic) bool hasBPM;
@property (nonatomic) bool lessThanMinute;
@property (nonatomic, retain) NSDate *measurementDate;

- (void).cxx_destruct;
- (long long)BPM;
- (id)_bpmString;
- (id)_heartrateString;
- (id)_heartrateTintColor;
- (id)_newCircularTemplateUsingMediumSize:(bool)arg1;
- (id)_newExtraLargeTemplate;
- (id)_newModularLargeTemplate;
- (id)_newModularSmallTemplate;
- (id)_newUtilitarianLargeTemplate;
- (id)_newUtilitarianSmallFlatTemplate;
- (id)_newUtilitarianSmallTemplate;
- (bool)hasBPM;
- (bool)lessThanMinute;
- (id)measurementDate;
- (void)setBPM:(long long)arg1;
- (void)setHasBPM:(bool)arg1;
- (void)setLessThanMinute:(bool)arg1;
- (void)setMeasurementDate:(id)arg1;
- (id)templateForComplicationFamily:(long long)arg1;

@end
