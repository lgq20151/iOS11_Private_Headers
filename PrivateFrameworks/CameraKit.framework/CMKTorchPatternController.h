/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKTorchPatternController : NSObject {
    CMKTorchPattern * __currentPattern;
    CADisplayLink * __displayLink;
    bool  __performing;
    double  __startTime;
    AVCaptureDevice * _captureDevice;
    double  _stepInterval;
}

@property (nonatomic, readonly) CMKTorchPattern *_currentPattern;
@property (nonatomic, readonly) CADisplayLink *_displayLink;
@property (setter=_setPerforming:, nonatomic) bool _performing;
@property (nonatomic, readonly) double _startTime;
@property (nonatomic, retain) AVCaptureDevice *captureDevice;
@property (nonatomic) double stepInterval;

- (void).cxx_destruct;
- (void)_applyTorchLevel:(float)arg1;
- (id)_currentPattern;
- (id)_displayLink;
- (bool)_performing;
- (void)_resetTorchLevel;
- (void)_setPerforming:(bool)arg1;
- (double)_startTime;
- (void)blink;
- (id)captureDevice;
- (void)displayLinkFired:(id)arg1;
- (void)doubleBlink;
- (id)init;
- (void)setCaptureDevice:(id)arg1;
- (void)setStepInterval:(double)arg1;
- (void)startPerformingPattern:(id)arg1;
- (double)stepInterval;
- (void)stopPerformingPattern;

@end