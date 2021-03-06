/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARWorldTrackingFeaturePointData : NSObject {
    ARPointCloud * _featurePoints;
    double  _timestamp;
}

@property (nonatomic, retain) ARPointCloud *featurePoints;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)featurePoints;
- (void)setFeaturePoints:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
