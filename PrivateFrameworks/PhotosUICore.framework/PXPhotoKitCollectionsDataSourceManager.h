/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitCollectionsDataSourceManager : PXCollectionsDataSourceManager <PXCollectionFetchOperationDelegate, PXPhotoLibraryUIChangeObserver> {
    NSArray * __collectionListBySection;
    NSArray * __collectionsFetchResultBySection;
    NSMutableDictionary * __subCollectionActiveCountFetchOperations;
    NSMutableDictionary * __subCollectionActiveKeyAssetsFetchOperations;
    NSArray * __virtualCollections;
    NSMutableSet * _changedSubCollections;
    NSMutableDictionary * _collectionIndexPathByCollection;
    PHCollectionList * _collectionList;
    PHFetchResult * _collectionsFetchResult;
    PXPhotoKitCollectionsDataSourceManagerConfiguration * _configuration;
    bool  _initiatedBackgroundFetching;
    bool  _isPhotoLibraryEmpty;
    bool  _needsBackgroundFetching;
    bool  _performedBackgroundFetching;
    PHPhotoLibrary * _photoLibrary;
    bool  _resumedBackgroundFetching;
    NSOperationQueue * _subCollectionFetchOperationQueue;
    NSMutableDictionary * _subCollectionFetchResultsCache;
    NSMutableDictionary * _subCollectionKeyAssetFetchResultsCache;
    NSOperationQueue * _subCollectionKeyAssetsFetchOperationQueue;
}

@property (setter=_setCollectionListBySection:, nonatomic, retain) NSArray *_collectionListBySection;
@property (setter=_setCollectionsFetchResultBySection:, nonatomic, retain) NSArray *_collectionsFetchResultBySection;
@property (nonatomic, readonly) NSMutableDictionary *_subCollectionActiveCountFetchOperations;
@property (nonatomic, readonly) NSMutableDictionary *_subCollectionActiveKeyAssetsFetchOperations;
@property (nonatomic, retain) NSArray *_virtualCollections;
@property (nonatomic, readonly) PHCollectionList *collectionList;
@property (nonatomic, readonly) PHFetchResult *collectionsFetchResult;
@property (readonly) PXPhotoKitCollectionsDataSourceManagerConfiguration *configuration;
@property (nonatomic, readonly) PXPhotoKitCollectionsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cachedKeyAssetFetchResultForSubCollection:(id)arg1;
- (id)_changedSubCollectionIndexesBySections;
- (id)_collectionListBySection;
- (id)_collectionsFetchResultBySection;
- (bool)_containsAnyAlbumsWithAssets:(id)arg1;
- (bool)_containsAnyAssets:(id)arg1;
- (void)_enumerateAllPhotoKitCollectionsUsingBlock:(id /* block */)arg1;
- (void)_fetchAndUpdateCountsForCollection:(id)arg1;
- (void)_fetchKeyAssetsForCollection:(id)arg1;
- (unsigned long long)_fixedOrderPriorityForVirtualCollection:(id)arg1;
- (void)_getCollectionListBySectionsFromUnfilteredFetchResult:(id)arg1 collectionList:(id)arg2 collectionListBySections:(id*)arg3 collectionsFetchResultBySection:(id*)arg4;
- (bool)_isEmpty;
- (bool)_isPlacesAlbumAssetCollection:(id)arg1;
- (bool)_needsFetchResultForCollection:(id)arg1;
- (bool)_needsKeyAssetsFetchResultForCollection:(id)arg1;
- (id)_newDataSource;
- (void)_recursivelyCollectCollectionsIn:(id)arg1 fetchResult:(id)arg2;
- (void)_recursivelyEnumerateAssetCollectionsInFetchResult:(id)arg1 block:(id /* block */)arg2;
- (void)_resumeFetchOperations;
- (void)_resumeKeyAssetsFetchOperations;
- (void)_setCollectionListBySection:(id)arg1;
- (void)_setCollectionsFetchResultBySection:(id)arg1;
- (id)_subCollectionActiveCountFetchOperations;
- (id)_subCollectionActiveKeyAssetsFetchOperations;
- (id)_subitemChangeDetailsByItemBySection;
- (bool)_updateCachedSubCollectionFetchResultsForChange:(id)arg1 removedObjects:(id)arg2 changedObjects:(id)arg3;
- (void)_updateCollectionIndexMappingForFilteredFetchResults;
- (void)_updateDataSourceForChangeOnCollectionAtIndexPath:(id)arg1;
- (void)_updateFilteredCollectionsFetchResults;
- (void)_updateKeyAssetsCacheForCollection:(id)arg1 withFetchResult:(id)arg2 otherFetchResultsByAssetCollection:(id)arg3;
- (void)_updateVisibleCountsForCollection:(id)arg1 withWithFetchResult:(id)arg2;
- (id)_virtualCollections;
- (id)assetsFetchResultForCollection:(id)arg1;
- (bool)canDeleteCollection:(id)arg1;
- (bool)canEditAlbums;
- (bool)canRenameCollection:(id)arg1;
- (bool)canReorderCollection:(id)arg1;
- (void)collectionFetchOperationDidComplete:(id)arg1;
- (id)collectionList;
- (id)collectionsFetchResult;
- (id)configuration;
- (bool)containsAnyAssets:(id)arg1;
- (long long)countForCollection:(id)arg1;
- (id)createInitialDataSource;
- (void)dealloc;
- (long long)estimatedCountForAssetCollection:(id)arg1;
- (id)fetchResultForSubCollection:(id)arg1;
- (id)indexPathForCollection:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)initiateBackgroundFetchingIfNeeded;
- (bool)isCachedFetchResultOutdatedForCollection:(id)arg1;
- (bool)isCountAvailableForCollection:(id)arg1;
- (id)keyAssetsFetchResultForCollection:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)resumeBackgroundFetchingIfNeeded;
- (void)set_virtualCollections:(id)arg1;
- (id)uncachedFetchResultForSubCollection:(id)arg1;
- (id)uncachedKeyAssetFetchResultForSubCollection:(id)arg1;

@end
