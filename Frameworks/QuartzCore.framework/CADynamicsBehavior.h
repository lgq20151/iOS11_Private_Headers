/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADynamicsBehavior : CABehavior

@property double angularDrag;
@property double collisionInterval;
@property double drag;
@property (copy) NSArray *forceFields;
@property double minimumTimeStep;
@property bool reactsToCollisions;
@property double springScale;
@property (copy) NSArray *springs;
@property double stoppedAngularVelocity;
@property double stoppedVelocity;
@property double timeStep;

+ (id)defaultValueForKey:(id)arg1;

- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (double)angularDrag;
- (double)collisionInterval;
- (double)drag;
- (id)forceFields;
- (double)minimumTimeStep;
- (bool)reactsToCollisions;
- (void)setAngularDrag:(double)arg1;
- (void)setCollisionInterval:(double)arg1;
- (void)setDrag:(double)arg1;
- (void)setForceFields:(id)arg1;
- (void)setMinimumTimeStep:(double)arg1;
- (void)setReactsToCollisions:(bool)arg1;
- (void)setSpringScale:(double)arg1;
- (void)setSprings:(id)arg1;
- (void)setStoppedAngularVelocity:(double)arg1;
- (void)setStoppedVelocity:(double)arg1;
- (void)setTimeStep:(double)arg1;
- (double)springScale;
- (id)springs;
- (double)stoppedAngularVelocity;
- (double)stoppedVelocity;
- (double)timeStep;

@end
