/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAssociationEntity : HDHealthEntity

+ (bool)_enumerateAssociationsWithPredicate:(id)arg1 session:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg3 lastSyncAnchor:(long long*)arg4 healthDatabase:(id)arg5 error:(id*)arg6 block:(id /* block */)arg7;
+ (id)_insertAssociationEntryWithAssociationID:(long long)arg1 objectID:(long long)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (bool)_insertEntriesWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 context:(id)arg4 error:(id*)arg5;
+ (bool)_insertEntriesWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 enforceSameSource:(bool)arg4 permitPendingAssociations:(bool)arg5 profile:(id)arg6 error:(id*)arg7;
+ (bool)_insertPendingAssociationForParentUUID:(id)arg1 childUUID:(id)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (bool)_insertPendingAssociationsForParentUUID:(id)arg1 childUUIDData:(id)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (bool)associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)associationPropertyForEntityClass:(Class)arg1;
+ (id)columnsDefinition;
+ (bool)copyAssociationsFromObject:(id)arg1 toObject:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)copyAssociationsFromObjectID:(id)arg1 toObjectID:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)databaseTable;
+ (id)deleteStatementForAssociationWithDatabase:(id)arg1;
+ (id)deleteStatementForObjectAssociationsWithDatabase:(id)arg1;
+ (id)indices;
+ (bool)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(bool)arg3 profile:(id)arg4 database:(id)arg5 error:(id*)arg6;
+ (bool)insertEntriesWithAssociationUUID:(id)arg1 objectUUIDsData:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)journalEntryForAssociation:(id)arg1 objects:(id)arg2;
+ (id)objectIDsForAssociationEntityWithPersistentID:(long long)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)privateSubEntities;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (bool)realizePendingAssociationsWithDatabase:(id)arg1 error:(id*)arg2;
+ (id)tableAliases;
+ (id)uniquedColumns;

@end
