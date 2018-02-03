/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLComputePipelineDescriptor : NSObject <NSCopying>

@property (readonly) MTLPipelineBufferDescriptorArray *buffers;
@property (nonatomic, retain) <MTLFunction> *computeFunction;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) MTLStageInputOutputDescriptor *stageInputDescriptor;
@property (nonatomic) bool threadGroupSizeIsMultipleOfThreadExecutionWidth;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)reset;

@end
