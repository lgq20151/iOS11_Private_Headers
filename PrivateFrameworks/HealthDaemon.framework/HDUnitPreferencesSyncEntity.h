/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDUnitPreferencesSyncEntity : HDKeyValueSyncEntity

+ (long long)category;
+ (void)didReceiveValuesForKeys:(id)arg1 profile:(id)arg2;
+ (int)nanoSyncObjectType;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (long long)syncEntityType;

@end
