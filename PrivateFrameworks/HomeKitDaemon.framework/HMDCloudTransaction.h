/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudTransaction : HMFObject {
    HMDCloudZone * _cloudZone;
    HMDCloudZoneChange * _cloudZoneChange;
    bool  _createZone;
    bool  _deleteZone;
    HMDCloudChange * _homeDataChange;
    NSUUID * _identifier;
    bool  _needConflictResolution;
    HMFOSTransaction * _osTransaction;
    NSArray * _recordsToDelete;
    NSArray * _recordsToSave;
    bool  _temporaryCache;
    unsigned long long  _transactionType;
    CKServerChangeToken * _updatedServerChangeToken;
    bool  _zoneWasCreated;
    bool  _zoneWasDeleted;
}

@property (nonatomic, readonly) NSArray *allTransactionStoreRowIDs;
@property (nonatomic) HMDCloudZone *cloudZone;
@property (nonatomic, retain) HMDCloudZoneChange *cloudZoneChange;
@property (nonatomic, readonly) bool controllerIdentifierChanged;
@property (getter=shouldCreateZone, nonatomic) bool createZone;
@property (nonatomic, readonly) bool decryptionFailed;
@property (getter=shouldDeleteZone, nonatomic) bool deleteZone;
@property (nonatomic, readonly) bool encryptionFailed;
@property (nonatomic, readonly) bool hasValidChanges;
@property (nonatomic, retain) HMDCloudChange *homeDataChange;
@property (getter=isHomeManagerTransaction, nonatomic, readonly) bool homeManagerTransaction;
@property (getter=isHomeTransaction, nonatomic, readonly) bool homeTransaction;
@property (nonatomic, readonly) NSUUID *identifier;
@property (getter=isLegacyTransaction, nonatomic, readonly) bool legacyTransaction;
@property (getter=isMetadataTransaction, nonatomic, readonly) bool metadataTransaction;
@property (nonatomic) bool needConflictResolution;
@property (nonatomic, readonly) NSArray *objectChanges;
@property (nonatomic, retain) HMFOSTransaction *osTransaction;
@property (nonatomic, readonly) CKRecordID *privateZoneRootRecordID;
@property (nonatomic, readonly) NSArray *processedTransactionStoreRowIDs;
@property (nonatomic, readonly) NSArray *recordsToDelete;
@property (nonatomic, readonly) NSArray *recordsToSave;
@property (getter=isTemporaryCache, nonatomic, readonly) bool temporaryCache;
@property (nonatomic) unsigned long long transactionType;
@property (nonatomic, retain) CKServerChangeToken *updatedServerChangeToken;
@property (getter=wasZoneCreated, nonatomic) bool zoneWasCreated;
@property (getter=wasZoneDeleted, nonatomic) bool zoneWasDeleted;

+ (id)shortDescription;

- (void).cxx_destruct;
- (void)addChangeWithDeletedRecordID:(id)arg1;
- (void)addChangeWithObjectChange:(id)arg1;
- (void)addChangeWithRecord:(id)arg1;
- (id)allTransactionStoreRowIDs;
- (id)cachedCloudRecordWithObjectID:(id)arg1;
- (id)changeWithObjectID:(id)arg1;
- (id)changeWithRecordName:(id)arg1;
- (id)cloudZone;
- (id)cloudZoneChange;
- (bool)controllerIdentifierChanged;
- (bool)decryptionFailed;
- (id)description;
- (bool)doesRecordExistInCacheWithObjectID:(id)arg1;
- (bool)doesRecordExistWithObjectID:(id)arg1;
- (bool)encryptionFailed;
- (void)fetchBatchToUpload:(id /* block */)arg1;
- (bool)hasValidChanges;
- (id)homeDataChange;
- (id)identifier;
- (id)init;
- (id)initWithType:(unsigned long long)arg1 temporaryCache:(bool)arg2;
- (bool)isHomeManagerTransaction;
- (bool)isHomeTransaction;
- (bool)isLegacyTransaction;
- (bool)isMetadataTransaction;
- (bool)isTemporaryCache;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(id /* block */)arg1;
- (bool)moreChangesToProcess;
- (bool)needConflictResolution;
- (id)objectChanges;
- (id)osTransaction;
- (id)privateZoneRootRecordID;
- (id)processedTransactionStoreRowIDs;
- (id)recordsToDelete;
- (id)recordsToSave;
- (void)removeChangeWithObjectID:(id)arg1;
- (id)replayTransaction:(id)arg1 stagedTransaction:(id)arg2;
- (void)setAllChangedAsProcessed;
- (void)setCloudZone:(id)arg1;
- (void)setCloudZoneChange:(id)arg1;
- (void)setCreateZone:(bool)arg1;
- (void)setDeleteAsProcessedWithRecordID:(id)arg1;
- (void)setDeleteZone:(bool)arg1;
- (void)setHomeDataChange:(id)arg1;
- (void)setNeedConflictResolution:(bool)arg1;
- (void)setOsTransaction:(id)arg1;
- (void)setSaveAsProcessedWithRecord:(id)arg1;
- (void)setTransactionType:(unsigned long long)arg1;
- (void)setUpdatedServerChangeToken:(id)arg1;
- (void)setZoneWasCreated:(bool)arg1;
- (void)setZoneWasDeleted:(bool)arg1;
- (id)shortDescription;
- (bool)shouldCreateZone;
- (bool)shouldDeleteZone;
- (id)transactionStoreRowIDsForObjectID:(id)arg1;
- (unsigned long long)transactionType;
- (void)updateCloudCache;
- (void)updateCloudZone:(id)arg1;
- (id)updatedServerChangeToken;
- (bool)wasZoneCreated;
- (bool)wasZoneDeleted;

@end