/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityBaseline : PFUbiquitySafeSaveFile {
    _PFZipFileArchive * _baselineArchive;
    PFUbiquityLocation * _baselineStagingLocation;
    PFUbiquityBaselineMetadata * _metadata;
    NSManagedObjectModel * _model;
    NSString * _modelVersionHash;
    NSPersistentStore * _store;
    NSString * _storeFilename;
    NSMutableDictionary * _storeFilenameToData;
    NSString * _storeName;
}

@property (readonly) _PFZipFileArchive *baselineArchive;
@property (readonly) PFUbiquityLocation *baselineArchiveLocation;
@property (readonly) PFUbiquityLocation *baselinePeerArchiveLocation;
@property (readonly) PFUbiquityLocation *baselineStagingLocation;
@property (readonly) PFUbiquityBaselineMetadata *metadata;
@property (readonly) NSString *modelVersionHash;
@property (readonly) NSPersistentStore *store;
@property (readonly) NSString *storeFilename;
@property (readonly) NSDictionary *storeFilenameToData;
@property (readonly) NSString *storeName;

+ (bool)checkPeerReceiptsUnderRootLocation:(id)arg1 forAgreementWithLocalPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 error:(id*)arg5;
+ (id)createArchiveWithModel:(id)arg1 metadata:(id)arg2 storeFilenameToData:(id)arg3 storeFilename:(id)arg4 error:(id*)arg5;
+ (id)createBaselineGCModelForStoreName:(id)arg1 peerID:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;
+ (id)createBaselineOptimizedModelForStoreName:(id)arg1 peerID:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;
+ (id)createModelFromBaselineModelWithModelVersionHash:(id)arg1 peerID:(id)arg2 storeName:(id)arg3 andUbiquityRootLocation:(id)arg4;
+ (id)createStringOfContentsOfBaselineFile:(id)arg1;
+ (bool)isPeerReceiptTooOld:(id)arg1;
+ (id)metadataFromBaselineArchive:(id)arg1;
+ (id)metadataFromCurrentBaselineForStoreWithName:(id)arg1 peerID:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 withError:(id*)arg5;
+ (bool)removePeerSpecificIdentifiersFromStore:(id)arg1 withLocalPeerID:(id)arg2;

- (id)_createPersistentStoreCoordinatorForCurrentBaseline:(bool)arg1 error:(id*)arg2;
- (id)baselineArchive;
- (id)baselineArchiveLocation;
- (id)baselineMetadataData;
- (id)baselinePeerArchiveLocation;
- (id)baselineStagingLocation;
- (bool)canReplaceStoreAtKnowledgeVector:(id)arg1;
- (bool)clearOutStagingLocationWithError:(id*)arg1;
- (bool)constructBaselineArchive:(id*)arg1;
- (id)createManagedObjectModel;
- (id)createManagedObjectModelFromCurrentBaseline;
- (id)createPersistentStoreCoordinatorForCurrentBaseline:(id*)arg1;
- (id)createSetOfInUseExternalDataRefUUIDs:(id*)arg1;
- (void)dealloc;
- (id)description;
- (bool)gatherContentsAndConstructArchiveWithError:(id*)arg1;
- (bool)gatherContentsFromMigratedBaseline:(id)arg1 withStoreFileURL:(id)arg2 error:(id*)arg3;
- (id)gcModelData;
- (bool)haveTransactionLogsForPeer:(id)arg1 between:(long long)arg2 and:(long long)arg3;
- (bool)importBaselineForStoreAtURL:(id)arg1 ofType:(id)arg2 options:(id)arg3 withLocalPeerID:(id)arg4 stack:(id)arg5 andPersistentStoreCoordinator:(id)arg6 error:(id*)arg7;
- (id)init;
- (id)initWithBaselineLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 forStoreWithName:(id)arg3 andManagedObjectModel:(id)arg4;
- (bool)isUploaded:(id*)arg1;
- (bool)loadFileFromLocation:(id)arg1 error:(id*)arg2;
- (bool)makeCurrentBaselineWithError:(id*)arg1;
- (id)metadata;
- (bool)metadataMatchesCurrentMetadata:(id*)arg1;
- (id)modelVersionHash;
- (bool)moveToPermanentLocation:(id*)arg1;
- (id)optimizedModelData;
- (bool)prepareForBaselineRollOfPersistentStore:(id)arg1 andLocalPeerID:(id)arg2 error:(id*)arg3;
- (bool)removeUnusedExternalDataReferences:(id*)arg1;
- (bool)replaceLocalPersistentStoreAtURL:(id)arg1 ofType:(id)arg2 withOptions:(id)arg3 usingPersistentStoreCoordinator:(id)arg4 error:(id*)arg5;
- (void)setMetadata:(id)arg1;
- (id)store;
- (id)storeData;
- (id)storeFilename;
- (id)storeFilenameToData;
- (id)storeName;
- (bool)unpackStoreFilesToStagingLocation:(id*)arg1;
- (bool)updateCurrentStoreIdentifier:(id)arg1 error:(id*)arg2;
- (bool)writeFileToLocation:(id)arg1 error:(id*)arg2;

@end
