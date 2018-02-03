/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelCommandEncoder : _MTLCommandEncoder

- (void)endEncoding;
- (unsigned long long)globalTraceObjectID;
- (id)initWithCommandBuffer:(id)arg1;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)setLabel:(id)arg1;

@end
