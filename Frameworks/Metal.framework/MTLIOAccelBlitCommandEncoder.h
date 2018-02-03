/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelBlitCommandEncoder : MTLIOAccelCommandEncoder

- (unsigned long long)getType;
- (void)synchronizeResource:(id)arg1;
- (void)synchronizeTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)updateFence:(id)arg1;
- (void)waitForFence:(id)arg1;

@end
