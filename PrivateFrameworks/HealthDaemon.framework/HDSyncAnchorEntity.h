/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSyncAnchorEntity : HDHealthEntity

+ (bool)_getAnchorsForProperty:(id)arg1 set:(id)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5;
+ (id)_predicateForSyncEntityClass:(Class)arg1;
+ (id)_predicateForSyncEntityClass:(Class)arg1 syncStore:(id)arg2;
+ (id)_predicateForSyncStore:(id)arg1;
+ (bool)_setSyncAnchor:(long long)arg1 options:(unsigned long long)arg2 updatePolicy:(long long)arg3 entityClass:(Class)arg4 store:(id)arg5 database:(id)arg6 error:(id*)arg7;
+ (bool)_setSyncAnchor:(long long)arg1 options:(unsigned long long)arg2 updatePolicy:(long long)arg3 entityClass:(Class)arg4 store:(id)arg5 healthDatabase:(id)arg6 error:(id*)arg7;
+ (long long)_syncAnchorForProperty:(id)arg1 entityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (bool)enumerateSyncAnchorsForStoreID:(long long)arg1 database:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)getNextAnchorsWithMap:(id)arg1 store:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
+ (bool)getReceivedAnchorsWithMap:(id)arg1 store:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
+ (long long)nextSyncAnchorForEntityClass:(Class)arg1 store:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
+ (long long)protectionClass;
+ (long long)receivedAnchorForEntityClass:(Class)arg1 store:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
+ (bool)resetNextSyncAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5;
+ (bool)resetReceivedAnchorsForStore:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (bool)resetSyncStore:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (bool)setAcknowledgedAnchorsWithMap:(id)arg1 store:(id)arg2 resetNext:(bool)arg3 resetInvalid:(bool)arg4 healthDatabase:(id)arg5 error:(id*)arg6;
+ (bool)setNextSyncAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5;
+ (bool)setReceivedAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5;
+ (id)uniquedColumns;

@end
