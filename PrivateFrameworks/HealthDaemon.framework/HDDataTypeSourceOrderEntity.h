/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataTypeSourceOrderEntity : HDHealthEntity

+ (bool)_saveOrderedSourceIDs:(id)arg1 dataTypeCode:(long long)arg2 userOrdered:(bool)arg3 syncProvenance:(long long)arg4 database:(id)arg5 error:(id*)arg6;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)orderedSourceIDsForType:(id)arg1 userOrdered:(bool*)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (bool)saveOrderedSourceIDs:(id)arg1 type:(id)arg2 userOrdered:(bool)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)tableAliases;

@end
