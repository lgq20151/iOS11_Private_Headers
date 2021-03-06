/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTXParallaxEngineSettings : _UISettings {
    double  _delayBeforeIdle;
    bool  _directionalLockEnabled;
    double  _directionalLockSharpness;
    double  _directionalLockStickiness;
    double  _directionalLockThreshold;
    unsigned long long  _frameInterval;
    double  _idleLeeway;
    double  _inputSmoothing;
    bool  _jumpEnabled;
    double  _jumpThreshold;
    bool  _playJumpSound;
    double  _shiftDistanceDependence;
    bool  _shiftEnabled;
    double  _shiftSpeed;
    bool  _showDirectionalLockIndicators;
    bool  _showIdleIndicator;
    double  _sigmoidDegree;
}

@property double delayBeforeIdle;
@property bool directionalLockEnabled;
@property double directionalLockSharpness;
@property double directionalLockStickiness;
@property double directionalLockThreshold;
@property unsigned long long frameInterval;
@property double idleLeeway;
@property double inputSmoothing;
@property bool jumpEnabled;
@property double jumpThreshold;
@property bool playJumpSound;
@property double shiftDistanceDependence;
@property bool shiftEnabled;
@property double shiftSpeed;
@property bool showDirectionalLockIndicators;
@property bool showIdleIndicator;
@property double sigmoidDegree;

+ (id)settingsControllerModule;

- (double)delayBeforeIdle;
- (bool)directionalLockEnabled;
- (double)directionalLockSharpness;
- (double)directionalLockStickiness;
- (double)directionalLockThreshold;
- (unsigned long long)frameInterval;
- (double)idleLeeway;
- (double)inputSmoothing;
- (bool)jumpEnabled;
- (double)jumpThreshold;
- (bool)playJumpSound;
- (long long)preferredFramesPerSecond;
- (void)setDefaultValues;
- (void)setDelayBeforeIdle:(double)arg1;
- (void)setDirectionalLockEnabled:(bool)arg1;
- (void)setDirectionalLockSharpness:(double)arg1;
- (void)setDirectionalLockStickiness:(double)arg1;
- (void)setDirectionalLockThreshold:(double)arg1;
- (void)setFrameInterval:(unsigned long long)arg1;
- (void)setIdleLeeway:(double)arg1;
- (void)setInputSmoothing:(double)arg1;
- (void)setJumpEnabled:(bool)arg1;
- (void)setJumpThreshold:(double)arg1;
- (void)setPlayJumpSound:(bool)arg1;
- (void)setShiftDistanceDependence:(double)arg1;
- (void)setShiftEnabled:(bool)arg1;
- (void)setShiftSpeed:(double)arg1;
- (void)setShowDirectionalLockIndicators:(bool)arg1;
- (void)setShowIdleIndicator:(bool)arg1;
- (void)setSigmoidDegree:(double)arg1;
- (double)shiftDistanceDependence;
- (bool)shiftEnabled;
- (double)shiftSpeed;
- (bool)showDirectionalLockIndicators;
- (bool)showIdleIndicator;
- (double)sigmoidDegree;

@end
