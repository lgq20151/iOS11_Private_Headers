/* made by EzioChiu.
 */

@protocol SBUIPasscodeLockView_Internal <SBUIPasscodeLockView>

@required

- (void)_overrideBiometricMatchingEnabled:(bool)arg1 forReason:(NSString *)arg2;

@optional

- (void)_noteAppearingForSmartCoverUnlock:(bool)arg1;
- (void)_noteDeviceHasBeenUnlockedOnceSinceBoot:(bool)arg1;

@end
