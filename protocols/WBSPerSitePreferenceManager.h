/* made by EzioChiu.
 */

@protocol WBSPerSitePreferenceManager <NSObject>

@required

- (<WBSPerSitePreferenceManagerDelegate> *)delegate;
- (void)getAllDomainsConfiguredForPreference:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 7: WBSPerSitePreference *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)getDefaultPreferenceValueForPreference:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WBSPerSitePreference *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSPerSitePreferenceValue *, void*
- (void)getValueOfPreference:(void *)arg1 forDomain:(void *)arg2 withTimeout:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 10: WBSPerSitePreference *, NSString *, WBSPerSitePreferenceTimeout *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSPerSitePreferenceValue *, bool, void*
- (NSArray *)preferences;
- (void)removePreferenceValuesForDomains:(NSSet *)arg1 fromPreference:(WBSPerSitePreference *)arg2;
- (void)setDefaultValue:(void *)arg1 ofPreference:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: WBSPerSitePreferenceValue *, WBSPerSitePreference *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setDelegate:(id <WBSPerSitePreferenceManagerDelegate>)arg1;
- (void)setValue:(void *)arg1 ofPreference:(void *)arg2 forDomain:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: WBSPerSitePreferenceValue *, WBSPerSitePreference *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (NSArray *)valuesForPreference:(WBSPerSitePreference *)arg1;

@end