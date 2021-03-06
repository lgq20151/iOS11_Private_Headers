/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDistanceDataCollector : HDPedometerDataCollector

+ (double)defaultCollectionInterval;
+ (id)domain;
+ (id)observedType;

- (id)quantitySamplesFromPedometerData:(id)arg1 toPedometerData:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 containsWorkoutSamples:(bool)arg5;

@end
