/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSUsagePseudoApp : PSStorageApp

- (id)appIdentifier;
- (id)bundleIdentifier;
- (long long)dataSize;
- (long long)dynamicSize;
- (id)initWithUsageBundleApp:(id)arg1;
- (id)name;
- (long long)purgeableSize;
- (long long)specialSize;
- (long long)staticSize;
- (long long)totalSize;

@end
