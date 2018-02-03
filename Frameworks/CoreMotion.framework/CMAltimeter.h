/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAltimeter : NSObject {
    id  _internal;
}

+ (long long)authorizationStatus;
+ (void)dummySelector:(id)arg1;
+ (void)initialize;
+ (bool)isRelativeAltitudeAvailable;
+ (bool)isSignificantElevationAvailable;

- (void)dealloc;
- (void)deallocPrivate;
- (id)init;
- (id)initPrivate;
- (void)onFilteredPressure:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; } x2; }*)arg1;
- (void)querySignificantElevationChangeFromDate:(id)arg1 toDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)startRelativeAltitudeUpdatesPrivateToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startRelativeAltitudeUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startSignificantElevationUpdatesWithHandler:(id /* block */)arg1;
- (void)stopRelativeAltitudeUpdates;
- (void)stopRelativeAltitudeUpdatesPrivate;
- (void)stopSignificantElevationUpdates;

@end
