/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceObservationDrivenClusteringRequest : VNRequest {
    NSArray * _inputFaceObservations;
}

@property (nonatomic, readonly, copy) NSArray *inputFaceObservations;

- (void).cxx_destruct;
- (void)applyConfigurationOfRequest:(id)arg1;
- (bool)getOptionalValidatedInputFaceObservations:(id*)arg1 error:(id*)arg2;
- (id)initWithFaceObservations:(id)arg1;
- (id)initWithFaceObservations:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)inputFaceObservations;
- (id)newDefaultRequestInstance;
- (id)observationsCacheKey;
- (id)sequencedRequestPreviousObservationsKey;
- (id)validatedInputFaceObservationsWithError:(id*)arg1;

@end
