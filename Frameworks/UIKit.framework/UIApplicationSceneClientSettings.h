/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIApplicationSceneClientSettings : FBSSceneClientSettings <UIApplicationSceneClientSettings>

@property (nonatomic, readonly) long long backgroundStyle;
@property (nonatomic, readonly) long long compatibilityMode;
@property (nonatomic, readonly) double controlCenterAmbiguousActivationMargin;
@property (nonatomic, readonly) long long controlCenterRevealMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultPNGExpirationTime;
@property (nonatomic, readonly, copy) NSString *defaultPNGName;
@property (nonatomic, readonly) bool defaultStatusBarHidden;
@property (nonatomic, readonly) long long defaultStatusBarStyle;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool deviceOrientationEventsEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool homeIndicatorAutoHidden;
@property (nonatomic, readonly) bool idleModeVisualEffectsEnabled;
@property (nonatomic, readonly) bool idleTimerDisabled;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly) bool interfaceOrientationChangesDisabled;
@property (nonatomic, readonly) long long notificationCenterRevealMode;
@property (nonatomic, readonly) long long overscanCompensation;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } primaryWindowOverlayInsets;
@property (nonatomic, readonly) unsigned long long proximityDetectionModes;
@property (getter=isReachabilitySupported, nonatomic, readonly) bool reachabilitySupported;
@property (nonatomic, readonly) FBSDisplayMode *requestedDisplayMode;
@property (nonatomic, readonly) unsigned long long screenEdgesDeferringSystemGestures;
@property (nonatomic, readonly) unsigned int statusBarContextID;
@property (getter=isStatusBarForegroundTransparent, nonatomic, readonly) bool statusBarForegroundTransparent;
@property (nonatomic, readonly) bool statusBarHidden;
@property (nonatomic, readonly) long long statusBarStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (nonatomic, readonly) bool wantsExclusiveForeground;
@property (nonatomic, readonly) long long whitePointAdaptivityStyle;

- (long long)backgroundStyle;
- (long long)compatibilityMode;
- (double)controlCenterAmbiguousActivationMargin;
- (long long)controlCenterRevealMode;
- (double)defaultPNGExpirationTime;
- (id)defaultPNGName;
- (bool)defaultStatusBarHidden;
- (long long)defaultStatusBarStyle;
- (bool)deviceOrientationEventsEnabled;
- (bool)homeIndicatorAutoHidden;
- (bool)idleModeVisualEffectsEnabled;
- (bool)idleTimerDisabled;
- (long long)interfaceOrientation;
- (bool)interfaceOrientationChangesDisabled;
- (bool)isReachabilitySupported;
- (bool)isStatusBarForegroundTransparent;
- (bool)isUISubclass;
- (id)keyDescriptionForOtherSetting:(unsigned long long)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)notificationCenterRevealMode;
- (long long)overscanCompensation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })primaryWindowOverlayInsets;
- (unsigned long long)proximityDetectionModes;
- (id)requestedDisplayMode;
- (unsigned long long)screenEdgesDeferringSystemGestures;
- (unsigned int)statusBarContextID;
- (bool)statusBarHidden;
- (long long)statusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)userInterfaceStyle;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofOtherSetting:(unsigned long long)arg3;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (bool)wantsExclusiveForeground;
- (long long)whitePointAdaptivityStyle;

@end
