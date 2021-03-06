/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPFavoritesCloudSyncManager : MSPCloudSyncManager

+ (id)KVSAdditionalStoreIdentifier;
+ (id)KVSMergeableStateSnapshotForOrderedRecordsWithContents:(id)arg1;
+ (id)KVSSyncItemKeyPrefix;
+ (id)boostDateDefaultsKey;
+ (id)cloudRecordType;
+ (id)identityDefaultsKey;
+ (id)journalName;
+ (Class)replicaClass;
+ (Class)replicaRecordClass;
+ (bool)usesZoneWidePCS;
+ (id)zoneName;

- (void)getEditedRecords:(out id*)arg1 recordNamesToDelete:(out id*)arg2 fromExistingCloudRecords:(id)arg3 withReplica:(id)arg4 mergingWithReplica:(id)arg5 knownSyncDateForLeastRecentlySyncedClientIfAny:(id)arg6 creatingRecordsUsingAccess:(id)arg7;

@end
