/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSDictionaryI : NSDictionary {
    /* Warning: unhandled array encoding: '[0@]' */ id  _list;
    unsigned int  _szidx;
    unsigned int  _used;
}

+ (id)__new:(const id*)arg1 :(const id*)arg2 :(char *)arg3 :(unsigned long long)arg4 :(bool)arg5 :(bool)arg6;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)__apply:(int (*)arg1 context:(void*)arg2;
- (double)_clumpingFactor;
- (double)_clumpingInterestingThreshold;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;

@end
