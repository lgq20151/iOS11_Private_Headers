/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUTransformNode : NURenderNode

+ (id)transformNodeWithInput:(id)arg1 transform:(id)arg2 error:(out id*)arg3;

- (id)_evaluateGeometrySpaceMap:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_transformWithError:(out id*)arg1;
- (id)descriptionSubClassHook;
- (bool)isGeometryNode;
- (bool)requiresVideoComposition;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;

@end
