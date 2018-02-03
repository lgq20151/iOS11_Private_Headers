/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarAnimationParameters : NSObject {
    <_UIBasicAnimationFactory> * _animationFactory;
    long long  _curve;
    double  _delay;
    double  _duration;
    double  _startTime;
}

@property (nonatomic, retain) <_UIBasicAnimationFactory> *animationFactory;
@property (nonatomic) long long curve;
@property (nonatomic) double delay;
@property (nonatomic) double duration;
@property (nonatomic) double startTime;

+ (void)animateWithParameters:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)animateWithParameters:(id)arg1 fromCurrentState:(bool)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)animateWithParameters:(id)arg1 fromCurrentState:(bool)arg2 frameInterval:(double)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)animationFactory;
- (long long)curve;
- (double)delay;
- (double)duration;
- (id)init;
- (id)initWithDefaultParameters;
- (id)initWithEmptyParameters;
- (void)setAnimationFactory:(id)arg1;
- (void)setCurve:(long long)arg1;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setStartTime:(double)arg1;
- (bool)shouldAnimate;
- (double)startTime;

@end
