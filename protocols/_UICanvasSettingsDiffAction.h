/* made by EzioChiu.
 */

@protocol _UICanvasSettingsDiffAction <NSObject>

@required

- (void)performActionsForCanvas:(_UICanvas *)arg1 withUpdatedScene:(FBSScene *)arg2 settingsDiff:(FBSSceneSettingsDiff *)arg3 fromSettings:(FBSSceneSettings *)arg4 transitionContext:(FBSSceneTransitionContext *)arg5;

@end
