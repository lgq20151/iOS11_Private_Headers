/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileAccessClaim : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _arbiterQueue;
    unsigned long long  _blockageCount;
    NSMutableSet * _blockingClaims;
    NSCountedSet * _blockingReactorIDs;
    bool  _cameFromSuperarbiter;
    NSString * _claimID;
    NSMutableArray * _claimerBlockageReasons;
    NSError * _claimerError;
    id  _claimerOrNil;
    NSObject<OS_dispatch_semaphore> * _claimerWaiter;
    NSXPCConnection * _client;
    NSMutableArray * _devaluationProcedures;
    bool  _didWait;
    NSMutableArray * _finishingProcedures;
    bool  _hasInvokedClaimer;
    bool  _isRevoked;
    id  _originatingReactorQueueID;
    NSMutableOrderedSet * _pendingClaims;
    NSFileAccessProcessManager * _processManager;
    NSMutableArray * _providerCancellationProcedures;
    NSString * _purposeIDOrNil;
    NSMutableDictionary * _reacquisitionProceduresByPresenterID;
    NSMutableArray * _revocationProcedures;
    NSMutableArray * _sandboxTokens;
    id /* block */  _serverClaimerOrNil;
}

@property (readonly) NSObject<OS_dispatch_semaphore> *claimerWaiter;

+ (bool)canReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned long long)arg4;
+ (bool)canWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned long long)arg4;
+ (bool)supportsSecureCoding;

- (void)_setupWithClaimID:(id)arg1 purposeID:(id)arg2 originatingReactorQueueID:(id)arg3;
- (bool)_writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (void)acceptClaimFromClient:(id)arg1 arbiterQueue:(id)arg2 grantHandler:(id /* block */)arg3;
- (void)addPendingClaim:(id)arg1;
- (id)allURLs;
- (void)block;
- (void)blockClaimerForReason:(id)arg1;
- (bool)cameFromSuperarbiter;
- (bool)canAccessLocations:(id)arg1 forReading:(bool)arg2 error:(id*)arg3;
- (void)cancelled;
- (bool)checkIfSymbolicLinkAtURL:(id)arg1 withResolutionCount:(long long*)arg2 andIfSoThenReevaluateSelf:(id /* block */)arg3;
- (id)claimID;
- (id)claimerError;
- (bool)claimerInvokingIsBlockedByReactorWithID:(id)arg1;
- (id)claimerWaiter;
- (id)client;
- (int)clientProcessIdentifier;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (void)devalueOldClaim:(id)arg1;
- (void)devalueSelf;
- (bool)didWait;
- (void)disavowed;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluateNewClaim:(id)arg1;
- (bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(bool)arg2;
- (void)finished;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(id /* block */)arg2;
- (void)givePriorityToClaim:(id)arg1;
- (void)granted;
- (id)initWithClient:(id)arg1 claimID:(id)arg2 purposeID:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)invokeClaimer;
- (bool)isBlockedByClaimWithPurposeID:(id)arg1;
- (bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (bool)isGranted;
- (bool)isRevoked;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)makePresentersOfItemAtLocation:(id)arg1 orContainedItem:(bool)arg2 relinquishUsingProcedureGetter:(id /* block */)arg3;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideIfNecessaryWithOptions:(unsigned long long)arg2 thenContinue:(id /* block */)arg3;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 readingOptions:(unsigned long long)arg3 thenContinue:(id /* block */)arg4;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 writingOptions:(unsigned long long)arg3 thenContinue:(id /* block */)arg4;
- (void)makeProviderOfItemAtLocation:(id)arg1 providePhysicalURLThenContinue:(id /* block */)arg2;
- (id)pendingClaims;
- (void)prepareClaimForGrantingWithArbiterQueue:(id)arg1;
- (void)prepareItemForUploadingFromURL:(id)arg1 thenContinue:(id /* block */)arg2;
- (id)purposeID;
- (id)purposeIDOfClaimOnItemAtLocation:(id)arg1 forMessagingPresenter:(id)arg2;
- (void)removePendingClaims:(id)arg1;
- (void)revoked;
- (void)scheduleBlockedClaim:(id)arg1;
- (void)setCameFromSuperarbiter;
- (void)setClaimerError:(id)arg1;
- (bool)shouldBeRevokedPriorToInvokingAccessor;
- (bool)shouldCancelInsteadOfWaiting;
- (bool)shouldInformProvidersAboutEndOfWriteWithOptions:(unsigned long long)arg1;
- (bool)shouldReadingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2;
- (void)startObservingClientState;
- (void)unblock;
- (void)unblockClaimerForReason:(id)arg1;
- (void)whenDevaluedPerformProcedure:(id /* block */)arg1;
- (void)whenFinishedPerformProcedure:(id /* block */)arg1;
- (void)whenRevokedPerformProcedure:(id /* block */)arg1;

@end
