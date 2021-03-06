/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {
    struct MTLTileRenderPipelineDescriptorPrivate { 
        MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal *attachments; 
        union { 
            unsigned long long sampleCount; 
            unsigned long long rasterSampleCount; 
        } ; 
        NSString *label; 
        <MTLFunction> *tileFunction; 
        bool threadgroupSizeMatchesTileSize; 
        MTLPipelineBufferDescriptorArrayInternal *tileBuffers; 
    }  _private;
}

- (const struct MTLTileRenderPipelineDescriptorPrivate { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned long long x4; unsigned long long x5; void*x6; id x7; bool x8; id x9; }*)_descriptorPrivate;
- (id)colorAttachments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)label;
- (unsigned long long)rasterSampleCount;
- (void)reset;
- (unsigned long long)sampleCount;
- (void)setLabel:(id)arg1;
- (void)setRasterSampleCount:(unsigned long long)arg1;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setThreadgroupSizeMatchesTileSize:(bool)arg1;
- (void)setTileFunction:(id)arg1;
- (bool)threadgroupSizeMatchesTileSize;
- (id)tileBuffers;
- (id)tileFunction;
- (void)validateWithDevice:(id)arg1;

@end
