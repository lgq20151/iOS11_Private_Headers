/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelResource : NSObject <MTLResourceSPI> {
    struct _MTLIOAccelResource { 
        union { 
            unsigned long long reserved[4]; 
        } vendor; 
        struct IOAccelResourceInfo { 
            struct __IOSurface {} *iosurface; 
            unsigned int resourceID; 
            unsigned int resourceSize; 
            unsigned int iosurfaceField; 
        } info; 
        unsigned long long sharedAllocationUniqueId; 
        unsigned long long cachedAllocationUniqueId; 
        unsigned long long gpuAddress; 
        MTLIOAccelDevice<MTLDevice> *device; 
        NSString *label; 
        unsigned long long globalTraceObjectID; 
        unsigned long long labelTraceID; 
        struct __IOAccelResource {} *resourceRef; 
        struct IOAccelClientSharedRO {} *clientSharedRO; 
        struct IOAccelClientSharedRW {} *clientSharedRW; 
        void *virtualAddress; 
        unsigned long long options; 
        unsigned long long storageMode; 
        unsigned long long cpuCacheMode; 
        int responsibleProcess; 
        unsigned long long purgeableState; 
        bool purgeableAllowed; 
        MTLResourceAllocationInfo *sharedAllocationInfo; 
        MTLResourceAllocationInfo *cachedAllocationInfo; 
        MTLIOAccelHeap *heap; 
        MTLIOAccelResource *resource; 
        unsigned int offset; 
        unsigned int length; 
        bool pinned; 
    }  _res;
    MTLIOAccelResource * next;
    MTLIOAccelResource * prev;
    unsigned long long  uniqueId;
}

@property (readonly) unsigned long long allocatedSize;
@property (readonly) MTLResourceAllocationInfo *cachedAllocationInfo;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long gpuAddress;
@property (readonly) unsigned long long hash;
@property (readonly) <MTLHeap> *heap;
@property (copy) NSString *label;
@property (nonatomic, readonly) unsigned int resourceID;
@property (readonly) struct __IOAccelResource { }*resourceRef;
@property (nonatomic, readonly) unsigned int resourceSize;
@property int responsibleProcess;
@property (readonly) MTLResourceAllocationInfo *sharedAllocationInfo;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) void*virtualAddress;

- (unsigned long long)allocatedSize;
- (void)annotateResource:(struct __CFDictionary { }*)arg1;
- (id)cachedAllocationInfo;
- (struct __CFDictionary { }*)copyAnnotationDictionary:(unsigned long long)arg1 obj_key_name:(struct __CFString { }*)arg2 obj_dict:(struct __CFDictionary { }*)arg3;
- (struct __CFArray { }*)copyAnnotations;
- (unsigned long long)cpuCacheMode;
- (void)dealloc;
- (id)device;
- (bool)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasResource:(id)arg1;
- (unsigned long long)gpuAddress;
- (id)heap;
- (id)initMemoryless:(id)arg1 descriptor:(id)arg2;
- (id)initStandinWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 options:(unsigned long long)arg2 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned int x_1_1_13; unsigned long long x_1_1_14[2]; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; unsigned int x_1_3_6[1]; } x_15_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned long long x_2_3_3[3]; } x_15_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; unsigned long long x_3_3_5[2]; } x_15_2_3; } x_1_1_15; } x1; }*)arg3 argsSize:(unsigned int)arg4;
- (id)initWithResource:(id)arg1;
- (bool)isAliasable;
- (bool)isComplete;
- (bool)isPurgeable;
- (id)label;
- (void)makeAliasable;
- (unsigned int)resourceID;
- (struct __IOAccelResource { }*)resourceRef;
- (unsigned int)resourceSize;
- (int)responsibleProcess;
- (void)setAllocationInfoShared:(id)arg1 andCached:(id)arg2;
- (void)setLabel:(id)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)setResponsibleProcess:(int)arg1;
- (id)sharedAllocationInfo;
- (unsigned long long)storageMode;
- (void*)virtualAddress;
- (void)waitUntilComplete;

@end