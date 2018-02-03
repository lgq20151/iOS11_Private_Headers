/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFieldBehavior : UIDynamicBehavior {
    PKPhysicsField * _field;
    struct { 
        unsigned int fieldIsKindOfNoiseField : 1; 
    }  _fieldFlags;
    UIRegion * _region;
}

@property (nonatomic, readonly) PKPhysicsField *_field;
@property (nonatomic) double animationSpeed;
@property (nonatomic) struct CGVector { double x1; double x2; } direction;
@property (nonatomic) double falloff;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic) double minimumRadius;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic, retain) UIRegion *region;
@property (nonatomic) double smoothness;
@property (nonatomic) double strength;

+ (bool)_isPrimitiveBehavior;
+ (id)dragField;
+ (id)electricField;
+ (id)fieldWithEvaluationBlock:(id /* block */)arg1;
+ (id)linearGravityFieldWithVector:(struct CGVector { double x1; double x2; })arg1;
+ (id)magneticField;
+ (id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)radialGravityFieldWithPosition:(struct CGPoint { double x1; double x2; })arg1;
+ (id)springField;
+ (id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)velocityFieldWithVector:(struct CGVector { double x1; double x2; })arg1;
+ (id)vortexField;

- (void).cxx_destruct;
- (void)_addFieldItem:(id)arg1;
- (void)_associate;
- (void)_changedParameter;
- (void)_dissociate;
- (id)_field;
- (id)_initWithField:(id)arg1;
- (void)addItem:(id)arg1;
- (double)animationSpeed;
- (struct CGVector { double x1; double x2; })direction;
- (double)falloff;
- (id)init;
- (bool)isEnabled;
- (id)items;
- (double)minimumRadius;
- (struct CGPoint { double x1; double x2; })position;
- (id)region;
- (void)removeItem:(id)arg1;
- (void)setAnimationSpeed:(double)arg1;
- (void)setDirection:(struct CGVector { double x1; double x2; })arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFalloff:(double)arg1;
- (void)setMinimumRadius:(double)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRegion:(id)arg1;
- (void)setSmoothness:(double)arg1;
- (void)setStrength:(double)arg1;
- (double)smoothness;
- (double)strength;

@end
