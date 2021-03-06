/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNCreateFaceprintRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *inputFaceObservations;
@property (readonly) Class superclass;

- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedAlignment:(id)arg3 outputFacesThatNeedFaceprints:(id)arg4;
- (long long)dependencyProcessingOrdinality;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
