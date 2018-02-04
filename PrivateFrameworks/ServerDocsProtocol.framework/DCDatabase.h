/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCDatabase : NSObject {
    NSURL * _databaseURL;
    NSManagedObjectContext * _managedObjectContext;
    NSManagedObjectModel * _model;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
    DCService * _service;
}

@property (nonatomic, retain) NSURL *databaseURL;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSManagedObjectModel *model;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, readonly) DCService *service;

+ (id)_managedObjectModel;
+ (id)databaseForService:(id)arg1;

- (void).cxx_destruct;
- (id)_databaseDirectory;
- (bool)_databaseFileExists;
- (void)_setupManagedObjectContext;
- (id)allUploads;
- (id)databaseURL;
- (void)deleteDatabase;
- (id)documentIdentifierForPath:(id)arg1;
- (id)initWithService:(id)arg1;
- (id)managedObjectContext;
- (id)model;
- (unsigned long long)numberOfPendingUploads;
- (id)otherMetadataForDocumentIdentifier:(id)arg1;
- (id)otherMetadataForDocumentIdentifier:(id)arg1 createIfNecessary:(bool)arg2;
- (id)pathsForDocumentIdentifier:(id)arg1;
- (id)persistentStoreCoordinator;
- (void)removeCancelledUpload:(id)arg1;
- (void)removeOtherMetadataForDocumentIdentifier:(id)arg1;
- (void)removePath:(id)arg1;
- (void)removeStoredLocalMetadataForDocumentIdentifier:(id)arg1;
- (void)removeUploadForPath:(id)arg1;
- (void)renamePath:(id)arg1 toPath:(id)arg2;
- (void)reset;
- (bool)save;
- (void)saveOtherMetadata:(id)arg1 forDocumentIdentifier:(id)arg2;
- (void)saveStoredLocalMetadata:(id)arg1 forDocumentIdentifier:(id)arg2;
- (void)saveUploadFileURL:(id)arg1 forPath:(id)arg2;
- (void)saveUploadFileURL:(id)arg1 generationIdentifier:(id)arg2 taskIdentifier:(id)arg3 forPath:(id)arg4;
- (bool)saveWithError:(id*)arg1;
- (bool)saveWithError:(id*)arg1 rollbackOnFailure:(bool)arg2;
- (id)service;
- (void)setDatabaseURL:(id)arg1;
- (void)setDocumentIdentifier:(id)arg1 forPath:(id)arg2;
- (void)setManagedObjectContext:(id)arg1;
- (id)storedLocalMetadataForDocumentIdentifier:(id)arg1;
- (id)uploadForPath:(id)arg1;
- (id)uploadForTaskIdentifier:(id)arg1 sessionIdentifier:(id)arg2;
- (id)uploadPaths;

@end