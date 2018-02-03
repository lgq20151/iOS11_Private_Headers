/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIParallaxMotionEffect : UIMotionEffect {
    UIMotionEffectGroup * _group;
    UIInterpolatingMotionEffect * _horizontalSlideEffect;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _slideMagnitude;
    _UITiltMotionEffect * _tiltEffect;
    UIInterpolatingMotionEffect * _verticalSlideEffect;
}

@property (nonatomic) double horizontalSlideAccelerationBoostFactor;
@property (nonatomic) double maximumHorizontalTiltAngle;
@property (nonatomic) double maximumVerticalTiltAngle;
@property (nonatomic) double rotatingSphereRadius;
@property (nonatomic) struct UIOffset { double x1; double x2; } slideMagnitude;
@property (nonatomic) double verticalSlideAccelerationBoostFactor;

- (void).cxx_destruct;
- (void)_activateTiltEffectIfNecessary;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;
- (void)_updateGroupMotionEffect;
- (void)_updateSlideEffectsWithCurrentSlideMagnitude;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)horizontalSlideAccelerationBoostFactor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { double x1; double x2; })arg1;
- (double)maximumHorizontalTiltAngle;
- (double)maximumVerticalTiltAngle;
- (double)rotatingSphereRadius;
- (void)setHorizontalSlideAccelerationBoostFactor:(double)arg1;
- (void)setMaximumHorizontalTiltAngle:(double)arg1;
- (void)setMaximumVerticalTiltAngle:(double)arg1;
- (void)setRotatingSphereRadius:(double)arg1;
- (void)setSlideMagnitude:(struct UIOffset { double x1; double x2; })arg1;
- (void)setVerticalSlideAccelerationBoostFactor:(double)arg1;
- (struct UIOffset { double x1; double x2; })slideMagnitude;
- (double)verticalSlideAccelerationBoostFactor;

@end
