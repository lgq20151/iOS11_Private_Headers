/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPMTopicDonation : NSObject {
    PETDistributionEventTracker * _tracker;
}

@property (nonatomic, readonly) PETDistributionEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(double)arg1 source:(struct PPMTopicDonationSource_ { unsigned long long x1; })arg2;
- (id)tracker;

@end
