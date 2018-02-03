/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSKeyedSettings : BSSettings {
    NSMutableDictionary * _keyMap;
}

- (id)_init;
- (id)_keyDescriptionForSetting:(unsigned long long)arg1;
- (id)_keyForSetting:(unsigned long long)arg1;
- (void)_removeAllSettings;
- (void)_removeSettingForKey:(id)arg1;
- (unsigned long long)_settingForKey:(id)arg1 createIfNeeded:(bool)arg2;
- (id)_valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 multilinePrefix:(id)arg4;
- (bool)boolForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)enumerateKeyedFlagsWithBlock:(id /* block */)arg1;
- (void)enumerateKeyedObjectsWithBlock:(id /* block */)arg1;
- (long long)flagForKey:(id)arg1;
- (id)initWithKeyedSettings:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isKeyedSettings;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;

@end
