/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSFrozenArrayM : NSArray {
    /* Warning: Unrecognized filer type: '^' using 'void*' */ void* cow;
    /* Warning: unhandled struct encoding: '{?="list"^@"offset"I"size"I"state"(?="mutations"Q""{?="muts"I"used"I})}' */ struct { 
        offset **list; 
    }  storage;
}

+ (id)__new:(const id*)arg1 :(char *)arg2 :(unsigned long long)arg3 :(bool)arg4;
+ (id)__transferNew:(id*)arg1 :(unsigned long long)arg2 :(unsigned long long)arg3;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;

@end
