/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMTLSkin : NSObject {
    <MTLComputePipelineState> * _computePS;
    MTLStageInputOutputDescriptor * _computeStageDesc;
    bool  _needNormal;
    bool  _needTangent;
    <MTLBuffer> * _skinIndicesBuffer;
    <MTLBuffer> * _skinWeightsBuffer;
    unsigned int  _vertexCount;
}

- (void)dealloc;
- (id)initWithSkinner:(struct __C3DSkinner { }*)arg1 baseMesh:(struct __C3DMesh { }*)arg2 resourceManager:(id)arg3;
- (void)skinMesh:(id)arg1 with:(id)arg2 skinner:(struct __C3DSkinner { }*)arg3 renderContext:(id)arg4;

@end
