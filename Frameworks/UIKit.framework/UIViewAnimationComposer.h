/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewAnimationComposer : NSObject <UIViewAnimationComposing> {
    bool  _interactive;
    double  _previousInteractiveUpdateTimestamp;
    id  _previousInteractiveUpdateValue;
    <UIVectorOperatable> * _previousTarget;
    <UIVectorOperatable> * _targetVelocity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <UIVectorOperatable> *targetVelocity;

- (void).cxx_destruct;
- (id)composeAnimation:(id)arg1 withNewAnimationDescription:(id)arg2 interactive:(bool)arg3 currentValue:(id)arg4 targetValueGetter:(id /* block */)arg5;
- (id)createAnimationFromDescription:(id)arg1 currentValue:(id)arg2 velocity:(id)arg3 targetValueGetter:(id /* block */)arg4;
- (id)init;
- (bool)isActive;
- (id)projectValue:(id)arg1 decelerationFactor:(double)arg2;
- (void)setTargetVelocity:(id)arg1;
- (id)targetVelocity;

@end
