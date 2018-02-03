/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGravityBehavior : UIDynamicBehavior {
    struct CGPoint { 
        double x; 
        double y; 
    }  _gravity;
}

@property (nonatomic) double angle;
@property (nonatomic) struct CGVector { double x1; double x2; } gravityDirection;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic) double magnitude;

+ (bool)_isPrimitiveBehavior;

- (void)_addGravityItem:(id)arg1;
- (void)_associate;
- (void)_dissociate;
- (void)_setAngle:(double)arg1 magnitude:(double)arg2;
- (void)addItem:(id)arg1;
- (double)angle;
- (struct CGPoint { double x1; double x2; })denormalizedGravity;
- (id)description;
- (struct CGPoint { double x1; double x2; })gravity;
- (struct CGVector { double x1; double x2; })gravityDirection;
- (id)init;
- (id)initWithItems:(id)arg1;
- (id)items;
- (double)magnitude;
- (void)removeItem:(id)arg1;
- (void)setAngle:(double)arg1;
- (void)setAngle:(double)arg1 magnitude:(double)arg2;
- (void)setGravity:(struct CGPoint { double x1; double x2; })arg1;
- (void)setGravityDirection:(struct CGVector { double x1; double x2; })arg1;
- (void)setMagnitude:(double)arg1;
- (void)setXComponent:(double)arg1;
- (void)setXComponent:(double)arg1 yComponent:(double)arg2;
- (void)setYComponent:(double)arg1;
- (double)xComponent;
- (double)yComponent;

@end
