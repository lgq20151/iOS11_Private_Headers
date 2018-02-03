/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITouchForceObservationMessageReader : NSObject <_UITouchForceObservationMessageReading> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _centroid;
    bool  _shouldFilterDueToSystemGestures;
    double  _timestamp;
    double  _touchForce;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } centroid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldFilterDueToSystemGestures;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic) double touchForce;

- (struct CGPoint { double x1; double x2; })centroid;
- (void)setCentroid:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShouldFilterDueToSystemGestures:(bool)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTouchForce:(double)arg1;
- (bool)shouldFilterDueToSystemGestures;
- (double)timestamp;
- (double)touchForce;

@end
