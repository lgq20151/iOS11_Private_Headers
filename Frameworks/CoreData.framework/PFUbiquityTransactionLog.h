/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityTransactionLog : NSObject {
    NSMutableDictionary * _contents;
    NSRecursiveLock * _contentsLock;
    NSString * _fileProtectionOption;
    bool  _inPermanentLocation;
    bool  _inStagingLocation;
    bool  _inTemporaryLocation;
    PFUbiquityKnowledgeVector * _knowledgeVector;
    bool  _loadUsingRetry;
    bool  _loadedComparisonMetadata;
    bool  _loadedContents;
    bool  _loadedDeletedObjectData;
    bool  _loadedImportMetadata;
    bool  _loadedInsertedObjectData;
    bool  _loadedUpdatedObjectData;
    NSString * _localPeerID;
    PFUbiquitySaveSnapshot * _saveSnapshot;
    PFUbiquityLocation * _stagingTransactionLogLocation;
    PFUbiquityLocation * _temporaryTransactionLogLocation;
    PFUbiquityLocation * _transactionLogLocation;
    int  _transactionLogType;
    bool  _useTemporaryLogLocation;
}

@property (nonatomic, readonly) PFUbiquityLocation *currentLocation;
@property (nonatomic, readonly) NSString *exportingPeerID;
@property (nonatomic, readonly) NSString *fileProtectionOption;
@property (nonatomic, readonly) bool inPermanentLocation;
@property (nonatomic, readonly) bool inStagingLocation;
@property (nonatomic, readonly) bool inTemporaryLocation;
@property (nonatomic, readonly) PFUbiquityKnowledgeVector *knowledgeVector;
@property (nonatomic) bool loadUsingRetry;
@property (nonatomic, readonly) bool loadedComparisonMetadata;
@property (nonatomic, readonly) bool loadedDeletedObjectData;
@property (nonatomic, readonly) bool loadedImportMetadata;
@property (nonatomic, readonly) bool loadedInsertedObjectData;
@property (nonatomic, readonly) bool loadedUpdatedObjectData;
@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) NSString *modelVersionHash;
@property (nonatomic, readonly) PFUbiquitySaveSnapshot *saveSnapshot;
@property (nonatomic, readonly) PFUbiquityLocation *stagingTransactionLogLocation;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readonly) PFUbiquityLocation *temporaryTransactionLogLocation;
@property (nonatomic, readonly) NSString *transactionLogFilename;
@property (nonatomic, readonly) PFUbiquityLocation *transactionLogLocation;
@property (nonatomic, readonly) int transactionLogType;
@property (nonatomic, readonly) NSNumber *transactionNumber;
@property (nonatomic) bool useTemporaryLogLocation;

+ (id)createDataFromExtendedAttrsForLog:(id)arg1 error:(id*)arg2;
+ (id)createTransactionLogFilenameForLogType:(int)arg1;
+ (id)generateTransactionLogFilename;
+ (bool)pruneTemporaryLogDirectoryForPeerRootLocation:(id)arg1 error:(id*)arg2;
+ (id)transactionLogFilenameUUID;
+ (int)transactionLogTypeFromLocation:(id)arg1;
+ (void)truncateLogFilesBeforeBaselineMetadata:(id)arg1 withLocalPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (void)truncateLogFilesForPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 beforeKnowledgeVector:(id)arg4 withLocalPeerID:(id)arg5 andUbiquityRootLocation:(id)arg6;
+ (void)updateModificationTimesForLocation:(id)arg1;

- (void)cleanupExternalDataReferences;
- (id)currentLocation;
- (void)dealloc;
- (bool)deleteLogFileWithError:(id*)arg1;
- (id)description;
- (id)exportingPeerID;
- (id)fileProtectionOption;
- (id)generatePeerCodeKnowledgeVectorWithManagedObjectContext:(id)arg1;
- (bool)inPermanentLocation;
- (bool)inStagingLocation;
- (bool)inTemporaryLocation;
- (id)init;
- (id)initWithStoreName:(id)arg1 andSaveSnapshot:(id)arg2 andRootLocation:(id)arg3;
- (id)initWithTransactionLogLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)initWithTransactionLogURL:(id)arg1 ubiquityRootLocation:(id)arg2 andLocalPeerID:(id)arg3;
- (id)knowledgeVector;
- (bool)loadComparisonMetadataWithError:(id*)arg1;
- (bool)loadContents:(id*)arg1;
- (bool)loadDeletedObjectsDataWithError:(id*)arg1;
- (bool)loadImportMetadataWithError:(id*)arg1;
- (bool)loadInsertedObjectsDataWithError:(id*)arg1;
- (id)loadPlistAtLocation:(id)arg1 withError:(id*)arg2;
- (bool)loadUpdatedObjectsDataWithError:(id*)arg1;
- (bool)loadUsingRetry;
- (bool)loadedComparisonMetadata;
- (bool)loadedDeletedObjectData;
- (bool)loadedImportMetadata;
- (bool)loadedInsertedObjectData;
- (bool)loadedUpdatedObjectData;
- (id)localPeerID;
- (id)modelVersionHash;
- (bool)moveFileToPermanentLocationWithError:(id*)arg1;
- (void)populateContents;
- (bool)releaseContents:(id*)arg1;
- (void)releaseDeletedObjects;
- (void)releaseInsertedObjects;
- (void)releaseUpdatedObjects;
- (bool)rewriteToDiskWithError:(id*)arg1;
- (id)saveSnapshot;
- (void)setLoadUsingRetry:(bool)arg1;
- (void)setUseTemporaryLogLocation:(bool)arg1;
- (id)stagingTransactionLogLocation;
- (id)storeName;
- (id)temporaryTransactionLogLocation;
- (id)transactionLogFilename;
- (id)transactionLogLocation;
- (int)transactionLogType;
- (id)transactionNumber;
- (bool)useTemporaryLogLocation;
- (bool)writeContentsOfZipArchive:(id)arg1 intoExtendedAttributesForFile:(id)arg2 error:(id*)arg3;
- (bool)writeToDiskWithError:(id*)arg1 andUpdateFilenameInTransactionEntries:(id)arg2;

@end
