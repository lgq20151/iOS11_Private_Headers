/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewAnimationStyle : NSObject <NSCopying> {
    bool  animated;
    double  duration;
    unsigned long long  extraOptions;
    bool  force;
    bool  interactivelyCancelled;
}

@property (nonatomic) bool animated;
@property (nonatomic, readonly) bool canDismissWithScrollView;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long extraOptions;
@property (nonatomic) bool force;
@property (nonatomic) bool interactivelyCancelled;
@property (nonatomic, readonly) bool isAnimationCompleted;

+ (id)animationStyleAnimated:(bool)arg1 duration:(double)arg2;
+ (id)animationStyleDefault;
+ (id)animationStyleImmediate;

- (bool)animated;
- (bool)canDismissWithScrollView;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (id)endPlacementForInputViewSet:(id)arg1;
- (unsigned long long)extraOptions;
- (bool)force;
- (bool)interactivelyCancelled;
- (bool)isAnimationCompleted;
- (bool)isEqual:(id)arg1;
- (void)launchAnimation:(id /* block */)arg1 afterStarted:(id /* block */)arg2 completion:(id /* block */)arg3 forHost:(id)arg4 fromCurrentPosition:(bool)arg5;
- (void)setAnimated:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setExtraOptions:(unsigned long long)arg1;
- (void)setForce:(bool)arg1;
- (void)setInteractivelyCancelled:(bool)arg1;
- (id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2;

@end
