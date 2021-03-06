/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKDaemonPreferences : NSObject

+ (bool)_boolValueForKey:(id)arg1;
+ (id)_safePreferenceForKey:(id)arg1 expectedReturnClass:(Class)arg2;
+ (void)_setPreferenceValue:(void*)arg1 forKey:(id)arg2;
+ (bool)isGenerateDemoDataSet;
+ (bool)isStoreDemoModeSet;
+ (bool)shouldGenerateDemoData;
+ (void)synchronizePreferencesWithWatch:(id)arg1;
+ (bool)usingDemoDataDatabase;
+ (id)valueForKey:(id)arg1;

@end
