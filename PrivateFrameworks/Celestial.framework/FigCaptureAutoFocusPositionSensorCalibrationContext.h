/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureAutoFocusPositionSensorCalibrationContext : FigCaptureCalibrationContext {
    NSMutableDictionary * _iStopZEstimateDeltas;
    bool  _shouldDeleteOldVersion;
}

+ (id)calibrationDataStringForInternalLogging:(id)arg1;
+ (unsigned int)calibrationStatusFromRawStreamCalibrationData:(id)arg1;
+ (id)createRawStreamCalibrationDataWithFailureReasons:(int)arg1;
+ (void)initialize;
+ (void)printDebugInfoForRawStreamCalibrationData:(id)arg1;

- (void)_updateIStopZEstimateDelta:(id)arg1;
- (id)initWithSupportedDeviceNames:(id)arg1;
- (void)reportForAggdLoggingWithCalibrationData:(id)arg1 isValid:(bool)arg2 magneticFieldMagnitude:(double)arg3;
- (void)setLastSuccessfulCalibrationData:(id)arg1;

@end
