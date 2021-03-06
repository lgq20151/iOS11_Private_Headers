/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNGetClustersRequest : VNRequest {
    NSArray * _clusterIDs;
}

@property (nonatomic, copy) NSArray *clusterIDs;

- (void).cxx_destruct;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)clusterIDs;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;
- (id)observationsCacheKey;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setClusterIDs:(id)arg1;

@end
