/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNIdentifyJunkRequest : VNImageBasedRequest

- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
