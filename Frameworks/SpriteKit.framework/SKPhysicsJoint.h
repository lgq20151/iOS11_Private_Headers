/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsJoint : NSObject <NSCoding> {
    bool  __implicit;
    SKPhysicsBody * bodyA;
    SKPhysicsBody * bodyB;
    struct CGVector { 
        double dx; 
        double dy; 
    }  reactionForce;
    double  reactionTorque;
}

@property (nonatomic) bool _implicit;
@property (nonatomic, retain) SKPhysicsBody *bodyA;
@property (nonatomic, retain) SKPhysicsBody *bodyB;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } reactionForce;
@property (nonatomic, readonly) double reactionTorque;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void).cxx_destruct;
- (bool)_implicit;
- (id)bodyA;
- (id)bodyB;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGVector { double x1; double x2; })reactionForce;
- (double)reactionTorque;
- (void)setBodyA:(id)arg1;
- (void)setBodyB:(id)arg1;
- (void)set_implicit:(bool)arg1;

@end
