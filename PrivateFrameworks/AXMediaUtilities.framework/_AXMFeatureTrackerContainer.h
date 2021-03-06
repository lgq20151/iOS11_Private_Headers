/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface _AXMFeatureTrackerContainer : NSObject {
    AXMTimer * _activeTimer;
    AXMFeatureTracker * _tracker;
}

@property (nonatomic, retain) AXMTimer *activeTimer;
@property (nonatomic, retain) AXMFeatureTracker *tracker;

- (void).cxx_destruct;
- (id)activeTimer;
- (id)initWithFeature:(id)arg1 queue:(id)arg2;
- (void)setActiveTimer:(id)arg1;
- (void)setTracker:(id)arg1;
- (id)tracker;

@end
