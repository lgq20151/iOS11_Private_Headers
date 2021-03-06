/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIBadge : HKAnimatableObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    double  _rotationX;
    double  _rotationY;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic) double rotationX;
@property (nonatomic) double rotationY;

- (id)_newAnimatablePropertyForType:(unsigned long long)arg1;
- (void)addAnimation:(id)arg1 forBadgePropertyType:(unsigned long long)arg2;
- (id)init;
- (struct CGPoint { double x1; double x2; })position;
- (void)removeAllAnimationsForBadgePropertyType:(unsigned long long)arg1;
- (double)rotationX;
- (double)rotationY;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRotationX:(double)arg1;
- (void)setRotationY:(double)arg1;

@end
