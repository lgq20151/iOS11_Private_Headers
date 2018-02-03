/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelIndirectArgumentEncoder : _MTLIndirectArgumentEncoder

@property (readonly) unsigned long long encodedLength;

- (void*)constantDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)encodedLength;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setIndirectArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
