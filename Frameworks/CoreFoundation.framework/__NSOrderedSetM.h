/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSOrderedSetM : NSMutableOrderedSet {
    NSMutableArray * _array;
    struct __CFBasicHash { } * _set;
    unsigned long long  _used;
}

+ (id)__new:(const id*)arg1 :(unsigned long long)arg2 :(bool)arg3;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)_mutate;
- (bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countForObject:(id)arg1;
- (void)dealloc;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;

@end
