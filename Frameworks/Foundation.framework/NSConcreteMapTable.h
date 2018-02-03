/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteMapTable : NSMapTable {
    unsigned long long  capacity;
    unsigned long long  count;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  growLock;
    unsigned long long  keyOptions;
    struct NSSlice { 
        void **items; 
        bool wantsStrong; 
        bool wantsWeak; 
        bool wantsARC; 
        bool shouldCopyIn; 
        bool usesStrong; 
        bool usesWeak; 
        bool usesARC; 
        bool usesSentinel; 
        bool pointerPersonality; 
        bool integerPersonality; 
        bool simpleReadClear; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    }  keys;
    unsigned long long  mutations;
    bool  shouldRehash;
    unsigned long long  valueOptions;
    struct NSSlice { 
        void **items; 
        bool wantsStrong; 
        bool wantsWeak; 
        bool wantsARC; 
        bool shouldCopyIn; 
        bool usesStrong; 
        bool usesWeak; 
        bool usesARC; 
        bool usesSentinel; 
        bool pointerPersonality; 
        bool integerPersonality; 
        bool simpleReadClear; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    }  values;
}

- (unsigned long long)__capacity;
- (void)_setBackingStore;
- (id)allKeys;
- (id)allValues;
- (void)assign:(unsigned long long)arg1 key:(const void*)arg2 value:(const void*)arg3 isNew:(bool)arg4;
- (void)checkCount:(const char *)arg1;
- (Class)classForCoder;
- (bool)containsKeys:(const void**)arg1 values:(const void**)arg2 count:(unsigned long long)arg3;
- (id)copy;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (id)dump;
- (void)encodeWithCoder:(id)arg1;
- (void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (unsigned long long)getKeys:(const void**)arg1 values:(const void**)arg2;
- (void)grow;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3;
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)keyEnumerator;
- (id)keyPointerFunctions;
- (bool)mapMember:(const void*)arg1 originalKey:(const void**)arg2 value:(const void**)arg3;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (void)raiseCountUnderflowException;
- (unsigned long long)realCount;
- (void)rehash;
- (unsigned long long)rehashAround:(unsigned long long)arg1;
- (void)removeAllItems;
- (void)removeObjectForKey:(id)arg1;
- (void)replaceItem:(const void*)arg1 forExistingKey:(const void*)arg2;
- (void)setItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)valuePointerFunctions;

@end
