/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLIndirectArgumentBufferLayout : NSObject

@property (readonly) unsigned long long alignment;
@property (readonly) bool bufferLayoutMatchesFrontEndLayout;
@property (readonly) unsigned long long encodedLength;

- (unsigned long long)alignment;
- (bool)bufferLayoutMatchesFrontEndLayout;
- (unsigned long long)constantOffsetAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned long long)encodedLength;
- (id)init;
- (unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (void*)virtualAddressForBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;

@end
