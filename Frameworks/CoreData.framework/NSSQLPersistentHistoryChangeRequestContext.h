/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext {
    NSSQLiteStatement * _changeRequestStatement;
    NSFetchRequest * _fetchRequest;
}

@property (nonatomic, readonly) NSSQLiteStatement *changeRequestStatement;
@property (nonatomic, readonly) NSPersistentHistoryChangeRequest *request;

- (id)_changeFromResult:(id)arg1 withTransaction:(id)arg2 andTombstoneCache:(id)arg3;
- (void)_createChangeRequestStatement;
- (id)_processResult:(id)arg1;
- (id)_transactionFromResult:(id)arg1 withChanges:(id)arg2;
- (id)changeRequestStatement;
- (id)createCountRequestContextForChanges;
- (id)createDeleteTransactionsRequestContext;
- (id)createRequestContextForChangesWithTransactionIDs:(id)arg1;
- (void)dealloc;
- (void)executePrologue;
- (bool)executeRequestUsingConnection:(id)arg1;
- (id)fetchRequestDescribingChanges;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (bool)isWritingRequest;
- (id)request;

@end
