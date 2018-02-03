/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMNatalimeter : NSObject {
    CMNatalimeterInternal * _internal;
}

@property (nonatomic, readonly) CMNatalimeterInternal *_internal;

+ (double)activeMetsThreshold;
+ (double)briskMinuteMetsThreshold;
+ (id)computeRestingCaloriesAtRate:(unsigned long long)arg1 user:(id)arg2 duration:(double)arg3;
+ (double)computeTimeToActiveCalories:(id)arg1 user:(id)arg2 workoutType:(long long)arg3;
+ (id)defaultUserProfile;
+ (bool)isNatalimeterAvailable;
+ (id)maxNatalieEntries;
+ (bool)resetCalibrationDataWithError:(id*)arg1;
+ (bool)setUserInfo:(id)arg1 error:(id*)arg2;
+ (bool)setUserProfile:(id)arg1 error:(id*)arg2;
+ (id)userProfile;

- (id)_internal;
- (bool)_shouldAllowMotionCalibrationPromptsForSession:(long long)arg1;
- (void)dealloc;
- (unsigned long long)getSupportedMetricsForSession:(long long)arg1;
- (id)init;
- (unsigned long long)promptsNeededForSession:(long long)arg1;
- (void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(id /* block */)arg2;
- (void)queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)setSession:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(id /* block */)arg1;
- (void)stopAbsoluteNatalimetryDataUpdates;

@end
