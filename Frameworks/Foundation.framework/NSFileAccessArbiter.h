/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileAccessArbiter : NSObject <NSFileAccessArbiterXPCInterface, NSXPCListenerDelegate> {
    NSMutableDictionary * _accessClaimTransactionsByID;
    NSMutableDictionary * _accessClaimsByID;
    NSObject<OS_dispatch_source> * _debugSignalSource;
    bool  _isStopped;
    bool  _isSubarbiter;
    NSXPCListener * _listenerConnection;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _reactorTransactionsByID;
    NSMutableDictionary * _reactorsByID;
    NSFileAccessNode * _rootNode;
    NSMutableDictionary * _subarbitrationClaimsByID;
    NSXPCConnection * _superarbitrationServer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSXPCConnection *superarbitrationConnection;
@property (readonly) Class superclass;

+ (void)_gainedBirdProvider:(id)arg1;
+ (void)_lostBirdProvider:(id)arg1;
+ (void)_wakeUpBirdWithUID:(unsigned int)arg1 queue:(id)arg2 thenContinue:(id /* block */)arg3;
+ (void)ensureProvidersIfNecessaryForClaim:(id)arg1 readingAtLocation:(id)arg2 queue:(id)arg3 thenContinue:(id /* block */)arg4;

- (bool)_addPresenter:(id)arg1 ofItemAtURL:(id)arg2 watchingFile:(bool)arg3 withLastEventID:(id)arg4;
- (bool)_addProvider:(id)arg1 ofItemsAtURL:(id)arg2;
- (void)_enumerateSubarbitersUsingBlock:(id /* block */)arg1;
- (void)_grantAccessClaim:(id)arg1;
- (void)_grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;
- (void)_handleCanceledClient:(id)arg1;
- (void)_registerForDebugInfoRequests;
- (void)_removeReactorForID:(id)arg1;
- (void)_revokeAccessClaimForID:(id)arg1 fromLocal:(bool)arg2;
- (void)_startArbitratingItemsAtURLs:(id)arg1 withSuperarbitrationServer:(id)arg2;
- (void)_willRemoveReactor:(id)arg1;
- (void)_writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (void)addPresenter:(id)arg1 withID:(id)arg2 fileURL:(id)arg3 lastPresentedItemEventIdentifier:(id)arg4 ubiquityAttributes:(id)arg5 options:(unsigned long long)arg6 responses:(unsigned long long)arg7;
- (void)addProvider:(id)arg1 withID:(id)arg2 uniqueID:(id)arg3 forProvidedItemsURL:(id)arg4 options:(unsigned long long)arg5 withServer:(id)arg6 reply:(id /* block */)arg7;
- (oneway void)cancelAccessClaimForID:(id)arg1;
- (void)dealloc;
- (void)getDebugInformationIncludingEverything:(bool)arg1 withString:(id)arg2 fromPid:(int)arg3 thenContinue:(id /* block */)arg4;
- (void)getItemHasPresentersAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)grantAccessClaim:(id)arg1 withReply:(id /* block */)arg2;
- (void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 reply:(id /* block */)arg3;
- (id)initWithQueue:(id)arg1 isSubarbiter:(bool)arg2 listener:(id)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)performBarrierWithCompletionHandler:(id /* block */)arg1;
- (oneway void)prepareToArbitrateForURLs:(id)arg1;
- (void)provideDebugInfoWithLocalInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)provideSubarbiterDebugInfoIncludingEverything:(bool)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)removePresenterWithID:(id)arg1;
- (oneway void)removeProviderWithID:(id)arg1 uniqueID:(id)arg2;
- (oneway void)revokeAccessClaimForID:(id)arg1;
- (oneway void)revokeSubarbitrationClaimForID:(id)arg1;
- (id)rootNode;
- (void)startArbitratingWithReply:(id /* block */)arg1;
- (void)stopArbitrating;
- (id)superarbitrationConnection;
- (oneway void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeSharingOfItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityAttributes:(id)arg2 ofItemAtURL:(id)arg3;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (oneway void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;

@end
