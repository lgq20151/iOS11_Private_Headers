/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPXIndexOneBatchOperation : FPOperation {
    NSObject<OS_dispatch_queue> * _cleanupQueue;
    FPXDomainContext * _domainContext;
    id /* block */  _fetchCompletedBlock;
    bool  _hasMoreChanges;
    FPXIndexState * _indexState;
    FPXSpotlightIndexer * _indexer;
    bool  _isInitialIndexing;
    unsigned long long * _logSection;
}

@property (nonatomic, copy) id /* block */ fetchCompletedBlock;

- (void).cxx_destruct;
- (void)_handleInsertedItems:(id)arg1 deletedItems:(id)arg2 needsMoreWork:(bool)arg3 state:(id)arg4 error:(id)arg5;
- (void)_indexOneChangesBatchFromChangeToken:(id)arg1;
- (void)_indexOnePageFromPage:(id)arg1;
- (id /* block */)fetchCompletedBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)handleInsertedItems:(id)arg1 deletedItems:(id)arg2 needsMoreWork:(bool)arg3 state:(id)arg4 error:(id)arg5;
- (id)initWithIndexer:(id)arg1 isInitialIndexing:(bool)arg2 queue:(id)arg3;
- (void)main;
- (id)observerItemID;
- (void)setFetchCompletedBlock:(id /* block */)arg1;

@end
