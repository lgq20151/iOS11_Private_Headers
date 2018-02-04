/* made by EzioChiu.
 */

@protocol MTLCommandBufferSPI <MTLCommandBuffer>

@required

- (bool)isProfilingEnabled;
- (NSDictionary *)profilingResults;
- (void)setProfilingEnabled:(bool)arg1;
- (NSMutableDictionary *)userDictionary;

@optional

- (void)commitAndHold;
- (<MTLComputeCommandEncoder> *)computeCommandEncoderWithParallelExecution;
- (<MTLDebugCommandEncoder> *)debugCommandEncoder;
- (<MTLFragmentRenderCommandEncoder> *)fragmentRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (unsigned long long)getListIndex;
- (<MTLComputeCommandEncoder> *)sampledComputeCommandEncoderWithParallelExecutionWithProgramInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg1 capacity:(unsigned long long)arg2;
- (<MTLComputeCommandEncoder> *)sampledComputeCommandEncoderWithProgramInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg1 capacity:(unsigned long long)arg2;
- (<MTLFragmentRenderCommandEncoder> *)sampledFragmentRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1 programInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg2 capacity:(unsigned long long)arg3;
- (<MTLRenderCommandEncoder> *)sampledRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1 programInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg2 capacity:(unsigned long long)arg3;
- (void)setListIndex:(unsigned long long)arg1;

@end