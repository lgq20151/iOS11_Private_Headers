/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface _FPItemList : NSObject {
    NSMutableDictionary * _itemsByIDs;
    NSMutableOrderedSet * _orderedSet;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)allObjects;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)indexOfItemID:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingComparator:(id /* block */)arg4;
- (id)init;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)mutableCopy;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObjectWithID:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)sortUsingDescriptors:(id)arg1;

@end
