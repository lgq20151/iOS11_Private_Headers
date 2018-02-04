/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlayActivityController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSXPCConnection * _daemonPlayActivityControllerConnection;
    NSOperationQueue * _debugLogOperationQueue;
    NSMutableDictionary * _endpointIdentifierToEndpointRevisionInformation;
    int  _endpointRevisionInformationDidChangeNotifyToken;
    bool  _hasAttemptedTableCreation;
    bool  _hasLoadedEndpointRevisionInformation;
    bool  _hasSetupEndpointRevisionInformationDidChangeNotifyToken;
    bool  _hasValidEndpointRevisionInformationDidChangeNotifyToken;
    NSMutableArray * _pendingFlushingSessions;
    NSObject<OS_dispatch_queue> * _serialQueue;
    SSVPlayActivityTable * _table;
    unsigned long long  _writingStyle;
}

@property (nonatomic, readonly) unsigned long long writingStyle;

+ (id)_requiredEndpointIdentifiers;

- (void).cxx_destruct;
- (void)_acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 shouldFilterStoreAccountID:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_completePendingPlayEventsWithRevisionIndexSet:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)_copyEndpointRevisionInformationForEndpointIdentifier:(id)arg1;
- (id)_daemonPlayActivityControllerConnection;
- (void)_getFlushSessionInformationForEndpointIdentifier:(id)arg1 shouldAcquire:(bool)arg2 storeAccountID:(unsigned long long)arg3 shouldFilterStoreAccountID:(bool)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)_loadEndpointIdentifierInformationIfNeeded;
- (id)_revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1;
- (id)_revisionsIndexSetForPlayActivityEvents:(id)arg1;
- (id)_sessionInformationForSessionToken:(unsigned long long)arg1;
- (bool)_setEndpointRevisionInformation:(id)arg1 forEndpointIdentifier:(id)arg2;
- (void)_setupNotifyTokenIfNeeded;
- (id)_table;
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)completePendingPlayActivityEventPersistentIDs:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (void)flushPendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getHasPendingPlayEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getPlayActivityEventsFromRevision:(unsigned long long)arg1 toRevision:(unsigned long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)getRevisionInformationWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithWritingStyle:(unsigned long long)arg1;
- (void)recordPlayActivityEvents:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)removeFlushedPlayActivityEventsWithCompletionHandler:(id /* block */)arg1;
- (void)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setCurrentRevision:(unsigned long long)arg1 revisionVersionToken:(id)arg2 forEndpointIdentifier:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (unsigned long long)writingStyle;

@end