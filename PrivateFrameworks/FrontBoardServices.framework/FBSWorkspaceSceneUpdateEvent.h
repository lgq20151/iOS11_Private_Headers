/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceSceneUpdateEvent : FBSWorkspaceSceneEvent {
    FBSSceneSettingsDiff * _settings;
    FBSSceneTransitionContext * _transitionContext;
}

@property (nonatomic, retain) FBSSceneSettingsDiff *settingsDiff;
@property (nonatomic, retain) FBSSceneTransitionContext *transitionContext;

- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setSettingsDiff:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (id)settingsDiff;
- (id)transitionContext;

@end
