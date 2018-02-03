/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDragRecognizer : UIGestureRecognizer {
    double  _angle;
    bool  _canBeginDrag;
    SEL  _checkCanBeginDrag;
    double  _maximumDeviation;
    double  _minimumDistance;
    double  _quietPeriod;
    bool  _restrictsToAngle;
    double  _startAngle;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPosition;
    UIDelayedAction * _tooSlow;
    UITouch * _touch;
    UIDelayedAction * ignoreTouch;
}

@property (nonatomic) double angle;
@property (nonatomic) bool canBeginDrag;
@property (nonatomic) SEL checkCanBeginDrag;
@property (nonatomic, retain) UIDelayedAction *ignoreTouch;
@property (nonatomic) double maximumDeviation;
@property (nonatomic) double minimumDistance;
@property (nonatomic) double quietPeriod;
@property (nonatomic) bool restrictsToAngle;
@property (nonatomic) double startAngle;
@property (nonatomic) struct CGPoint { double x1; double x2; } startPosition;
@property (nonatomic, retain) UITouch *touch;

+ (bool)_shouldDefaultToTouches;

- (void).cxx_destruct;
- (void)_resetGestureRecognizer;
- (double)angle;
- (bool)canBeginDrag;
- (SEL)checkCanBeginDrag;
- (void)clearIgnoreTouch;
- (void)clearTimer;
- (void)dealloc;
- (id)ignoreTouch;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (double)maximumDeviation;
- (double)minimumDistance;
- (double)quietPeriod;
- (bool)restrictsToAngle;
- (void)setAngle:(double)arg1;
- (void)setCanBeginDrag:(bool)arg1;
- (void)setCheckCanBeginDrag:(SEL)arg1;
- (void)setIgnoreTouch:(id)arg1;
- (void)setMaximumDeviation:(double)arg1;
- (void)setMinimumDistance:(double)arg1;
- (void)setQuietPeriod:(double)arg1;
- (void)setRestrictsToAngle:(bool)arg1;
- (void)setStartAngle:(double)arg1;
- (void)setStartPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTouch:(id)arg1;
- (double)startAngle;
- (struct CGPoint { double x1; double x2; })startPosition;
- (void)tooSlow:(id)arg1;
- (id)touch;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
