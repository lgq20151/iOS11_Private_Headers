/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {
    struct MTLHeapDescriptorPrivate { unsigned long long x1; unsigned long long x2; unsigned long long x3; } * _private;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)cpuCacheMode;
- (void)dealloc;
- (const struct MTLHeapDescriptorPrivate { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)descriptorPrivate;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setCpuCacheMode:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setStorageMode:(unsigned long long)arg1;
- (unsigned long long)size;
- (unsigned long long)storageMode;
- (bool)validateWithDevice:(id)arg1;

@end
