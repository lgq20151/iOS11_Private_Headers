/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPXExtensionContext : NSExtensionContext <FPXVendor> {
    NSObject<OS_dispatch_queue> * _actionsQueue;
    NSMutableDictionary * _alternateContentsURLDictionary;
    NSMutableDictionary * _contextByDomainID;
    FPXDomainContext * _defaultDomainContext;
    NSMutableDictionary * _domainContextByURL;
    NSMutableSet * _listenerDelegates;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSString * _providerIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _runningEnumerators;
}

@property (nonatomic, retain) FPXDomainContext *defaultDomainContext;
@property (nonatomic, readonly) NSString *providerIdentifier;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)URLForItemID:(id)arg1 creatingPlaceholderIfMissing:(bool)arg2 ignoreAlternateContentsURL:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)_bounceURL:(id)arg1 originalName:(id)arg2 bounceIndex:(unsigned long long)arg3 error:(id*)arg4;
- (void)_deleteIndexInDomainContexts:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_importDocumentAtURL:(id)arg1 intoFolderWithIdentifier:(id)arg2 bounceOnCollision:(bool)arg3 originalName:(id)arg4 bounceIndex:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)_persistedDocumentURLForURL:(id)arg1 itemID:(id)arg2 extension:(id)arg3 shouldCreatePlaceholder:(bool)arg4 completionHandler:(id /* block */)arg5;
- (id)_proxyWithCancellationHandler:(id)arg1 forClientOperation:(id)arg2;
- (void)_reparentItem:(id)arg1 underParent:(id)arg2 withNewName:(id)arg3 shouldBounce:(bool)arg4 bounceIndex:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (id)_servicesForServiceNames:(id)arg1 itemID:(id)arg2;
- (void)_setTransaction:(id)arg1;
- (void)_startObservingCollectionWithProperties:(id)arg1 observer:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addListenerDelegate:(id)arg1;
- (id)alternateContentsURLForItemID:(id)arg1;
- (id)defaultDomainContext;
- (id)defaultInstance;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)didChangeItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)didUpdateAlternateContentsDocumentForDocumentAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)directValuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)domainContextForIdentifier:(id)arg1;
- (id)domainContextForItemID:(id)arg1;
- (id)domainContextForItemIDs:(id)arg1;
- (id)domainContextForURL:(id)arg1;
- (void)dropIndexForDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dumpIndexStateForDomain:(id)arg1 toFileHandler:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)enumeratorWasInvalidated:(id)arg1;
- (void)evictItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchRemoteFileProviderEndpointForProtocolName:(id)arg1 service:(id)arg2 itemURL:(id)arg3 needsItemURL:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchSupportedServicesForDocumentAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchSupportedServicesForItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)identifierForItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)indexOneBatchInDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (id)instanceForDomainIdentifier:(id)arg1;
- (id)instanceForItemID:(id)arg1;
- (id)instanceForItemIDs:(id)arg1;
- (id)instanceForURL:(id)arg1;
- (void)invalidate;
- (void)itemChangedAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)itemForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)privilegedValuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)providePlaceholderAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)providerIdentifier;
- (void)refreshInstalledAppsWithCompletionHandler:(id /* block */)arg1;
- (void)removeListenerDelegate:(id)arg1;
- (void)removeTrashedItemsOlderThanDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAlternateContentsURL:(id)arg1 onDocumentURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setDefaultDomainContext:(id)arg1;
- (void)setFavoriteRanks:(id)arg1 forItemIdentifiers:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setLastUsedDate:(id)arg1 forItemIDs:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setTagsData:(id)arg1 forItemIdentifiers:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)startOperation:(id)arg1 toCreateFolderWithName:(id)arg2 underParent:(id)arg3 bounceOnCollision:(bool)arg4 bounceIndex:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)startOperation:(id)arg1 toCreateFolderWithName:(id)arg2 underParent:(id)arg3 bounceOnCollision:(bool)arg4 reply:(id /* block */)arg5;
- (void)startOperation:(id)arg1 toDeleteItems:(id)arg2 reply:(id /* block */)arg3;
- (void)startOperation:(id)arg1 toFetchDefaultContainerForBundleIdentifier:(id)arg2 englishName:(id)arg3 inDomainIdentifier:(id)arg4 reply:(id /* block */)arg5;
- (void)startOperation:(id)arg1 toFetchItemID:(id)arg2 reply:(id /* block */)arg3;
- (void)startOperation:(id)arg1 toFetchParentForItem:(id)arg2 reply:(id /* block */)arg3;
- (void)startOperation:(id)arg1 toFetchThumbnailsForItemIdentifiers:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 completionHandler:(id /* block */)arg4;
- (void)startOperation:(id)arg1 toImportDocumentsAtURLs:(id)arg2 withSandboxExtensions:(id)arg3 lastUsedDates:(id)arg4 intoFolderWithIdentifier:(id)arg5 bounceOnCollision:(bool)arg6 reply:(id /* block */)arg7;
- (void)startOperation:(id)arg1 toRenameItem:(id)arg2 toNewName:(id)arg3 reply:(id /* block */)arg4;
- (void)startOperation:(id)arg1 toReparentItems:(id)arg2 underParent:(id)arg3 shouldBounce:(bool)arg4 reply:(id /* block */)arg5;
- (void)startProvidingItemAtURL:(id)arg1 readingOptions:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)startWithPrincipalInstance:(id)arg1 domains:(id)arg2 alternateContentsDictionary:(id)arg3;
- (void)trashItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)trashItemsWithIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)untrashItemsWithIdentifiers:(id)arg1 toDirectoryWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateDomains:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)valuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 allowIdentifiers:(bool)arg3 completionHandler:(id /* block */)arg4;

@end
