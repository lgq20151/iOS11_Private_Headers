/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNRefinedSuggestionsForClustersRequest : VNRequest

+ (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;
- (id)observationsCacheKey;
- (id)sequencedRequestPreviousObservationsKey;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
