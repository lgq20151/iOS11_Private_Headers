/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryDeletionPlan : NSObject {
    NSMutableSet * _discoveredItemsToDelete;
    NSSet * _discoveredVisitsToDelete;
    NSSet * _excludedItems;
    NSSet * _excludedVisits;
    <WBSHistoryStore> * _store;
    NSSet * _triggeringItems;
    NSSet * _triggeringVisits;
    NSMapTable * _updatedLastVisitsByItem;
    bool  _wasPrepared;
}

@property (nonatomic, readonly) NSSet *allItemsToDelete;
@property (nonatomic, readonly) NSMapTable *allVisitsToDeleteByItemExcludingItemsBeingDeleted;
@property (nonatomic, readonly) NSSet *allVisitsToDeleteExcludingVisitsFromItemsBeingDeleted;
@property (nonatomic, readonly) NSSet *discoveredItemsToDelete;
@property (nonatomic, readonly) NSSet *discoveredVisitsToDelete;
@property (nonatomic, readonly) NSSet *triggeringItems;
@property (nonatomic, readonly) NSSet *triggeringVisits;
@property (nonatomic, readonly) NSMapTable *updatedLastVisitsByItem;
@property (nonatomic, readonly) bool wasPrepared;

- (void).cxx_destruct;
- (id)_extraVisitsToDeleteWhenDeletingItems:(id)arg1 visits:(id)arg2;
- (id)_extraVisitsToDeleteWhenDeletingItems:(id)arg1 visits:(id)arg2 relatedVisitKey:(id)arg3 relatedVisitsQueryFactory:(id /* block */)arg4;
- (void)_prepareWithTriggeringItems:(id)arg1 triggeringVisits:(id)arg2;
- (id)allItemsToDelete;
- (id)allVisitsToDeleteByItemExcludingItemsBeingDeleted;
- (id)allVisitsToDeleteExcludingVisitsFromItemsBeingDeleted;
- (id)discoveredItemsToDelete;
- (id)discoveredVisitsToDelete;
- (void)execute;
- (id)initWithSQLiteStore:(id)arg1 triggeringItems:(id)arg2 excludingItems:(id)arg3 visits:(id)arg4 reason:(long long)arg5;
- (id)initWithSQLiteStore:(id)arg1 triggeringVisits:(id)arg2 excludingItems:(id)arg3 visits:(id)arg4;
- (void)prepare;
- (id)triggeringItems;
- (id)triggeringVisits;
- (id)updatedLastVisitsByItem;
- (bool)wasPrepared;

@end