/* made by EzioChiu.
 */

@protocol WBSPerSitePreferenceManagerDefaultsDelegate <NSObject>

@required

- (WBSPerSitePreferenceValue *)defaultPreferenceValueForPreferenceIfNotCustomized:(WBSPerSitePreference *)arg1;
- (WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
- (long long)preferencesStoreKeyForPreference:(WBSPerSitePreference *)arg1;

@end
