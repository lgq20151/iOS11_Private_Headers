/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessWatchdogEventContext : NSObject {
    long long  _event;
    FBSSceneSettings * _sceneSettings;
    FBSSceneTransitionContext * _sceneTransitionContext;
}

@property (nonatomic, readonly) long long event;
@property (nonatomic, readonly) FBSSceneSettings *sceneSettings;
@property (nonatomic, readonly) FBSSceneTransitionContext *sceneTransitionContext;

+ (id)contextForEvent:(long long)arg1 settings:(id)arg2 transitionContext:(id)arg3;

- (long long)event;
- (id)sceneSettings;
- (id)sceneTransitionContext;

@end
