/* made by EzioChiu.
 */

@protocol MPSImageAllocator <NSObject, NSSecureCoding>

@required

- (MPSImage *)imageForCommandBuffer:(id <MTLCommandBuffer>)arg1 imageDescriptor:(MPSImageDescriptor *)arg2 kernel:(MPSKernel *)arg3;

@end
