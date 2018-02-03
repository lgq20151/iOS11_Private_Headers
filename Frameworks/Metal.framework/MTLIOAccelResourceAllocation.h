/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelResourceAllocation : MTLResourceAllocationInfo {
    unsigned long long  _dirtySize;
    NSString * _memoryPool;
    bool  _purgeable;
    unsigned long long  _residentSize;
    unsigned long long  _uniqueIdentifier;
    unsigned long long  _virtualSize;
}

- (void)dealloc;
- (unsigned long long)dirtySize;
- (id)initWithPool:(id)arg1 virtualSize:(unsigned long long)arg2 residentSize:(unsigned long long)arg3 dirtySize:(unsigned long long)arg4 purgeable:(bool)arg5 uniqueID:(unsigned long long)arg6;
- (id)memoryPool;
- (bool)purgeable;
- (unsigned long long)residentSize;
- (unsigned long long)uniqueIdentifier;
- (unsigned long long)virtualSize;

@end
