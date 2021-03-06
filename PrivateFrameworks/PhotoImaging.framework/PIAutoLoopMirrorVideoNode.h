/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIAutoLoopMirrorVideoNode : PIAutoLoopVideoNode

- (id)_evaluateAudioMix:(out id*)arg1;
- (id)_evaluateVideo:(out id*)arg1;
- (id)_evaluateVideoComposition:(out id*)arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (bool)requiresAudioMix;
- (bool)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary { Class x1; }*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;

@end
