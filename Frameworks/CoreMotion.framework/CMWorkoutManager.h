/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMWorkoutManager : NSObject {
    CMWorkoutManagerInternal * _internal;
}

@property (nonatomic, readonly) CMWorkoutManagerInternal *_internal;
@property (nonatomic) <CMWorkoutManagerDelegate> *delegate;

+ (bool)isAvailable;

- (id)_internal;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setSuggestedStopTimeout:(double)arg1;
- (void)startWorkout:(id)arg1;
- (void)stopWorkout:(id)arg1;
- (unsigned long long)supportedMetricsForWorkoutType:(long long)arg1;

@end
