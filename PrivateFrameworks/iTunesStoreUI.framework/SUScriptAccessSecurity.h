/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptAccessSecurity : NSObject

- (id)_accessDictionaryForType:(id)arg1;
- (bool)_canAccessType:(id)arg1 inFrame:(id)arg2 error:(id*)arg3;
- (bool)_canAccessType:(id)arg1 withURL:(id)arg2 inFrame:(id)arg3 error:(id*)arg4;
- (id)_copyResourceURLsForWebFrame:(id)arg1;
- (bool)_url:(id)arg1 matchesExpressions:(id)arg2;
- (bool)_urls:(id)arg1 matchPatternStrings:(id)arg2;
- (bool)canAccessFacebookInFrame:(id)arg1 error:(id*)arg2;
- (bool)canAccessFacebookWithURL:(id)arg1 inFrame:(id)arg2 error:(id*)arg3;
- (bool)canAccessTelephonyInFrame:(id)arg1 error:(id*)arg2;

@end