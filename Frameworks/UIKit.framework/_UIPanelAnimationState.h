/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPanelAnimationState : NSObject {
    long long  _affectedSides;
    _UIDynamicValueAnimation * _animation;
    UISlidingBarStateRequest * _fromRequest;
    double  _progress;
    UISlidingBarStateRequest * _toRequest;
}

@property (nonatomic) long long affectedSides;
@property (nonatomic, retain) _UIDynamicValueAnimation *animation;
@property (nonatomic, copy) UISlidingBarStateRequest *fromRequest;
@property (nonatomic) double progress;
@property (nonatomic, readonly) UISlidingBarStateRequest *stateRequest;
@property (nonatomic, copy) UISlidingBarStateRequest *toRequest;

- (void).cxx_destruct;
- (long long)affectedSides;
- (id)animation;
- (id)fromRequest;
- (double)progress;
- (void)setAffectedSides:(long long)arg1;
- (void)setAnimation:(id)arg1;
- (void)setFromRequest:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setToRequest:(id)arg1;
- (void)startWithCallback:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)stateRequest;
- (void)stop;
- (id)toRequest;

@end
