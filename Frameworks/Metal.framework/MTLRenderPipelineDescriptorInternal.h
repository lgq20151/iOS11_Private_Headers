/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPipelineDescriptorInternal : MTLRenderPipelineDescriptor {
    struct MTLRenderPipelineDescriptorPrivate { 
        MTLRenderPipelineColorAttachmentDescriptorArrayInternal *attachments; 
        unsigned long long rtBlendDescHash[8]; 
        unsigned long long depthAttachmentPixelFormat; 
        unsigned long long stencilAttachmentPixelFormat; 
        unsigned long long tessellationPartitionMode; 
        unsigned long long maxTessellationFactor; 
        bool tessellationFactorScaleEnabled; 
        unsigned long long tessellationFactorFormat; 
        unsigned long long tessellationControlPointIndexType; 
        unsigned long long tessellationFactorStepFunction; 
        unsigned long long tessellationOutputWindingOrder; 
        unsigned long long postVertexDumpBufferIndex; 
        union { 
            unsigned long long sampleCount; 
            unsigned long long rasterSampleCount; 
        } ; 
        unsigned long long sampleMask; 
        union { 
            unsigned int sampleCoverageHash; 
            float sampleCoverage; 
        } ; 
        union { 
            unsigned int miscHash; 
            struct { 
                unsigned int alphaToCoverageEnabled : 1; 
                unsigned int alphaToOneEnabled : 1; 
                unsigned int rasterizationEnabled : 1; 
                unsigned int inputPrimitiveTopology : 2; 
                unsigned int vertexEnabled : 1; 
                unsigned int depthStencilWriteDisabled : 1; 
                unsigned int openGLMode : 1; 
                unsigned int sampleCoverageInvert : 1; 
                unsigned int private4 : 1; 
                unsigned int private5 : 1; 
                unsigned int pad : 3; 
                unsigned int pointSmoothEnabled : 1; 
                unsigned int clipDistanceEnableMask : 8; 
                unsigned int alphaTestFunc : 3; 
                unsigned int alphaTestEnabled : 1; 
                unsigned int logicOp : 4; 
                unsigned int logicOpEnabled : 1; 
            } ; 
        } ; 
        unsigned int vertexDepthCompareClampMask; 
        unsigned int fragmentDepthCompareClampMask; 
        NSString *label; 
        <MTLFunction> *vertexFunction; 
        <MTLFunction> *fragmentFunction; 
        MTLVertexDescriptorInternal *vertexDescriptor; 
        MTLPipelineBufferDescriptorArrayInternal *vertexBuffers; 
        MTLPipelineBufferDescriptorArrayInternal *fragmentBuffers; 
        <MTLPipelineLibrary> *pipelineLibrary; 
    }  _private;
}

@property (nonatomic) unsigned long long postVertexDumpBufferIndex;

