/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNTransitionRenderer : KNAnimationRenderer <CAAnimationDelegate> {
    NSMapTable * _animatedLayers;
    bool  mAnimationsRanToCompletion;
    NSDictionary * mAttributes;
    CALayer * mBackgroundLayer;
    TSDFPSCounter * mFPSCounter;
    long long  mNumberOfAnimationsStarted;
    bool  mShouldAnimateTransition;
    NSMutableArray * mTextures;
    SEL  mTransitionEndCallbackSelector;
    id  mTransitionEndCallbackTarget;
    SEL  mTransitionImmediateEndCallbackSelector;
    id  mTransitionImmediateEndCallbackTarget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)addAnimationsAtTime:(double)arg1 relativeToCurrentMediaTime:(bool)arg2;
- (void)animateWithDelay:(double)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)dealloc;
- (id)description;
- (void)forceRemoveAnimations;
- (void)generateTextures;
- (id)initWithEffectClass:(Class)arg1 direction:(unsigned long long)arg2 duration:(double)arg3 session:(id)arg4 attributes:(id)arg5 animatedSlideView:(id)arg6;
- (bool)p_addAnimations:(id)arg1 atTime:(double)arg2 relativeToCurrentMediaTime:(bool)arg3;
- (void)p_checkForNullTransitions:(Class)arg1;
- (void)p_removeAnimationsShouldForceRemove:(bool)arg1;
- (void)pauseAnimationsAtTime:(double)arg1;
- (id)plugin;
- (void)registerForTransitionEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForTransitionImmediateEndCallback:(SEL)arg1 target:(id)arg2;
- (void)removeAnimationsAndFinish:(bool)arg1;
- (void)renderSlideIndex:(unsigned long long)arg1;
- (void)renderTextures;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)setupLayerTreeForTransition;
- (void)setupPluginContext;
- (void)stopAnimations;
- (void)teardown;
- (void)updateAnimationTestingLog;
- (void)updateAnimationsForLayerTime:(double)arg1;
- (void)waitUntilAsyncRenderingIsCompleteShouldCancel:(bool)arg1;

@end
