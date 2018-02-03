/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBilateralSolverGPU : NSObject {
    <MTLBuffer> * _A_buf;
    <MTLBuffer> * _Dn_buf;
    <MTLBuffer> * _b_buf;
    <MTLCommandBuffer> * _commandBuffer;
    <MTLComputePipelineState> * _computePipelines;
    <MTLBuffer> * _d_buf;
    <MTLBuffer> * _gridBlurBuffer;
    <MTLBuffer> * _gridCoordIndicesBuffer;
    <MTLBuffer> * _gridCoordTableBuffer;
    <MTLBuffer> * _gridHashBuffer;
    <MTLTexture> * _gridHashMatrix;
    <MTLBuffer> * _gridInterpIndicesBuffer;
    <MTLBuffer> * _gridInterpPadBuffer;
    <MTLBuffer> * _gridInterpTableBuffer;
    int  _height;
    int  _idxDnBufIn;
    int  _idxSwapBufIn;
    unsigned long long  _maxVertices;
    <MTLDevice> * _metalDevice;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*reference; 
    }  _offsets;
    struct { 
        float lambda; 
        unsigned int N; 
        unsigned short dims; 
        float sigma_s; 
        float sigma_r_luma; 
    }  _params;
    <MTLBuffer> * _q_buf;
    <MTLBuffer> * _r_buf;
    <MTLBuffer> * _s_buf;
    struct { 
        struct { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } dispatchThreadgroups; 
        struct { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } threadsPerThreadgroup; 
    }  _threadGroupInfo;
    bool  _useTrilinearInterpolation;
    int  _width;
    <MTLBuffer> * _x_buf;
}

@property (nonatomic) bool useTrilinearInterpolation;

- (void).cxx_destruct;
- (int)_doBistochastizeWithCommandBuffer:(id)arg1 t_tex:(id)arg2 c_tex:(id)arg3 lambda:(float)arg4 nIterations:(int)arg5;
- (int)_doPCGWithCommandBuffer:(id)arg1 nIterations:(int)arg2;
- (int)_doSliceTrilinearWithCommandBuffer:(id)arg1 ref_tex:(id)arg2 o_tex:(id)arg3;
- (int)_doSliceWithCommandBuffer:(id)arg1 o_tex:(id)arg2;
- (void)_prepareResources:(id)arg1;
- (void)_setupBuffer;
- (void)_setupMetal;
- (void)_setupPipelineCache;
- (void)_setupPipelines;
- (int)doSolveWithBilateralGridhash:(id)arg1 reference:(id)arg2 disparity:(id)arg3 confidence:(id)arg4 output:(id)arg5 lambda:(float)arg6 maxIterations:(int)arg7 offsets:(struct { }*)arg8;
- (id)initWithWidth:(int)arg1 height:(int)arg2 maxVertices:(unsigned long long)arg3 commandBuffer:(id)arg4;
- (void)setUseTrilinearInterpolation:(bool)arg1;
- (bool)useTrilinearInterpolation;

@end
