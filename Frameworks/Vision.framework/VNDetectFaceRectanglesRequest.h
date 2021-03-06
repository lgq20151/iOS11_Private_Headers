/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetectFaceRectanglesRequest : VNImageBasedRequest

+ (void)recordDefaultOptionsInDictionary:(id)arg1;

- (long long)dependencyProcessingOrdinality;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
