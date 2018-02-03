/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityImportContext : NSObject {
    PFUbiquityPeer * _actingPeer;
    PFUbiquitySwitchboardCacheWrapper * _cacheWrapper;
    PFUbiquityKnowledgeVector * _currentKnowledgeVector;
    NSString * _exportingPeerID;
    NSMutableDictionary * _globalIDToFetchedObject;
    NSDictionary * _globalIDToLocalIDURICache;
    PFUbiquityBaselineHeuristics * _heuristics;
    PFUbiquityKnowledgeVector * _kv;
    _PFUbiquityStack * _stack;
    PFUbiquityStoreMetadata * _storeMetadata;
    PFUbiquityStoreSaveSnapshot * _storeSaveSnapshot;
    PFUbiquityTransactionLog * _transactionLog;
}

@property (nonatomic, readonly) PFUbiquityPeer *actingPeer;
@property (nonatomic, retain) PFUbiquitySwitchboardCacheWrapper *cacheWrapper;
@property (nonatomic, retain) PFUbiquityKnowledgeVector *currentKnowledgeVector;
@property (nonatomic, retain) NSString *exportingPeerID;
@property (nonatomic, readonly) NSMutableDictionary *globalIDToFetchedObject;
@property (nonatomic, retain) NSDictionary *globalIDToLocalIDURICache;
@property (nonatomic, retain) PFUbiquityBaselineHeuristics *heuristics;
@property (nonatomic, retain) PFUbiquityKnowledgeVector *knowledgeVector;
@property (nonatomic, retain) _PFUbiquityStack *stack;
@property (nonatomic, retain) PFUbiquityStoreMetadata *storeMetadata;
@property (nonatomic, retain) PFUbiquityStoreSaveSnapshot *storeSaveSnapshot;
@property (nonatomic, retain) PFUbiquityTransactionLog *transactionLog;

- (id)actingPeer;
- (id)cacheWrapper;
- (id)currentKnowledgeVector;
- (void)dealloc;
- (id)exportingPeerID;
- (id)globalIDToFetchedObject;
- (id)globalIDToLocalIDURICache;
- (id)heuristics;
- (id)init;
- (id)initWithStack:(id)arg1 andStoreMetadata:(id)arg2;
- (id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 withLocalPeerID:(id)arg3;
- (id)knowledgeVector;
- (bool)prefetchManagedObjectsInContext:(id)arg1 error:(id*)arg2;
- (void)setActingPeer:(id)arg1;
- (void)setCacheWrapper:(id)arg1;
- (void)setCurrentKnowledgeVector:(id)arg1;
- (void)setExportingPeerID:(id)arg1;
- (void)setGlobalIDToLocalIDURICache:(id)arg1;
- (void)setHeuristics:(id)arg1;
- (void)setKnowledgeVector:(id)arg1;
- (void)setStack:(id)arg1;
- (void)setStoreMetadata:(id)arg1;
- (void)setStoreSaveSnapshot:(id)arg1;
- (void)setTransactionLog:(id)arg1;
- (id)stack;
- (id)storeMetadata;
- (id)storeSaveSnapshot;
- (id)transactionLog;

@end
