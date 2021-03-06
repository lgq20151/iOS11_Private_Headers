/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUScaleNode : NUAbstractScaleNode {
    long long  _sampleMode;
    struct { 
        long long numerator; 
        long long denominator; 
    }  _scale;
}

@property (readonly) struct { long long x1; long long x2; } scale;

- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_settingsWithScale:(struct { long long x1; long long x2; })arg1 sampleMode:(long long)arg2;
- (id)initWithPipelineState:(id)arg1 source:(id)arg2;
- (id)initWithScale:(struct { long long x1; long long x2; })arg1 sampleMode:(long long)arg2 source:(id)arg3;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary { Class x1; }*)arg2;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary { Class x1; }*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (struct { long long x1; long long x2; })scale;

@end
