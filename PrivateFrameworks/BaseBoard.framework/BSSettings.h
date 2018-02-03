/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSettings : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    <BSSettingDescriptionProvider> * _descriptionProvider;
    NSMapTable * _settingToFlagMap;
    NSMapTable * _settingToObjectMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <BSSettingDescriptionProvider> *descriptionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyToSettings:(id)arg1;
- (void)_enumerateSettingsForFlagsWithBlock:(id /* block */)arg1;
- (void)_enumerateSettingsForObjectsWithBlock:(id /* block */)arg1;
- (void)_enumerateSettingsInMap:(id)arg1 withBlock:(id /* block */)arg2;
- (id)_init;
- (id)_keyDescriptionForSetting:(unsigned long long)arg1;
- (id)_newMapTable;
- (void)_removeAllSettings;
- (void)_setFlag:(long long)arg1 forSetting:(unsigned long long)arg2;
- (void)_setObject:(id)arg1 forSetting:(unsigned long long)arg2;
- (id)_valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 multilinePrefix:(id)arg4;
- (id)allSettings;
- (id)basicDescriptionWithPrefix:(id)arg1;
- (bool)boolForSetting:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionProvider;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)enumerateFlagsWithBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithBlock:(id /* block */)arg1;
- (long long)flagForSetting:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isKeyedSettings;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForSetting:(unsigned long long)arg1;
- (void)setDescriptionProvider:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
