/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentStore : NSObject {
    int  _activeRequests;
    NSString * _configurationName;
    NSPersistentStoreCoordinator * _coordinator;
    id  _coreSpotlightDelegate;
    id  _defaultFaultHandler;
    struct _objectStoreFlags { 
        unsigned int isReadOnly : 1; 
        unsigned int cleanOnRemove : 1; 
        unsigned int isMDDirty : 1; 
        unsigned int _RESERVED : 29; 
    }  _flags;
    id * _oidFactories;
    NSDictionary * _options;
    int  _reserved32;
    void * _temporaryIDClass;
    NSURL * _url;
}

@property (retain) NSURL *URL;
@property (readonly, copy) NSString *configurationName;
@property (nonatomic, readonly) NSCoreDataCoreSpotlightDelegate *coreSpotlightExporter;
@property (copy) NSString *identifier;
@property (nonatomic, retain) NSDictionary *metadata;
@property (readonly) NSDictionary *options;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (getter=isReadOnly) bool readOnly;
@property (readonly, copy) NSString *type;

+ (bool)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1;
+ (bool)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5;
+ (bool)accessInstanceVariablesDirectly;
+ (id)cachedModelForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (bool)doURLStuff:(id)arg1 createdStubFile:(bool*)arg2 readOnly:(bool*)arg3 error:(id*)arg4 options:(id)arg5;
+ (void)initialize;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;
+ (Class)migrationManagerClass;
+ (Class)rowCacheClass;
+ (bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;

- (id)URL;
- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3;
- (id)_defaultMetadata;
- (void)_didLoadMetadata;
- (bool)_isMetadataDirty;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (Class)_objectIDClass;
- (void)_preflightCrossCheck;
- (bool)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)_rawMetadata__;
- (void)_resetObjectIDFactoriesForStoreUUIDChange;
- (void)_setMetadataDirty:(bool)arg1;
- (id)_storeInfoForEntityDescription:(id)arg1;
- (bool)_unload:(id*)arg1;
- (void)_updateAncillaryVersionHashesInMetadata:(id)arg1;
- (void)_updateMetadata;
- (id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(bool)arg2;
- (id)ancillaryModels;
- (id)configurationName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreSpotlightExporter;
- (id)currentChangeToken;
- (id)currentQueryGeneration;
- (void)dealloc;
- (void)decrementInUseCounter;
- (id)description;
- (void)didAddToPersistentStoreCoordinator:(id)arg1;
- (void)doFilesystemCleanupOnRemove:(bool)arg1;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)faultHandler;
- (Class)faultHandlerClass;
- (void)freeQueryGenerationWithIdentifier:(id)arg1;
- (id)identifier;
- (void)incrementInUseCounter;
- (id)init;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (bool)isReadOnly;
- (bool)load:(id*)arg1;
- (bool)loadMetadata:(id*)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (id)metadata;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (Class)objectIDClassForEntity:(id)arg1;
- (id)objectIDFactoryForEntity:(id)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)options;
- (id)persistentStoreCoordinator;
- (id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)setIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setURL:(id)arg1;
- (bool)supportsConcurrentRequestHandling;
- (bool)supportsGenerationalQuerying;
- (id)type;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;

@end
