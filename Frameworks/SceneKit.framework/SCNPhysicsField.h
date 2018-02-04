/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsField : NSObject <NSCopying, NSSecureCoding> {
    bool  _active;
    unsigned long long  _categoryBitMask;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _direction;
    bool  _exclusive;
    double  _falloffExponent;
    struct c3dPhysicsField { int (**x1)(); struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; float x3; float x4; float x5; unsigned int x6; bool x7; bool x8; bool x9; bool x10; float x11; } * _field;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _halfExtent;
    double  _minimumDistance;
    SCNNode * _node;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _offset;
    long long  _scope;
    double  _strength;
    bool  _usesEllipsoidalExtent;
    SCNPhysicsWorld * _world;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) unsigned long long categoryBitMask;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } direction;
@property (getter=isExclusive, nonatomic) bool exclusive;
@property (nonatomic) double falloffExponent;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } halfExtent;
@property (nonatomic) double minimumDistance;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } offset;
@property (nonatomic) long long scope;
@property (nonatomic) double strength;
@property (nonatomic) bool usesEllipsoidalExtent;

+ (double)_displayScaleFactor;
+ (void)_setDisplayScaleFactor:(double)arg1;
+ (id)customFieldWithEvaluationBlock:(id /* block */)arg1;
+ (id)dragField;
+ (id)electricField;
+ (id)field;
+ (id)linearGravityField;
+ (id)magneticField;
+ (id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)radialGravityField;
+ (id)springField;
+ (bool)supportsSecureCoding;
+ (id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)vortexField;

- (void)_commonInit;
- (struct c3dPhysicsField { int (**x1)(); struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; float x3; float x4; float x5; unsigned int x6; bool x7; bool x8; bool x9; bool x10; float x11; }*)_createField;
- (struct c3dPhysicsField { int (**x1)(); struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; float x3; float x4; float x5; unsigned int x6; bool x7; bool x8; bool x9; bool x10; float x11; }*)_handle;
- (id)_owner;
- (void)_removeOwner;
- (void)_setOwner:(id)arg1;
- (void)_setWorld:(id)arg1;
- (void)_setupCommonProperties;
- (void)_willRemoveFromPhysicsWorld;
- (unsigned long long)categoryBitMask;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct SCNVector3 { float x1; float x2; float x3; })direction;
- (void)encodeWithCoder:(id)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })evalAtLocation:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (bool)exclusive;
- (double)falloffExponent;
- (struct SCNVector3 { float x1; float x2; float x3; })halfExtent;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isActive;
- (bool)isExclusive;
- (double)minimumDistance;
- (struct SCNVector3 { float x1; float x2; float x3; })offset;
- (long long)scope;
- (void)setActive:(bool)arg1;
- (void)setCategoryBitMask:(unsigned long long)arg1;
- (void)setDirection:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setExclusive:(bool)arg1;
- (void)setFalloffExponent:(double)arg1;
- (void)setHalfExtent:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setMinimumDistance:(double)arg1;
- (void)setOffset:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setScope:(long long)arg1;
- (void)setStrength:(double)arg1;
- (void)setUsesEllipsoidalExtent:(bool)arg1;
- (double)strength;
- (bool)supportsDirection;
- (bool)supportsOffset;
- (bool)usesEllipsoidalExtent;

@end