/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMotionManager : NSObject {
    id  _internal;
}

@property (getter=isAccelerometerActive, nonatomic, readonly) bool accelerometerActive;
@property (getter=isAccelerometerAvailable, nonatomic, readonly) bool accelerometerAvailable;
@property (readonly) CMAccelerometerData *accelerometerData;
@property (nonatomic) double accelerometerUpdateInterval;
@property (readonly) CMAmbientPressureData *ambientPressureData;
@property (nonatomic, readonly) unsigned long long attitudeReferenceFrame;
@property (readonly) CMAmbientPressureData *compensatedAmbientPressureData;
@property (readonly) CMDeviceMotion *deviceMotion;
@property (getter=isDeviceMotionActive, nonatomic, readonly) bool deviceMotionActive;
@property (getter=isDeviceMotionAvailable, nonatomic, readonly) bool deviceMotionAvailable;
@property (nonatomic) double deviceMotionUpdateInterval;
@property (getter=isGyroActive, nonatomic, readonly) bool gyroActive;
@property (getter=isGyroAvailable, nonatomic, readonly) bool gyroAvailable;
@property (readonly) CMGyroData *gyroData;
@property (nonatomic) double gyroUpdateInterval;
@property (getter=isDeviceMotionLiteAvailable, nonatomic, readonly) bool isDeviceMotionLiteAvailable;
@property (getter=isMagnetometerActive, nonatomic, readonly) bool magnetometerActive;
@property (getter=isMagnetometerAvailable, nonatomic, readonly) bool magnetometerAvailable;
@property (readonly) CMMagnetometerData *magnetometerData;
@property (nonatomic) double magnetometerUpdateInterval;
@property (nonatomic) bool showsDeviceMovementDisplay;
@property (getter=isSidebandSensorFusionAvailable, nonatomic, readonly) bool sidebandSensorFusionAvailable;

+ (unsigned long long)availableAttitudeReferenceFrames;
+ (bool)configureM7Activity:(bool)arg1 stepCounting:(bool)arg2 activityForceCodeTransition:(bool)arg3 stepCountingForceCodeTransition:(bool)arg4 threshold:(bool)arg5 impulse:(bool)arg6 onBodyDetection:(bool)arg7 ispMode:(unsigned char)arg8 predictionInterval:(float)arg9 logLevel:(BOOL)arg10 proactiveRevisitTime:(unsigned short)arg11;
+ (void)dummySelector:(id)arg1;
+ (void)dumpDb:(long long)arg1 toURL:(id)arg2 onCompletion:(id /* block */)arg3;
+ (struct { int x1; double x2; union { struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_3_1_1; struct { bool x_2_2_1; BOOL x_2_2_2[246]; } x_3_1_2; } x3; })gyroCalibrationDatabaseGetBiasFit;
+ (struct { int x1; double x2; union { struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_3_1_1; struct { bool x_2_2_1; BOOL x_2_2_2[246]; } x_3_1_2; } x3; })gyroCalibrationDatabaseGetBiasFitAndEstimate:(struct { double x1; double x2; double x3; }*)arg1 atTemperature:(float)arg2;
+ (bool)hasRunMiniCal;
+ (void)initialize;
+ (void)setAllowInBackground:(bool)arg1;
+ (bool)setUrgentCalFlag;
+ (bool)startGyroMiniCalibration;
+ (bool)supportsGyroMiniCalibration;

