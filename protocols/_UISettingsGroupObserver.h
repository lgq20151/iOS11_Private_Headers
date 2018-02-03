/* made by EzioChiu.
 */

@protocol _UISettingsGroupObserver <NSObject>

@required

- (void)settingsGroup:(_UISettingsGroup *)arg1 didInsertSettings:(_UISettings *)arg2 atIndex:(unsigned long long)arg3;
- (void)settingsGroup:(_UISettingsGroup *)arg1 didMoveSettings:(_UISettings *)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)settingsGroup:(_UISettingsGroup *)arg1 didRemoveSettings:(_UISettings *)arg2 atIndex:(unsigned long long)arg3;

@end
