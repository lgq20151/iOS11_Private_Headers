/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsJointDistance : PKPhysicsJoint {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorA;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorB;
    struct b2DistanceJoint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; bool x9; bool x10; void *x11; float x12; float x13; float x14; struct b2Vec2 { float x_15_1_1; float x_15_1_2; } x15; struct b2Vec2 { float x_16_1_1; float x_16_1_2; } x16; float x17; float x18; float x19; int x20; int x21; struct b2Vec2 { float x_22_1_1; float x_22_1_2; } x22; struct b2Vec2 { float x_23_1_1; float x_23_1_2; } x23; struct b2Vec2 { float x_24_1_1; float x_24_1_2; } x24; struct b2Vec2 { float x_25_1_1; float x_25_1_2; } x25; struct b2Vec2 { float x_26_1_1; float x_26_1_2; } x26; float x27; float x28; float x29; float x30; float x31; } * _joint;
    struct b2DistanceJointDef { 
        int type; 
        void *userData; 
        struct b2Body {} *bodyA; 
        struct b2Body {} *bodyB; 
        bool collideConnected; 
        struct b2Vec2 { 
            float x; 
            float y; 
        } localAnchorA; 
        struct b2Vec2 { 
            float x; 
            float y; 
        } localAnchorB; 
        float length; 
        float frequencyHz; 
        float dampingRatio; 
    }  _jointDef;
}

@property (nonatomic) bool collideConnected;
@property (nonatomic) double damping;
@property (nonatomic) double frequency;
@property (nonatomic) double length;

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint { double x1; double x2; })arg3 anchorB:(struct CGPoint { double x1; double x2; })arg4;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 localAnchorA:(struct CGPoint { double x1; double x2; })arg3 localAnchorB:(struct CGPoint { double x1; double x2; })arg4;

- (id).cxx_construct;
- (struct b2Joint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; bool x9; bool x10; void *x11; }*)_joint;
- (struct b2JointDef { int x1; void *x2; struct b2Body {} *x3; struct b2Body {} *x4; bool x5; }*)_jointDef;
- (bool)collideConnected;
- (void)create;
- (double)damping;
- (void)encodeWithCoder:(id)arg1;
- (double)frequency;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint { double x1; double x2; })arg3 anchorB:(struct CGPoint { double x1; double x2; })arg4;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 localAnchorA:(struct CGPoint { double x1; double x2; })arg3 localAnchorB:(struct CGPoint { double x1; double x2; })arg4;
- (id)initWithCoder:(id)arg1;
- (double)length;
- (void)setCollideConnected:(bool)arg1;
- (void)setDamping:(double)arg1;
- (void)setFrequency:(double)arg1;
- (void)setLength:(double)arg1;
- (void)set_joint:(struct b2Joint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; bool x9; bool x10; void *x11; }*)arg1;

@end
