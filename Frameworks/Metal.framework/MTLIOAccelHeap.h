/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelHeap : NSObject {
    struct MTLRangeAllocator { 
        struct MTLRangeAllocatorElement {} *elements; 
        unsigned int numElements; 
        unsigned int capacity; 
        unsigned int capacityIncrement; 
        unsigned int defaultAlignmentMask; 
    }  _allocator;
    MTLIOAccelDevice<MTLDevice> * _device;
    NSString * _label;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
    MTLIOAccelResource * _resource;
    unsigned int  _size;
}

@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly) <MTLDevice> *device;
@property (copy) NSString *label;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long usedSize;

- (unsigned long long)cpuCacheMode;
- (unsigned long long)currentAllocatedSize;
- (void)dealloc;
- (void)deallocHeapSubResource;
- (id)description;
- (id)device;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1 size:(unsigned int)arg2 options:(unsigned long long)arg3 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned int x_1_1_13; unsigned long long x_1_1_14[2]; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; unsigned int x_1_3_6[1]; } x_15_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned long long x_2_3_3[3]; } x_15_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; unsigned long long x_3_3_5[2]; } x_15_2_3; } x_1_1_15; } x1; }*)arg4 argsSize:(unsigned int)arg5;
- (id)label;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
- (id)newSubResourceWithLength:(unsigned int)arg1 alignment:(unsigned int)arg2 options:(unsigned long long)arg3 offset:(unsigned int*)arg4;
- (void)setLabel:(id)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (unsigned long long)size;
- (unsigned long long)storageMode;
- (void)unpinMemoryAtOffset:(unsigned int)arg1 withLength:(unsigned int)arg2;
- (unsigned long long)usedSize;

@end
