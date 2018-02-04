/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLPreferencesUtilities : NSObject

+ (struct __CFDictionary { }*)_copyAllKeysAndValuesFromDomain:(struct __CFString { }*)arg1 usingPreferencesScope:(int)arg2;
+ (void)_enumerateKeysAndValuesWithEligibleKeyPrefixes:(id)arg1 inDomain:(struct __CFString { }*)arg2 usingPreferencesScope:(int)arg3 withBlock:(id /* block */)arg4;
+ (id)_existingPerTopicPreferenceKeyPrefixesWithRegularPreferenceKeys:(const id*)arg1 regularPreferenceKeysCount:(unsigned long long)arg2;
+ (void)_setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2 inDomain:(struct __CFString { }*)arg3 usingPreferencesScope:(int)arg4;
+ (void)_synchronizeDomain:(struct __CFString { }*)arg1 usingPreferencesScope:(int)arg2;
+ (struct __CFString { }*)copySharedResourcesPreferencesDomain;
+ (struct __CFString { }*)copySharedResourcesPreferencesDomainForDomain:(struct __CFString { }*)arg1;
+ (void)migratePerTopicPreferencesInDomain:(struct __CFString { }*)arg1 withRegularPreferenceKeys:(const id*)arg2 regularPreferenceKeysCount:(unsigned long long)arg3 intoSinglePerTopicPreferenceWithSuffix:(id)arg4 usingPreferencesScope:(int)arg5;
+ (id)perWatchPreferencesDomain;
+ (struct __CFString { }*)preferencesDomain;

@end