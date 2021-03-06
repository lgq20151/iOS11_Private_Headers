/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMemory : PLManagedObject <PLSearchableAssetCollection> {
    bool  _needsPersistenceUpdate;
}

@property (nonatomic, retain) NSData *assetListPredicate;
@property (nonatomic, retain) NSData *blacklistedFeature;
@property (nonatomic) short category;
@property (nonatomic) short cloudLocalState;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSSet *curatedAssets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *extendedCuratedAssets;
@property (nonatomic) bool favorite;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PLManagedAsset *keyAsset;
@property (nonatomic, retain) NSDate *lastMoviePlayedDate;
@property (nonatomic, retain) NSDate *lastViewedDate;
@property (nonatomic, retain) NSDictionary *movieAssetState;
@property (nonatomic, retain) NSSet *movieCuratedAssets;
@property (nonatomic, retain) NSData *movieData;
@property (nonatomic) bool needsPersistenceUpdate;
@property (nonatomic) short notificationState;
@property (nonatomic) bool pending;
@property (nonatomic) long long pendingPlayCount;
@property (nonatomic) long long pendingShareCount;
@property (nonatomic) long long pendingViewCount;
@property (nonatomic, retain) NSData *photosGraphData;
@property (nonatomic) long long photosGraphVersion;
@property (nonatomic) long long playCount;
@property (nonatomic) bool rejected;
@property (nonatomic, retain) NSSet *representativeAssets;
@property (nonatomic) double score;
@property (nonatomic) long long shareCount;
@property (nonatomic) short subcategory;
@property (nonatomic, retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) bool userCreated;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic) long long viewCount;

+ (id)_memoriesMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(long long)arg3 inManagedObjectContext:(id)arg4;
+ (bool)_shouldPrefetchMemoryMovieCuratedAssetsInPhotoLibrary:(id)arg1;
+ (id)baseSearchIndexPredicate;
+ (void)deleteMemoriesWithObjectIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (void)deletePendingMemoriesCreatedBefore:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 creationDate:(id)arg5;
+ (id)memoriesToPrefetchInPhotoLibrary:(id)arg1;
+ (id)memoriesToUploadInPhotoLibrary:(id)arg1 limit:(long long)arg2;
+ (id)memoriesWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)memoryWithUUID:(id)arg1 inPhotoLibrary:(id)arg2;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1 hardReset:(bool)arg2;

- (id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1;
- (id)calculateKeyAsset;
- (id)cplFullRecord;
- (id)cplMemoryChange;
- (void)delete;
- (void)didSave;
- (bool)isSyncableChange;
- (bool)isValidForPersistence;
- (bool)needsPersistenceUpdate;
- (void)persistMetadataToFileSystem;
- (void)prepareForDeletion;
- (void)removePersistedFileSystemData;
- (unsigned long long)searchIndexCategory;
- (id)searchIndexContents;
- (void)setKeyAsset:(id)arg1;
- (void)setNeedsPersistenceUpdate:(bool)arg1;
- (bool)supportsCloudUpload;
- (void)updateWithCPLMemoryChange:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)willSave;

@end
