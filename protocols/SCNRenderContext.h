/* made by EzioChiu.
 */

@protocol SCNRenderContext <NSObject>

@required

- (void)beginDeferredLighting;
- (void)beginFrame:(id)arg1;
- (bool)beginRenderPass:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFString {} *x2; int x3; int x4; bool x5; struct __C3DFXTechnique {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; struct __CFString {} *x9; struct __CFString {} *x10; bool x11; struct __C3DFXProgram {} *x12; struct __C3DMaterial {} *x13; struct __C3DBlendStates {} *x14; struct __C3DRasterizerStates {} *x15; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_16_1_1; } x16; unsigned char x17; unsigned int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; }*)arg1 parameters:(struct { unsigned char x1; unsigned char x2; bool x3; })arg2;
- (bool)collectsCompilationErrors;
- (NSDictionary *)compilationErrors;
- (double)contentScaleFactor;
- (struct __C3DMeshElement { }*)createVolatileMeshElementOfType:(BOOL)arg1 primitiveCount:(long long)arg2 bytesPerIndex:(long long)arg3;
- (long long)currentFrameIndex;
- (unsigned long long)debugOptions;
- (bool)disableLinearRendering;
- (void)drawFullScreenQuadForPass:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFString {} *x2; int x3; int x4; bool x5; struct __C3DFXTechnique {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; struct __CFString {} *x9; struct __CFString {} *x10; bool x11; struct __C3DFXProgram {} *x12; struct __C3DMaterial {} *x13; struct __C3DBlendStates {} *x14; struct __C3DRasterizerStates {} *x15; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_16_1_1; } x16; unsigned char x17; unsigned int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; }*)arg1;
- (void)drawRenderElement:(struct __C3DRendererElement { }*)arg1 withPass:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFString {} *x2; int x3; int x4; bool x5; struct __C3DFXTechnique {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; struct __CFString {} *x9; struct __CFString {} *x10; bool x11; struct __C3DFXProgram {} *x12; struct __C3DMaterial {} *x13; struct __C3DBlendStates {} *x14; struct __C3DRasterizerStates {} *x15; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_16_1_1; } x16; unsigned char x17; unsigned int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; }*)arg2;
- (void)drawWireframeOverlayForElements:(struct { unsigned short x1; unsigned short x2; }*)arg1 range:(struct { long long x1; long long x2; })arg2 store:(struct __C3DRendererElementStore { }*)arg3;
- (bool)enablesDeferredShading;
- (void)endDeferredLighting;
- (void)endFrameWaitingUntilCompleted:(bool)arg1;
- (void)endRenderPass;
- (unsigned int)features;
- (bool)isOpaque;
- (bool)mapVolatileMesh:(struct __C3DMesh { }*)arg1 verticesCount:(long long)arg2;
- (id)newRenderTargetWithDescription:(void *)arg1 size:(void *)arg2 arrayLength:(void *)arg3; // needs 3 arg types, found 2: struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned char x9[4]; }*, unsigned long long
- (long long)pendingGPUFrameCount;
- (void)popDebugGroup;
- (void)processRendererElements:(struct { unsigned short x1; unsigned short x2; }*)arg1 count:(unsigned int)arg2 engineIterationContext:(struct { struct __C3DEnginePipeline {} *x1; struct __C3DEngineContext {} *x2; struct __C3DFXPassInstance {} *x3; int *x4; struct __C3DNode {} *x5; bool x6; bool x7; }*)arg3;
- (int)profile;
- (void)pushDebugGroup:(NSString *)arg1;
- (void)renderBackground:(struct __C3DEffectSlot { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; void *x3; union { struct __C3DImage {} *x_4_1_1; void *x_4_1_2; struct __C3DImageProxy {} *x_4_1_3; struct __C3DTexture {} *x_4_1_4; } x4; unsigned int x5 : 8; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 4; BOOL x10; struct __C3DTextureSampler {} *x11; union { unsigned char x_12_1_1; /* Warning: Unrecognized filer type: '3' using 'void*' */ void*x_12_1_2; long doublex_12_1_3; void*x_12_1_4; void*x_12_1_5; void*x_12_1_6; const int x_12_1_7; void*x_12_1_8; void*x_12_1_9; void*x_12_1_10; void*x_12_1_11; } *x12; float x13; int x14; void *x15; }*)arg1 engineContext:(struct __C3DEngineContext { }*)arg2;
- (void)renderLight:(struct __C3DNode { }*)arg1 lightType:(int)arg2 lightData:(struct __C3DLightRuntimeData { unsigned int x1; float x2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_1_1[4]; void *x_3_1_2; struct __C3DTextureSampler {} *x_3_1_3; void *x_3_1_4; struct __C3DTextureSampler {} *x_3_1_5; } x3[4]; }*)arg3;
- (void)renderMesh:(struct __C3DMesh { }*)arg1 meshElement:(struct __C3DMeshElement { }*)arg2 withProgram:(struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; int x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; }*)arg3 engineContext:(struct __C3DEngineContext { }*)arg4 transform:(union C3DMatrix4x4 { float x1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x2[4]; void*x3; })arg5 color:(const struct C3DColor4 { union { float x_1_1_1[4]; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; } x1; }*)arg6 rasterizerStates:(struct __C3DRasterizerStates { }*)arg7 blendState:(struct __C3DBlendStates { }*)arg8 texture:(struct __C3DImage { }*)arg9 depthBias:(bool)arg10;
- (SCNRenderTargetRegistry *)renderTargetRegistry;
- (void)renderVideoBackground:(struct __C3DImageProxy { }*)arg1 engineContext:(struct __C3DEngineContext { }*)arg2;
- (<SCNResourceManager> *)resourceManager;
- (long long)sampleCount;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })screenTransform;
- (void)setCollectsCompilationErrors:(bool)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setDebugOptions:(unsigned long long)arg1;
- (void)setDisableLinearRendering:(bool)arg1;
- (void)setEnablesDeferredShading:(bool)arg1;
- (void)setIsOpaque:(bool)arg1;
- (void)setRendererPremultipliedBackgroundColor:(struct C3DColor4 { union { float x_1_1_1[4]; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; } x1; })arg1;
- (void)setSampleCount:(long long)arg1;
- (void)setScreenTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setShowsAuthoringEnvironment:(bool)arg1;
- (void)setSuperSamplingFactor:(double)arg1;
- (void)setWantsWideGamut:(bool)arg1;
- (bool)showsAuthoringEnvironment;
- (void)startProcessingRendererElementsWithEngineIterationContext:(struct { struct __C3DEnginePipeline {} *x1; struct __C3DEngineContext {} *x2; struct __C3DFXPassInstance {} *x3; int *x4; struct __C3DNode {} *x5; bool x6; bool x7; }*)arg1;
- (struct __C3DEngineStats { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; double x55; double x56; double x57; double x58[60]; unsigned int x59; double x60; double x61; }*)stats;
- (void)stopProcessingRendererElements;
- (double)superSamplingFactor;
- (bool)supportsFeatureSet:(unsigned long long)arg1;
- (id)textureForEffectSlot:(struct __C3DEffectSlot { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; void *x3; union { struct __C3DImage {} *x_4_1_1; void *x_4_1_2; struct __C3DImageProxy {} *x_4_1_3; struct __C3DTexture {} *x_4_1_4; } x4; unsigned int x5 : 8; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 4; BOOL x10; struct __C3DTextureSampler {} *x11; union { unsigned char x_12_1_1; /* Warning: Unrecognized filer type: '3' using 'void*' */ void*x_12_1_2; long doublex_12_1_3; void*x_12_1_4; void*x_12_1_5; void*x_12_1_6; const int x_12_1_7; void*x_12_1_8; void*x_12_1_9; void*x_12_1_10; void*x_12_1_11; } *x12; float x13; int x14; void *x15; }*)arg1;
- (void)unmapVolatileMesh:(struct __C3DMesh { }*)arg1 modifiedVerticesCount:(long long)arg2;
- (void)unmapVolatileMeshElement:(struct __C3DMeshElement { }*)arg1;
- (bool)wantsWideGamut;

@end
