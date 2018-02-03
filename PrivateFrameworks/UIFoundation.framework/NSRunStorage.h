/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSRunStorage : NSObject <NSCopying> {
    unsigned long long  _cachedBlock;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _cachedBlockRange;
    unsigned long long  _count;
    unsigned long long  _elementSize;
    unsigned long long  _gapBlockIndex;
    long long  _indexDelta;
    unsigned long long  _indexDeltaStartBlock;
    unsigned long long  _maxBlocks;
    unsigned long long  _numBlocks;
    struct _NSRunBlock { unsigned long long x1; unsigned char x2[0]; } * _runs;
}

+ (void)_setConsistencyCheckingEnabled:(bool)arg1 superCheckEnabled:(bool)arg2;
+ (void)initialize;

- (void)_allocData:(unsigned long long)arg1;
- (void)_consistencyCheck:(long long)arg1;
- (void)_consistencyError:(long long)arg1 startAtZeroError:(bool)arg2 cacheError:(bool)arg3 inconsistentBlockError:(bool)arg4;
- (void)_deallocData;
- (void)_ensureCapacity:(unsigned long long)arg1;
- (void)_moveGapAndMergeWithBlockRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_moveGapToBlockIndex:(unsigned long long)arg1;
- (void)_reallocData:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void*)elementAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (unsigned long long)elementSize;
- (id)init;
- (id)initWithElementSize:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (id)initWithRunStorage:(id)arg1;
- (void)insertElement:(void*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 coalesceRuns:(bool)arg3;
- (void)removeElementsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 coalesceRuns:(bool)arg2;
- (void)replaceElementsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withElement:(void*)arg2 coalesceRuns:(bool)arg3;

@end
