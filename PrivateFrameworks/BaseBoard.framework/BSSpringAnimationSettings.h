/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSpringAnimationSettings : BSAnimationSettings {
    double  _damping;
    double  _epsilon;
    bool  _hasCalculatedDuration;
    double  _initialVelocity;
    double  _mass;
    double  _stiffness;
}

@property (nonatomic, readonly) double damping;
@property (nonatomic, readonly) double epsilon;
@property (nonatomic, readonly) double initialVelocity;
@property (nonatomic, readonly) double mass;
@property (nonatomic, readonly) double stiffness;

+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 delay:(double)arg5 timingFunction:(id)arg6;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 initialVelocity:(double)arg5;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 timingFunction:(id)arg5;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 timingFunction:(id)arg4;
+ (bool)supportsSecureCoding;

- (bool)_hasCalculatedDuration;
- (id)_initWithDuration:(double)arg1 delay:(double)arg2 frameInterval:(double)arg3 timingFunction:(id)arg4;
- (id)_initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 initialVelocity:(double)arg5 delay:(double)arg6 frameInterval:(double)arg7 timingFunction:(id)arg8 speed:(float)arg9;
- (void)_setDamping:(double)arg1;
- (void)_setDuration:(double)arg1;
- (void)_setEpsilon:(double)arg1;
- (void)_setInitialVelocity:(double)arg1;
- (void)_setMass:(double)arg1;
- (void)_setSpeed:(float)arg1;
- (void)_setStiffness:(double)arg1;
- (void)_setTimingFunction:(id)arg1;
- (double)damping;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (double)epsilon;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (double)initialVelocity;
- (bool)isEqual:(id)arg1;
- (bool)isSpringAnimation;
- (double)mass;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)stiffness;

@end
