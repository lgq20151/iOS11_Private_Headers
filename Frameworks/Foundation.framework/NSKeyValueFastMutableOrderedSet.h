/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueFastMutableOrderedSet : NSKeyValueMutableOrderedSet {
    NSKeyValueMutatingOrderedSetMethodSet * _mutatingMethods;
}

- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;

@end
