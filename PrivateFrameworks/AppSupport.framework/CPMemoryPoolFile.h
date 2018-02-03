/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPMemoryPoolFile : NSObject {
    struct __CFAllocator { } * _deallocator;
    int  _fd;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
    unsigned long long  _slotCount;
    unsigned long long  _slotLength;
    char * _slots;
    struct __CFBitVector { } * _usedSlots;
}

- (void)dealloc;
- (id)initWithLabel:(const char *)arg1 slotCount:(unsigned long long)arg2 slotLength:(unsigned long long)arg3;
- (id)nextSlotWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)returnSlot:(void*)arg1;

@end
