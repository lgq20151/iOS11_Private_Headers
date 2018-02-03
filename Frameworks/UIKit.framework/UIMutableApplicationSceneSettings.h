/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings <UIApplicationSceneSettings>

@property (nonatomic) bool canShowAlerts;
@property (nonatomic) unsigned long long deactivationReasons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) bool deviceOrientationEventsEnabled;
@property (nonatomic) bool forcedStatusBarForegroundTransparent;
@property (nonatomic, retain) NSNumber *forcedStatusBarHidden;
@property (nonatomic, retain) NSNumber *forcedStatusBarStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool idleModeEnabled;
@property (nonatomic) bool statusBarDisabled;
@property (nonatomic) int statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (nonatomic) bool underLock;
@property (nonatomic) long long userInterfaceStyle;

- (bool)canShowAlerts;
- (Class)canvasClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)deactivationReasons;
- (long long)deviceOrientation;
- (bool)deviceOrientationEventsEnabled;
- (bool)forcedStatusBarForegroundTransparent;
- (id)forcedStatusBarHidden;
- (id)forcedStatusBarStyle;
- (bool)idleModeEnabled;
- (bool)isUISubclass;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)setCanShowAlerts:(bool)arg1;
- (void)setDeactivationReasons:(unsigned long long)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setDeviceOrientationEventsEnabled:(bool)arg1;
- (void)setForcedStatusBarForegroundTransparent:(bool)arg1;
- (void)setForcedStatusBarHidden:(id)arg1;
- (void)setForcedStatusBarStyle:(id)arg1;
- (void)setIdleModeEnabled:(bool)arg1;
- (void)setStatusBarDisabled:(bool)arg1;
- (void)setStatusBarStyleOverridesToSuppress:(int)arg1;
- (void)setUnderLock:(bool)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (bool)statusBarDisabled;
- (int)statusBarStyleOverridesToSuppress;
- (bool)underLock;
- (long long)userInterfaceStyle;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
