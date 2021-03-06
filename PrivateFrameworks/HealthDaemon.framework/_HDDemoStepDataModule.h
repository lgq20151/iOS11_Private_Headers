/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDemoStepDataModule : _HDDemoDataModule {
    double  _nextDistance;
    double  _nextFireInterval;
    unsigned long long  _nextStepCount;
}

- (void)_getDelayBeforeNextStepData:(double*)arg1 stepCount:(unsigned long long*)arg2 distance:(double*)arg3;
- (id)_nextDistanceQuantitySampleWithInterval:(double)arg1;
- (id)_nextStepQuantitySampleWithInterval:(double)arg1;
- (double)nextFireInterval;
- (void)scheduleNextFire;
- (void)timerDidFireWithInterval:(double)arg1;

@end
