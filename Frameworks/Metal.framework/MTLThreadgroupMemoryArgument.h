/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLThreadgroupMemoryArgument : MTLArgumentInternal {
    unsigned short  _alignment;
    unsigned int  _dataSize;
    unsigned long long  _dataType;
}

- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(bool)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 dataSize:(unsigned long long)arg8 alignment:(unsigned long long)arg9;
- (void)setStructType:(id)arg1;
- (unsigned long long)threadgroupMemoryAlignment;
- (unsigned long long)threadgroupMemoryDataSize;
- (unsigned long long)threadgroupMemoryDataType;
- (id)threadgroupMemoryStructType;

@end
