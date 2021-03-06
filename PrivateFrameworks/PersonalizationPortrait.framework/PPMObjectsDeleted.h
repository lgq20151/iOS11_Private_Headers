/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPMObjectsDeleted : NSObject {
    PETDistributionEventTracker * _tracker;
}

@property (nonatomic, readonly) PETDistributionEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(double)arg1 source:(struct PPMNamedEntityDonationSource_ { unsigned long long x1; })arg2 component:(struct PPMPortraitComponent_ { unsigned long long x1; })arg3 error:(struct PPMTypeSafeBool_ { unsigned long long x1; })arg4;
- (id)tracker;

@end
