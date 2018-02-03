/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISteadyTouchForceGestureRecognizer : UIGestureRecognizer {
    CADisplayLink * _continuousEvaluationDisplayLink;
    double  _currentTouchForce;
    double  _minimumSteadyTouchForceDuration;
    double  _overrideMinimumSteadyTouchForceDuration;
    NSDate * _steadyTimestamp;
    bool  _useOverridingMinimumDuration;
    _UIVelocityIntegrator * _velocityIntegrator;
}

@property (nonatomic) double minimumSteadyTouchForceDuration;

- (void).cxx_destruct;
- (void)_adjustSteadyForceDurationIfNeeded:(id)arg1 event:(id)arg2;
- (void)_beginForContinuousEvaluationForTouches:(id)arg1;
- (void)_endContinuousEvaluation;
- (void)_evaluateTouches:(id)arg1;
- (void)_evaluateWithTouchForce:(double)arg1;
- (void)_updateForContinuousEvaluation:(id)arg1;
- (void)cancel;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (double)minimumSteadyTouchForceDuration;
- (void)recognize;
- (void)reset;
- (void)setMinimumSteadyTouchForceDuration:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
