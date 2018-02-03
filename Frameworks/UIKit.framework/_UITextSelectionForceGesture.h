/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextSelectionForceGesture : UILongPressGestureRecognizer {
    bool  _didLongPress;
    long long  _increasingForceState;
    double  _increasingForceTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastSceneReferenceLocation;
    double  _lastTouchTime;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastUnadjustedSceneReferenceLocation;
    UIKBPanGestureVelocitySample * _liftOffSample;
    long long  _liftOffState;
    UIKBPanGestureVelocitySample * _previousVelocitySample;
    bool  _shouldFailWithoutForce;
    bool  _touchEclipsesVelocity;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _velocityRange;
    UIKBPanGestureVelocitySample * _velocitySample;
}

@property (getter=_liftOffSample, readonly) UIKBPanGestureVelocitySample *_liftOffSample;
@property (getter=_previousVelocitySample, readonly) UIKBPanGestureVelocitySample *_previousVelocitySample;
@property (getter=_velocitySample, readonly) UIKBPanGestureVelocitySample *_velocitySample;
@property (nonatomic) bool didLongPress;
@property (nonatomic) long long increasingForceState;
@property (nonatomic) double increasingForceTimestamp;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastSceneReferenceLocation;
@property (nonatomic) double lastTouchTime;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastUnadjustedSceneReferenceLocation;
@property (nonatomic) long long liftOffState;
@property (nonatomic) bool shouldFailWithoutForce;
@property (nonatomic) bool touchEclipsesVelocity;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } velocityRange;

- (struct CGPoint { double x1; double x2; })_adjustSceneReferenceLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_centroidInView:(id)arg1;
- (void)_centroidMovedTo:(struct CGPoint { double x1; double x2; })arg1 atTime:(double)arg2 physicalTouch:(id)arg3;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 toSceneReferenceCoordinatesFromView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (id)_liftOffSample;
- (struct CGPoint { double x1; double x2; })_locationOfTouches:(id)arg1;
- (struct UIOffset { double x1; double x2; })_offsetInViewFromSceneReferenceLocation:(struct CGPoint { double x1; double x2; })arg1 toSceneReferenceLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)_previousVelocitySample;
- (void)_resetVelocitySamples;
- (struct CGPoint { double x1; double x2; })_shiftPanLocationToNewSceneReferenceLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_shouldDelayUntilForceLevelRequirementIsMet;
- (void)_updateLiftOffState;
- (id)_velocitySample;
- (void)dealloc;
- (bool)didLongPress;
- (void)enoughTimeElapsed:(id)arg1;
- (bool)forceHasIncreasedForTimeInterval:(double)arg1;
- (long long)increasingForceState;
- (double)increasingForceTimestamp;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })lastSceneReferenceLocation;
- (double)lastTouchTime;
- (struct CGPoint { double x1; double x2; })lastUnadjustedSceneReferenceLocation;
- (long long)liftOffState;
- (void)reset;
- (void)setDidLongPress:(bool)arg1;
- (void)setIncreasingForceState:(long long)arg1;
- (void)setIncreasingForceTimestamp:(double)arg1;
- (void)setLastSceneReferenceLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastTouchTime:(double)arg1;
- (void)setLastUnadjustedSceneReferenceLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLiftOffState:(long long)arg1;
- (void)setShouldFailWithoutForce:(bool)arg1;
- (void)setTouchEclipsesVelocity:(bool)arg1;
- (void)setVelocityRange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldFailWithoutForce;
- (bool)shouldResetRangeForVelocity:(struct CGPoint { double x1; double x2; })arg1 previousVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (bool)touchEclipsesVelocity;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })velocityInView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })velocityRange;

@end
