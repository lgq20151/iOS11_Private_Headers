/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIElasticValue : NSObject {
    double  _currentValue;
    double  _friction;
    double  _momentum;
    double  _speed;
    double  _targetValue;
}

@property (nonatomic) double currentValue;
@property (nonatomic) double friction;
@property (nonatomic) double momentum;
@property (nonatomic) double speed;
@property (getter=isSteady, nonatomic, readonly) bool steady;
@property (nonatomic) double targetValue;

- (double)currentValue;
- (id)description;
- (double)friction;
- (id)init;
- (id)initWithValue:(double)arg1;
- (bool)isSteady;
- (double)momentum;
- (void)setCurrentValue:(double)arg1;
- (void)setFriction:(double)arg1;
- (void)setMomentum:(double)arg1;
- (void)setSpeed:(double)arg1;
- (void)setTargetValue:(double)arg1;
- (double)speed;
- (double)targetValue;
- (void)update:(double)arg1;
- (void)updateFromDisplayLink:(id)arg1;

@end