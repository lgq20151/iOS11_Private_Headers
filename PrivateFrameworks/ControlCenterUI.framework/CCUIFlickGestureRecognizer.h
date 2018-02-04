/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIFlickGestureRecognizer : UIGestureRecognizer {
    unsigned long long  _allowedFlickDirections;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouchLocation;
    double  _initialTouchTimestamp;
    bool  _latched;
    double  _maximumFlickTime;
    double  _minimumFlickVelocity;
    NSTimer * _timeoutTimer;
    UITouch * _touch;
}

@property (nonatomic) unsigned long long allowedFlickDirections;
@property (nonatomic) double maximumFlickTime;
@property (nonatomic) double minimumFlickVelocity;

- (void).cxx_destruct;
- (void)_beginFlickWithTouch:(id)arg1;
- (void)_evaluateFlickAtTimeout;
- (bool)_validateFlickWithTouch:(id)arg1;
- (unsigned long long)allowedFlickDirections;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (double)maximumFlickTime;
- (double)minimumFlickVelocity;
- (void)reset;
- (void)setAllowedFlickDirections:(unsigned long long)arg1;
- (void)setMaximumFlickTime:(double)arg1;
- (void)setMinimumFlickVelocity:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end