- (const struct MTLRenderPipelineDescriptorPrivate { id x1; /* Warning: Unrecognized filer type: '8' using 'void*' */ void*x2; unsigned long long x3; void*x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; bool x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; union { unsigned long long x_15_1_1; unsigned long long x_15_1_2; } x15; unsigned long long x16; union { unsigned int x_17_1_1; float x_17_1_2; } x17; union { unsigned int x_18_1_1; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 2; unsigned int x_2_2_5 : 1; unsigned int x_2_2_6 : 1; unsigned int x_2_2_7 : 1; unsigned int x_2_2_8 : 1; unsigned int x_2_2_9 : 1; unsigned int x_2_2_10 : 1; unsigned int x_2_2_11 : 3; unsigned int x_2_2_12 : 1; unsigned int x_2_2_13 : 8; unsigned int x_2_2_14 : 3; unsigned int x_2_2_15 : 1; unsigned int x_2_2_16 : 4; unsigned int x_2_2_17 : 1; } x_18_1_2; } x18; unsigned int x19; unsigned int x20; id x21; }*)_descriptorPrivate;
- (unsigned long long)alphaTestFunction;
- (void)attachVertexDescriptor:(id)arg1;
- (unsigned char)clipDistanceEnableMask;
- (id)colorAttachments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)depthAttachmentPixelFormat;
- (id)description;
- (id)fastBlendDescriptorAtIndex:(unsigned long long)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)fragmentBuffers;
- (unsigned int)fragmentDepthCompareClampMask;
- (id)fragmentFunction;
- (unsigned long long)hash;
- (id)init;
- (bool)isAlphaTestEnabled;
- (bool)isAlphaToCoverageEnabled;
- (bool)isAlphaToOneEnabled;
- (bool)isDepthStencilWriteDisabled;
- (bool)isEqual:(id)arg1;
- (bool)isLogicOperationEnabled;
- (bool)isPointSmoothEnabled;
- (bool)isRasterizationEnabled;
- (bool)isTessellationFactorScaleEnabled;
- (bool)isVertexEnabled;
- (id)label;
- (unsigned long long)logicOperation;
- (unsigned long long)maxTessellationFactor;
- (id)newSerializedVertexDataWithFlags:(unsigned long long)arg1 error:(id*)arg2;
- (bool)openGLModeEnabled;
- (id)pipelineLibrary;
- (unsigned long long)postVertexDumpBufferIndex;
- (unsigned long long)rasterSampleCount;
- (void)reset;
- (unsigned long long)sampleCount;
- (float)sampleCoverage;
- (bool)sampleCoverageInvert;
- (unsigned long long)sampleMask;
- (id)serializeFragmentData;
- (void)setAlphaTestEnabled:(bool)arg1;
- (void)setAlphaTestFunction:(unsigned long long)arg1;
- (void)setAlphaToCoverageEnabled:(bool)arg1;
- (void)setAlphaToOneEnabled:(bool)arg1;
- (void)setClipDistanceEnableMask:(unsigned char)arg1;
- (void)setDepthAttachmentPixelFormat:(unsigned long long)arg1;
- (void)setDepthStencilWriteDisabled:(bool)arg1;
- (void)setFragmentDepthCompareClampMask:(unsigned int)arg1;
- (void)setFragmentFunction:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLogicOperation:(unsigned long long)arg1;
- (void)setLogicOperationEnabled:(bool)arg1;
- (void)setMaxTessellationFactor:(unsigned long long)arg1;
- (void)setOpenGLModeEnabled:(bool)arg1;
- (void)setPipelineLibrary:(id)arg1;
- (void)setPointSmoothEnabled:(bool)arg1;
- (void)setPostVertexDumpBufferIndex:(unsigned long long)arg1;
- (void)setRasterSampleCount:(unsigned long long)arg1;
- (void)setRasterizationEnabled:(bool)arg1;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setSampleCoverage:(float)arg1;
- (void)setSampleCoverageInvert:(bool)arg1;
- (void)setSampleMask:(unsigned long long)arg1;
- (void)setStencilAttachmentPixelFormat:(unsigned long long)arg1;
- (void)setTessellationControlPointIndexType:(unsigned long long)arg1;
- (void)setTessellationFactorFormat:(unsigned long long)arg1;
- (void)setTessellationFactorScaleEnabled:(bool)arg1;
- (void)setTessellationFactorStepFunction:(unsigned long long)arg1;
- (void)setTessellationOutputWindingOrder:(unsigned long long)arg1;
- (void)setTessellationPartitionMode:(unsigned long long)arg1;
- (void)setVertexDepthCompareClampMask:(unsigned int)arg1;
- (void)setVertexDescriptor:(id)arg1;
- (void)setVertexEnabled:(bool)arg1;
- (void)setVertexFunction:(id)arg1;
- (unsigned long long)stencilAttachmentPixelFormat;
- (unsigned long long)tessellationControlPointIndexType;
- (unsigned long long)tessellationFactorFormat;
- (unsigned long long)tessellationFactorStepFunction;
- (unsigned long long)tessellationOutputWindingOrder;
- (unsigned long long)tessellationPartitionMode;
- (void)validateWithDevice:(id)arg1;
- (id)vertexBuffers;
- (unsigned int)vertexDepthCompareClampMask;
- (id)vertexDescriptor;
- (id)vertexFunction;

@end
