/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
 */

@interface NSPersonNameComponentsFormatterPreferences : NSObject

+ (void)_postPreferencesChangedNotification;
+ (void)_setPreference:(id)arg1 toValue:(long long)arg2 usingExistingGetter:(SEL)arg3;
+ (void)_syncronizeGizmoDefaultWithKey:(id)arg1 value:(long long)arg2;
+ (id)infoClassFromPreferencesSource:(unsigned long long)arg1;
+ (id)mappedPreferencesForPreferences:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
+ (void)setDefaultDisplayNameOrder:(long long)arg1;
+ (void)setPreferNicknamesDefault:(bool)arg1;
+ (void)setShortNameFormat:(long long)arg1;
+ (void)setShortNameIsEnabled:(bool)arg1;

@end