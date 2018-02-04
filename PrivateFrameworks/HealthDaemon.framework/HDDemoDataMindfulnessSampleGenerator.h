/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataMindfulnessSampleGenerator : HDDemoDataBaseSampleGenerator {
    bool  _didGenerateMindfulnessMinute;
    double  _nextMindfulSessionSampleTime;
}

@property (nonatomic) bool didGenerateMindfulnessMinute;
@property (nonatomic) double nextMindfulSessionSampleTime;

- (id)_heartRatesFromMindfulSessionSample:(id)arg1 demoPerson:(id)arg2 atTime:(double)arg3;
- (id)_mindfulSessionSampleForDemoPerson:(id)arg1 atTime:(double)arg2 startDate:(id)arg3;
- (bool)didGenerateMindfulnessMinute;
- (void)encodeWithCoder:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)nextMindfulSessionSampleTime;
- (void)setDidGenerateMindfulnessMinute:(bool)arg1;
- (void)setNextMindfulSessionSampleTime:(double)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;

@end