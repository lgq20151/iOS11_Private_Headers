/* made by EzioChiu.
 */

@protocol WBSPerSitePreferenceBinaryToggleItemManager <NSObject>

@required

- (WBSPerSitePreferenceValue *)offValueForPreference:(WBSPerSitePreference *)arg1;
- (WBSPerSitePreferenceValue *)onValueForPreference:(WBSPerSitePreference *)arg1;

@end