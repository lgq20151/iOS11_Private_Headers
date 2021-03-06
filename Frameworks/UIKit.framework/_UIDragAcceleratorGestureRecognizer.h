/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDragAcceleratorGestureRecognizer : UIPanGestureRecognizer {
    double  _requiredMovementTimer;
}

@property (nonatomic) double requiredMovementTimer;

- (void)_movementTimeElapsed;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (double)requiredMovementTimer;
- (void)reset;
- (void)setRequiredMovementTimer:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
