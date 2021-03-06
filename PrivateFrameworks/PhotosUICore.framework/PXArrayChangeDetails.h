/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXArrayChangeDetails : NSObject {
    NSIndexSet * _changedIndexes;
    bool  _hasMoves;
    NSIndexSet * _insertedIndexes;
    struct __CFArray { } * _movesFromIndexes;
    NSIndexSet * _movesToIndexes;
    NSIndexSet * _removedIndexes;
}

@property (nonatomic, readonly) NSIndexSet *changedIndexes;
@property (nonatomic, readonly) bool hasAnyChanges;
@property (nonatomic, readonly) bool hasIncrementalChanges;
@property (readonly) bool hasMoves;
@property (nonatomic, readonly) NSIndexSet *insertedIndexes;
@property (nonatomic, readonly) NSIndexSet *removedIndexes;

+ (id)changeDetailsFromArray:(id)arg1 toArray:(id)arg2 changedObjects:(id)arg3;
+ (id)changeDetailsFromFetchResultChangeDetails:(id)arg1;
+ (id)changeDetailsWithNoChanges;
+ (id)changeDetailsWithNoIncrementalChanges;
+ (unsigned long long)indexAfterApplyingChanges:(id)arg1 toIndex:(unsigned long long)arg2 objectChanged:(out bool*)arg3;
+ (unsigned long long)indexAfterRevertingChanges:(id)arg1 fromIndex:(unsigned long long)arg2 objectChanged:(out bool*)arg3;

- (void).cxx_destruct;
- (id)changedIndexes;
- (void)dealloc;
- (id)description;
- (void)enumerateMovedIndexesUsingBlock:(id /* block */)arg1;
- (bool)hasAnyChanges;
- (bool)hasIncrementalChanges;
- (bool)hasMoves;
- (unsigned long long)indexAfterApplyingChangesToIndex:(unsigned long long)arg1;
- (unsigned long long)indexAfterRevertingChangesFromIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithIncrementalChangeDetailsRemovedIndexes:(id)arg1 insertedIndexes:(id)arg2 movesToIndexes:(id)arg3 movesFromIndexes:(const struct __CFArray { }*)arg4 changedIndexes:(id)arg5;
- (id)insertedIndexes;
- (id)removedIndexes;

@end
