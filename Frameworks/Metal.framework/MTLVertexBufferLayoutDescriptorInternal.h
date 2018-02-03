/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLVertexBufferLayoutDescriptorInternal : MTLVertexBufferLayoutDescriptor {
    unsigned long long  _instanceStepRate;
    unsigned long long  _stepFunction;
    unsigned long long  _stride;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setStepFunction:(unsigned long long)arg1;
- (void)setStepRate:(unsigned long long)arg1;
- (void)setStride:(unsigned long long)arg1;
- (unsigned long long)stepFunction;
- (unsigned long long)stepRate;
- (unsigned long long)stride;

@end
