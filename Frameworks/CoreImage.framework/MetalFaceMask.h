/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface MetalFaceMask : NSObject {
    <MTLTexture> * _colorCubeTex;
    int  _dilateRadius;
    int  _erodeRadius;
    <MTLBuffer> * _inputScalingBuf;
    <MTLBuffer> * _labellingRowStartIdxBuf;
    <MTLBuffer> * _labellingSpanTableBuf;
    <MTLBuffer> * _minMaxAtomicBuf;
    <MTLDevice> * _mtlDevice;
    <MTLComputePipelineState> * _mtlKernel_AddSeedPoint;
    <MTLComputePipelineState> * _mtlKernel_CalcCubeInputScaling;
    <MTLComputePipelineState> * _mtlKernel_Clear;
    <MTLComputePipelineState> * _mtlKernel_ConnectSpans;
    <MTLComputePipelineState> * _mtlKernel_DilateCube1;
    <MTLComputePipelineState> * _mtlKernel_DilateCube2;
    <MTLComputePipelineState> * _mtlKernel_DrawEye;
    <MTLComputePipelineState> * _mtlKernel_DrawSpans;
    <MTLComputePipelineState> * _mtlKernel_ErodeCube1;
    <MTLComputePipelineState> * _mtlKernel_ErodeCube2;
    <MTLComputePipelineState> * _mtlKernel_GenerateMask;
    <MTLComputePipelineState> * _mtlKernel_GenerateToothMask;
    <MTLComputePipelineState> * _mtlKernel_InitMinMax;
    <MTLComputePipelineState> * _mtlKernel_InitSpanTable;
    <MTLComputePipelineState> * _mtlKernel_MinMax;
    <MTLComputePipelineState> * _mtlKernel_PopulateCube;
    <MTLComputePipelineState> * _mtlKernel_PropagateParents;
    <MTLComputePipelineState> * _mtlKernel_PropogateAssociations;
    <MTLComputePipelineState> * _mtlKernel_ResolveAssociations;
    <MTLLibrary> * _mtlLibrary;
    <MTLTexture> * _tempColorCubeTex;
}

@property (nonatomic) int dilateRadius;
@property (nonatomic) int erodeRadius;

- (int)clearOutputTexture:(id)arg1 CommandBuffer:(id)arg2;
- (int)dilateRadius;
- (int)drawEyeMaskUsingQuads:(struct MetalFaceMaskEyeQuads_t { unsigned int x1; unsigned int x2; unsigned char x3; struct MetalFaceMaskQuad_t { } x4[16]; }*)arg1 OutputMaskTexture:(id)arg2 OutputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 FaceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 CommandBuffer:(id)arg5;
- (int)erodeRadius;
- (int)findSkinMaskUsingInputTexture:(id)arg1 InputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 OutputMaskTexture:(id)arg3 OutputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 FaceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 SeedPoints:(struct CGPoint { double x1; double x2; }*)arg6 NumberOfSeedPoints:(unsigned long long)arg7 FillValue:(unsigned char)arg8 CommandBuffer:(id)arg9;
- (int)findToothMaskUsingInputTexture:(id)arg1 InputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 OutputMaskTexture:(id)arg3 OutputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 TeethBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 SeedPoints:(struct CGPoint { double x1; double x2; }*)arg6 NumberOfSeedPoints:(unsigned long long)arg7 FillValue:(unsigned char)arg8 CommandBuffer:(id)arg9;
- (id)initForDevice:(id)arg1;
- (void)setDilateRadius:(int)arg1;
- (void)setErodeRadius:(int)arg1;
- (int)trainSkinMaskUsingInputTexture:(id)arg1 InputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 QuadRegion:(struct CGPoint { double x1; double x2; })arg3 CommandBuffer:(id)arg4;

@end