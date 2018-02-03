/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCManagedDefaultsManager : NSObject

+ (id)sharedManager;

- (void)addDefaults:(id)arg1 toManagedDomain:(id)arg2;
- (bool)domainHasManagedDefaults:(id)arg1;
- (id)managedDefaultsForDomain:(id)arg1;
- (id)managedDefaultsPathForDomain:(id)arg1;
- (void)removeAllManagedDefaultsFromDomain:(id)arg1;
- (void)removeDefaults:(id)arg1 fromManagedDomain:(id)arg2;
- (void)sendManagedDefaultsChangedNotificationForDomains:(id)arg1;
- (void)setDefaults:(id)arg1 forManagedDomain:(id)arg2;

@end