- (id)accelerometerData;
- (double)accelerometerUpdateInterval;
- (id)ambientPressureData;
- (double)ambientPressureUpdateInterval;
- (void)applyNorthReference:(struct Sample { double x1; struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_2_1_3; struct { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_2_1_4; int x_2_1_5; bool x_2_1_6; bool x_2_1_7; bool x_2_1_8; float x_2_1_9; } x2; bool x3; unsigned int x4; unsigned char x5; struct Status { unsigned short x_6_1_1; } x6; float x7; }*)arg1;
- (unsigned long long)attitudeReferenceFrame;
- (void)captureStarting;
- (id)compensatedAmbientPressureData;
- (double)compensatedAmbientPressureUpdateInterval;
- (id)computeNonlinearPRTTFromDB:(id)arg1 where:(id)arg2;
- (void)connect;
- (void)dealloc;
- (void)deallocPrivate;
- (id)deviceMotion;
- (double)deviceMotionUpdateInterval;
- (void)didBecomeActive:(id)arg1;
- (void)didBecomeActivePrivate:(id)arg1;
- (void)dismissDeviceMovementDisplay;
- (id)gyroData;
- (double)gyroUpdateInterval;
- (int)gyttNumTemperatures;
- (id)init;
- (id)initPrivate;
- (id)initUsing6AxisSensorFusion;
- (id)initUsingGyroOnlySensorFusion;
- (bool)isAccelerometerActive;
- (bool)isAccelerometerAvailable;
- (bool)isAmbientPressureActive;
- (bool)isAmbientPressureAvailable;
- (bool)isCompensatedAmbientPressureActive;
- (bool)isDeviceMotionActive;
- (bool)isDeviceMotionAvailable;
- (bool)isDeviceMotionLiteAvailable;
- (bool)isGyroActive;
- (bool)isGyroAvailable;
- (bool)isMagnetometerActive;
- (bool)isMagnetometerAvailable;
- (bool)isSidebandSensorFusionAvailable;
- (id)magnetometerData;
- (double)magnetometerUpdateInterval;
- (void)onAccelerometer:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;
- (void)onAmbientPressure:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; } x2; }*)arg1;
- (void)onCompensatedAmbientPressure:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; } x2; }*)arg1;
- (void)onDeviceMotion:(const struct Sample { double x1; struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_2_1_3; struct { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_2_1_4; int x_2_1_5; bool x_2_1_6; bool x_2_1_7; bool x_2_1_8; float x_2_1_9; } x2; bool x3; unsigned int x4; unsigned char x5; struct Status { unsigned short x_6_1_1; } x6; float x7; }*)arg1;
- (void)onGeomagneticModel:(const struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; }*)arg1;
- (void)onGyro:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; unsigned short x3; bool x4; }*)arg1;
- (void)onMagnetometer:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;
- (bool)readRawAmbientPressureSamplesFromDB:(id)arg1 toQueue:(id)arg2 where:(id)arg3 withHandler:(id /* block */)arg4;
- (void)rebuildGytt;
- (void)setAccelerometerDataCallback:(int (*)arg1 info:(void*)arg2 interval:(double)arg3;
- (void)setAccelerometerUpdateInterval:(double)arg1;
- (void)setAccelerometerUpdateIntervalPrivate:(double)arg1;
- (void)setAmbientPressureUpdateInterval:(double)arg1;
- (void)setAmbientPressureUpdateIntervalPrivate:(double)arg1;
- (void)setCaptureMode:(long long)arg1;
- (void)setCompensatedAmbientPressureUpdateInterval:(double)arg1;
- (void)setCompensatedAmbientPressureUpdateIntervalPrivate:(double)arg1;
- (void)setDeviceMotionCallback:(int (*)arg1 info:(void*)arg2 interval:(double)arg3 fsync:(bool)arg4;
- (void)setDeviceMotionUpdateInterval:(double)arg1;
- (void)setDeviceMotionUpdateIntervalPrivate:(double)arg1;
- (void)setGyroDataCallback:(int (*)arg1 info:(void*)arg2 interval:(double)arg3;
- (void)setGyroUpdateInterval:(double)arg1;
- (void)setGyroUpdateIntervalPrivate:(double)arg1;
- (void)setMagnetometerDataCallback:(int (*)arg1 info:(void*)arg2 interval:(double)arg3;
- (void)setMagnetometerUpdateInterval:(double)arg1;
- (void)setMagnetometerUpdateIntervalPrivate:(double)arg1;
- (bool)setMotionThreadPriority:(int)arg1;
- (void)setNotificationCallback:(int (*)arg1 info:(void*)arg2;
- (void)setPowerConservationMode:(int)arg1;
- (void)setShowsDeviceMovementDisplay:(bool)arg1;
- (void)setShowsDeviceMovementDisplayPrivate:(bool)arg1;
- (bool)setSidebandSensorFusionEnable:(bool)arg1;
- (bool)setSidebandSensorFusionEnable:(bool)arg1 measureLatency:(bool)arg2 withSnoopHandler:(id /* block */)arg3;
- (bool)setSidebandSensorFusionEnable:(bool)arg1 withSnoopHandler:(id /* block */)arg2;
- (void)setSidebandTimeSyncHandler:(id /* block */)arg1;
- (void)setUseAccelerometer:(bool)arg1;
- (void)showDeviceMovementDisplay;
- (bool)showsDeviceMovementDisplay;
- (void)startAccelerometerUpdates;
- (void)startAccelerometerUpdatesPrivateToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startAccelerometerUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startAmbientPressureUpdates;
- (void)startAmbientPressureUpdatesPrivateToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startAmbientPressureUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startCompensatedAmbientPressureUpdates;
- (void)startCompensatedAmbientPressureUpdatesPrivateToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startCompensatedAmbientPressureUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startDeviceMotionLiteFusedUpdatesForDeviceID:(id)arg1 toQueue:(id)arg2 withHandler:(id /* block */)arg3;
- (void)startDeviceMotionLiteUpdatesForDeviceID:(id)arg1 usingConfiguration:(struct { int x1; })arg2 toQueue:(id)arg3 withFusedHandler:(id /* block */)arg4;
- (void)startDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesPrivateUsingReferenceFrame:(unsigned long long)arg1 toQueue:(id)arg2 withHandler:(id /* block */)arg3;
- (void)startDeviceMotionUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)arg1;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)arg1 toQueue:(id)arg2 withHandler:(id /* block */)arg3;
- (void)startGyroUpdates;
- (void)startGyroUpdatesPrivateToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startGyroUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startMagnetometerUpdates;
- (void)startMagnetometerUpdatesPrivateToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startMagnetometerUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startWatchdogCheckinsPrivate;
- (void)stopAccelerometerUpdates;
- (void)stopAccelerometerUpdatesPrivate;
- (void)stopAmbientPressureUpdates;
- (void)stopAmbientPressureUpdatesPrivate;
- (void)stopCompensatedAmbientPressureUpdates;
- (void)stopCompensatedAmbientPressureUpdatesPrivate;
- (void)stopDeviceMotionLiteUpdatesForDeviceID:(id)arg1;
- (void)stopDeviceMotionUpdates;
- (void)stopDeviceMotionUpdatesPrivate;
- (void)stopGyroUpdates;
- (void)stopGyroUpdatesPrivate;
- (void)stopMagnetometerUpdates;
- (void)stopMagnetometerUpdatesPrivate;
- (void)stopWatchdogCheckinsPrivate;
- (bool)useAccelerometer;
- (void)willResignActive:(id)arg1;
- (void)willResignActivePrivate:(id)arg1;

@end
