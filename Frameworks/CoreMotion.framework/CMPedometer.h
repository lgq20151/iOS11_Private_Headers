/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMPedometer : NSObject {
    CMPedometerProxy * _pedometerProxy;
}

@property (nonatomic, readonly) CMPedometerProxy *pedometerProxy;

+ (long long)authorizationStatus;
+ (bool)isCadenceAvailable;
+ (bool)isDistanceAvailable;
+ (bool)isFloorCountingAvailable;
+ (bool)isPaceAvailable;
+ (bool)isPedometerEventTrackingAvailable;
+ (bool)isStepCountingAvailable;

- (id)_pedometerDataWithRecordID:(long long)arg1;
- (void)_queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (id)pedometerProxy;
- (void)queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(id /* block */)arg2;
- (void)queryPedometerDataSinceRecord:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)queryRawSpeedToKValueBinsWithHandler:(id /* block */)arg1;
- (void)queryRemoteRawSpeedToKValueBinsWithHandler:(id /* block */)arg1;
- (void)queryRemoteStepCadenceToStrideLengthBinsWithHandler:(id /* block */)arg1;
- (void)queryStepCadenceToStrideLengthBinsWithHandler:(id /* block */)arg1;
- (bool)sendStrideCalibrationHistoryToFile:(id)arg1;
- (void)startPedometerEventUpdatesWithHandler:(id /* block */)arg1;
- (void)startPedometerUpdatesFromDate:(id)arg1 withHandler:(id /* block */)arg2;
- (void)stopPedometerEventUpdates;
- (void)stopPedometerUpdates;

@end
