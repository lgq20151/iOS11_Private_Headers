/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICanvasDeviceOrientationSettingsDiffAction : NSObject <_UICanvasSettingsDiffAction> {
    UIApplicationSceneSettingsDiffInspector * _sceneSettingsDeviceOrientationDiffInspector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBSSceneSettingsDiffInspector *sceneSettingsDeviceOrientationDiffInspector;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateDeviceOrientationWithSettingObserverContext:(struct { unsigned int x1 : 1; })arg1 canvas:(id)arg2 transitionContext:(id)arg3;
- (void)performActionsForCanvas:(id)arg1 withUpdatedScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5;
- (id)sceneSettingsDeviceOrientationDiffInspector;

@end
