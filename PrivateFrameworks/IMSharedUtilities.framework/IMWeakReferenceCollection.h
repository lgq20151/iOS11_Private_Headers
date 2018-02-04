/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMWeakReferenceCollection : NSObject {
    NSMutableArray * _list;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)init;
- (void)removeObject:(id)arg1;

@end