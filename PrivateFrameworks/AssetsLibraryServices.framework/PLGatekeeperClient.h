/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLGatekeeperClient : NSObject <PLAssetsdClientService> {
    PLAssetsdClientServiceReceiver * _clientServiceReceiver;
    NSArray * _previewAssetLocalIdentifiers;
    NSArray * _previewRenderedContentURLs;
    NSObject<OS_dispatch_queue> * _serialReplyQueue;
    NSObject<OS_xpc_object> * connection;
}

@property (nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *previewAssetLocalIdentifiers;
@property (nonatomic, readonly) unsigned long long previewRenderedContentURLCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *replyQueue;
@property (readonly) Class superclass;

+ (id)securityPolicyErrorForMissingEntitlement:(id)arg1;
+ (id)sharedInstance;

- (void)addAssetWithURL:(id)arg1 toAlbumWithUUID:(id)arg2 handler:(id /* block */)arg3;
- (void)addGroupWithName:(id)arg1 handler:(id /* block */)arg2;
- (void)addLogMark:(id)arg1;
- (id)allMomentsMetadataWithOutputPath:(id)arg1;
- (void)analyzeAllMoments;
- (void)analyzeMomentID:(id)arg1;
- (void)analyzeMomentListID:(id)arg1;
- (unsigned long long)attemptToPurgeSharedAssetsExceptForRecentlyViewedAssets;
- (unsigned long long)attemptToPurgeSharedAssetsSpace:(unsigned long long)arg1;
- (void)automaticallyDeleteEmptyAlbum:(id)arg1;
- (void)backupChangeStore;
- (void)batchSaveAssetsWithJobDictionaries:(id)arg1 handler:(id /* block */)arg2;
- (void)cancelCPLDownloadImageDataWithVirtualTaskIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelCPLDownloadWithContext:(id)arg1;
- (void)cleanupForStoreDemoMode;
- (bool)cleanupInvalidIgnoreDatesWithError:(id*)arg1;
- (void)cleanupModelForDataMigration;
- (void)clearAllBulletinsWithLastClearedRecordID:(unsigned long long)arg1;
- (void)clearChangeStore;
- (void)clearUserInfluencedMoments;
- (void)computeFingerPrintsOfAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)connection;
- (void)createPhotoLibraryDatabase;
- (void)createPhotostreamAlbumWithStreamID:(id)arg1;
- (void)dataMigrationWillFinish;
- (void)dealloc;
- (id)debugSidecarFileURLsForAsset:(id)arg1;
- (void)deleteAssetWithURL:(id)arg1 handler:(id /* block */)arg2;
- (id)deviceSpecificReplyQueue;
- (id)dictionaryWithContentsOfMediaFilePath:(id)arg1;
- (void)downloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(bool)arg3 trackCPLDownload:(bool)arg4 downloadIsTransient:(bool)arg5 proposedTaskIdentifier:(id)arg6 completion:(id /* block */)arg7;
- (void)downloadCloudSharedAsset:(id)arg1 withCloudPlaceholderKind:(unsigned long long)arg2 shouldPrioritize:(bool)arg3 shouldExtendTimer:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)downloadStatusForIdentifier:(id)arg1 progress:(double)arg2 completed:(bool)arg3 data:(id)arg4 error:(id)arg5;
- (void)dropSearchIndexWithCompletion:(id /* block */)arg1;
- (void)dumpCloudPhotosStatusIncludingDaemon:(bool)arg1;
- (id)dumpMetadataForMomentsWithOutputPath:(id)arg1;
- (void)dumpPhotoAnalysisStatusWithCompletion:(id /* block */)arg1;
- (id)emailAddressForKey:(int)arg1;
- (void)enableCloudPhotos:(bool)arg1;
- (void)enablePhotostreamsWithStreamID:(id)arg1;
- (long long)estimatedOutputFileLengthForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4;
- (int)fileDescriptorForAssetURL:(id)arg1;
- (int)fileDescriptorForAssetURL:(id)arg1 withAdjustments:(bool)arg2 outFileExtension:(id*)arg3;
- (id)fileURLForAssetURL:(id)arg1 withAdjustments:(bool)arg2;
- (id)fileURLForNewAssetWithType:(unsigned int)arg1 extension:(id)arg2;
- (void)finalizeOTARestoreRecreatingAlbums:(bool)arg1;
- (void)generateOnDemandResourcesForAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)getCPLState;
- (long long)getCurrentApplicationBadgeCount;
- (id)getCurrentBulletins;
- (int)getCurrentModelVersion;
- (void)getCurrentTransferProgress:(id /* block */)arg1;
- (id)getInterestingMemoryBulletinInfoToBeScheduled;
- (id)getKeywordsForAssetWithUUID:(id)arg1;
- (void)getLibrarySizes:(id /* block */)arg1;
- (void)getLibrarySizesFromDB:(bool)arg1 handler:(id /* block */)arg2;
- (id)getPhotoLibraryStoreXPCListenerEndpoint;
- (void)getPhotosAndVideosCountWithHandler:(id /* block */)arg1;
- (id)getPhotosXPCEndpoint;
- (void)getSandboxExtensionForPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getSearchIndexProgress:(id /* block */)arg1;
- (id)getStatus;
- (void)getSystemBudgetsWithCompletionHandler:(id /* block */)arg1;
- (id)getThumbnailImageDataForBulletinWithRecordID:(unsigned long long)arg1;
- (id)getXPCTransactionStatus;
- (bool)hasCompletedMomentAnalysis;
- (bool)hasCompletedRestorePostProcessing;
- (id)imageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(bool)arg3 wantURLOnly:(bool)arg4 networkAccessAllowed:(bool)arg5 trackCPLDownload:(bool)arg6 outImageDataInfo:(id*)arg7 outCPLDownloadContext:(id*)arg8;
- (void)importFileSystemAssetsWaitingForReply:(bool)arg1;
- (id)incompleteRestoreProcesses;
- (id)init;
- (void)invalidateLocationShift;
- (bool)isReadyForCloudPhotoLibrary;
- (int)keyForEmailAddress:(id)arg1;
- (void)launchAssetsd;
- (id)locationShiftStatus;
- (void)markPersonAsNeedingKeyFace:(id)arg1 synchronously:(bool)arg2;
- (bool)markStatesProcessedForWorkerType:(short)arg1 error:(id*)arg2;
- (long long)migrateCloudFaces;
- (id)momentAnalysisStatus;
- (id)momentGenerationStatus;
- (void)noteInterestingMemoryNotificationForColletionID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 notificationDeliveryDate:(id)arg5;
- (void)noteInterestingMemoryNotificationViewedForColletionID:(id)arg1;
- (void)noteUserRespondedToMemoriesBulletin;
- (void)overrideSystemBudgetsForSyncSession:(bool)arg1 forSystemBudgets:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)pauseICloudPhotos:(bool)arg1 reason:(short)arg2;
- (void)pauseICloudPhotos:(bool)arg1 reason:(short)arg2 waitForReply:(bool)arg3;
- (id)personInfoDictionaryForPersonID:(id)arg1;
- (void)postBulletinsImmediately:(id)arg1;
- (void)prefetchResourcesForMemories:(id)arg1;
- (void)prepareRevertToOriginalForAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)previewAssetLocalIdentifiers;
- (id)previewRenderedContentURLAtIndex:(unsigned long long)arg1;
- (unsigned long long)previewRenderedContentURLCount;
- (void)privateDownloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(bool)arg3;
- (void)pruneAssets:(id)arg1 resourceTypes:(id)arg2;
- (void)purgeExpiredOutboundSharingAssets;
- (unsigned long long)purgeableSharedAssetsSpace;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)rebuildAllThumbnails;
- (void)rebuildCloudFeed;
- (void)rebuildMomentLists;
- (void)rebuildMomentsIncremental:(bool)arg1;
- (void)rebuildSearchIndexWithCompletion:(id /* block */)arg1;
- (void)recoverAssetsInInconsistentCloudState;
- (void)recoverFromCrashIfNeeded;
- (void)registerSceneTaxonomySHA:(id)arg1;
- (void)reloadMomentGenerationOptions;
- (void)removeAnalysisRecordsForDeletedAssets:(id)arg1 forWorkerType:(short)arg2;
- (void)removeLocalDuplicates;
- (void)repairMemoriesWithUUIDs:(id)arg1;
- (void)repairPotentialModelCorruption;
- (void)repairSingletonObjects;
- (id)replyQueue;
- (void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1;
- (void)requestAccessWithHandler:(id /* block */)arg1;
- (void)requestAdjustmentDataForAsset:(id)arg1 withDataBlob:(bool)arg2 networkAccessAllowed:(bool)arg3 trackCPLDownload:(bool)arg4 handler:(id /* block */)arg5;
- (void)requestCPLDownloadImageDataForAssets:(id)arg1 format:(int)arg2 doneTokens:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)requestImageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(bool)arg3 wantURLOnly:(bool)arg4 networkAccessAllowed:(bool)arg5 trackCPLDownload:(bool)arg6 handler:(id /* block */)arg7;
- (void)requestMasterThumbnailForAssetUUID:(id)arg1 handler:(id /* block */)arg2;
- (void)requestVideoPlaybackURLForCloudSharedAsset:(id)arg1 mediaAssetType:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)requestVideoURLForAsset:(id)arg1 format:(int)arg2 networkAccessAllowed:(bool)arg3 streamingAllowed:(bool)arg4 restrictToPlayable:(bool)arg5 trackCPLDownload:(bool)arg6 handler:(id /* block */)arg7;
- (void)resetDupesAnalysis;
- (bool)resetPendingAnalysisStatesWithError:(id*)arg1;
- (void)revertToOriginalForAsset:(id)arg1;
- (id)sandboxExtensionForAssetResourcePath:(id)arg1;
- (void)saveAssetWithJobDictionary:(id)arg1 handler:(id /* block */)arg2 imageSurface:(struct __IOSurface { }*)arg3 previewImageSurface:(struct __IOSurface { }*)arg4;
- (void)sendDaemonJob:(id)arg1 replyHandler:(id /* block */)arg2;
- (id)sendQueue;
- (void)sendResponse:(bool)arg1 toPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setExternalUsageIntent:(unsigned long long)arg1 forAssetWithURL:(id)arg2 handler:(id /* block */)arg3;
- (bool)setKeywords:(id)arg1 forAssetWithUUID:(id)arg2;
- (void)setPersonInfoDictionary:(id)arg1 forPersonID:(id)arg2;
- (void)setPhotosXPCEndpointForEndpoint:(id)arg1;
- (void)setPreviewAssetLocalIdentifiers:(id)arg1;
- (void)setPreviewRenderedContentURLs:(id)arg1;
- (void)setSearchIndexPaused:(bool)arg1 synchronously:(bool)arg2 reason:(id)arg3;
- (void)softResetSyncStatusWithCompletionHandler:(id /* block */)arg1;
- (void)syncWithCloudPhotoLibrary;
- (void)unloadImageFilesForAsset:(id)arg1 minimumFormat:(int)arg2 completionHandler:(id /* block */)arg3;
- (void)updateCameraPreviewWellImage:(id)arg1;
- (void)updateLocationDataForAssetUUID:(id)arg1;
- (void)updateModelAfterOTARestore;
- (void)updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2 fixAddedDate:(bool)arg3;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)updateThumbnailsForPhotos:(id)arg1 waitForReply:(bool)arg2 assignNewIndex:(bool)arg3 forceRefresh:(bool)arg4;
- (void)updateUnverifiedFaceCountThreshold;
- (void)userViewedBulletinWithRecordID:(unsigned long long)arg1;
- (void)waitForSearchIndexExistenceWithCompletion:(id /* block */)arg1;
- (void)waitUntilConnectionSendsAllMessages;

@end
