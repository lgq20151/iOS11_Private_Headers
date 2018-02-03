/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSXPCStoreServer : NSObject <NSXPCListenerDelegate, NSXPCServerProtocol> {
    NSMapTable * _connectionToCoordinatorMap;
    id  _delegate;
    NSArray * _entitlementNames;
    NSXPCListener * _listener;
    NSManagedObjectModel * _model;
    NSURL * _modelURL;
    NSXPCStoreServerNotificationManager * _observer;
    NSXPCStoreServerRequestHandlingPolicy * _policy;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _storeOptions;
    NSURL * _storeURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)debugDefault;
+ (void)initialize;

- (id)XPCEncodableGenerationTokenForOriginal:(id)arg1 inContext:(id)arg2;
- (id)_createCoordinator;
- (void)_populateObject:(id)arg1 withValuesFromClient:(id)arg2;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (void)dealloc;
- (id)delegate;
- (id)errorHandlingDelegate;
- (bool)errorIsPlausiblyAnSQLiteIssue:(id)arg1;
- (id)handleBatchDeleteRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)handleFaultRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)handleFetchRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)handleMetadataRequestInContext:(id)arg1;
- (id)handleNotificationNameRequestInContext:(id)arg1 error:(id*)arg2;
- (id)handleObtainRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)handlePersistentHistoryRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)handlePullChangesRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)handleQueryGenerationReleaseRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)handleQueryGenerationReopenRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)handleQueryGenerationRequestInContext:(id)arg1 error:(id*)arg2;
- (id)handleRelationshipFaultRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (oneway void)handleRequest:(id)arg1 reply:(id /* block */)arg2;
- (id)handleSaveRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)initForStoreWithURL:(id)arg1 usingModel:(id)arg2 options:(id)arg3 policy:(id)arg4;
- (id)initForStoreWithURL:(id)arg1 usingModelAtURL:(id)arg2 options:(id)arg3 policy:(id)arg4;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)localGenerationForXPCToken:(id)arg1 withContext:(id)arg2;
- (void)removeCachesForConnection:(id)arg1;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
- (id)requestHandlingPolicy;
- (id)retainedCacheForConnection:(id)arg1;
- (void)setErrorHandlingDelegate:(id)arg1;
- (bool)setupRecoveryForConnectionContext:(id)arg1 ifNecessary:(id)arg2;
- (void)startListening;
- (id)unpackQueryGeneration:(id)arg1 withContext:(id)arg2;

@end
