/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFUbiquityRecordImportOperation : PFUbiquityImportOperation <NSManagedObjectContextFaultingDelegate> {
    NSMutableSet * _deletedObjectIDs;
    PFUbiquitySwitchboardEntry * _entry;
    PFUbiquityImportContext * _importContext;
    PFUbiquityKnowledgeVector * _initialStoreKnowledgeVector;
    NSMutableSet * _insertedObjectIDs;
    bool  _lockedExistingCoord;
    PFUbiquityKnowledgeVector * _logScore;
    NSManagedObjectContext * _moc;
    NSError * _operationError;
    NSPersistentStoreCoordinator * _psc;
    NSMutableDictionary * _relationshipsToObjectIDsToCheck;
    NSMutableDictionary * _resolvedConflicts;
    bool  _success;
    bool  _transactionDidRollback;
    PFUbiquityTransactionLog * _transactionLog;
    NSMutableSet * _updatedObjectIDs;
    PFUbiquityKnowledgeVector * _updatedStoreKnowledgeVector;
    bool  _wroteKV;
}

@property (readonly, copy) NSString *debugDescription;
@property NSObject<_PFUbiquityRecordImportOperationDelegate> *delegate;
@property (nonatomic, readonly) NSMutableSet *deletedObjectIDs;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PFUbiquityImportContext *importContext;
@property (readonly) PFUbiquityKnowledgeVector *initialStoreKnowledgeVector;
@property (nonatomic, readonly) NSMutableSet *insertedObjectIDs;
@property bool lockedExistingCoord;
@property (nonatomic, retain) PFUbiquityKnowledgeVector *logScore;
@property (readonly) NSManagedObjectContext *moc;
@property (nonatomic, readonly) NSError *operationError;
@property (readonly) NSPersistentStoreCoordinator *psc;
@property (nonatomic, readonly) NSMutableDictionary *resolvedConflicts;
@property (nonatomic, readonly) bool success;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool transactionDidRollBack;
@property (nonatomic, readonly) PFUbiquityTransactionLog *transactionLog;
@property (nonatomic, readonly) NSMutableSet *updatedObjectIDs;
@property (nonatomic, retain) PFUbiquityKnowledgeVector *updatedStoreKnowledgeVector;
@property (nonatomic, readonly) bool wroteKV;

- (bool)applyChangesFromStoreSaveSnapshot:(id)arg1 withImportContext:(id)arg2 withError:(id*)arg3;
- (void)cancel;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (id)copy;
- (void)dealloc;
- (id)delegate;
- (id)deletedObjectIDs;
- (id)description;
- (bool)fillManagedObject:(id)arg1 withGlobalID:(id)arg2 fromUbiquityDictionary:(id)arg3 missingObjects:(id)arg4 importContext:(id)arg5 withError:(id*)arg6;
- (id)importContext;
- (id)init;
- (id)initWithTransactionLog:(id)arg1 persistentStore:(id)arg2 andLocalPeerID:(id)arg3;
- (id)initialStoreKnowledgeVector;
- (id)insertedObjectIDs;
- (bool)lockedExistingCoord;
- (id)logScore;
- (void)main;
- (id)moc;
- (void)notifyDelegateOfError:(id)arg1;
- (id)operationError;
- (bool)processObjects:(id)arg1 withState:(int)arg2 andImportContext:(id)arg3 outError:(id*)arg4;
- (id)psc;
- (id)resolvedConflicts;
- (void)respondToStoreTransactionStateChangeNotification:(id)arg1;
- (id)retainedDelegate;
- (void)setDelegate:(id)arg1;
- (void)setImportContext:(id)arg1;
- (void)setLockedExistingCoord:(bool)arg1;
- (void)setLogScore:(id)arg1;
- (void)setUpdatedStoreKnowledgeVector:(id)arg1;
- (bool)success;
- (bool)transactionDidRollBack;
- (id)transactionLog;
- (id)updatedObjectIDs;
- (id)updatedStoreKnowledgeVector;
- (bool)wroteKV;

@end
