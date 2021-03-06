/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataProvenanceEntity : HDHealthEntity

+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)insertOrLookupDataProvenanceForSyncProvenance:(long long)arg1 originProductType:(id)arg2 originSystemBuild:(id)arg3 originOSVersion:(struct { long long x1; long long x2; long long x3; })arg4 localProductType:(id)arg5 localSystemBuild:(id)arg6 sourceVersion:(id)arg7 timeZoneName:(id)arg8 sourceID:(id)arg9 deviceID:(id)arg10 database:(id)arg11 error:(id*)arg12;
+ (id)originProvenanceForPersistentID:(long long)arg1 database:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (id)uniquedColumns;

@end
