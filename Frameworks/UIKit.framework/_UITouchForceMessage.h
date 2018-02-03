/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITouchForceMessage : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _centroid;
    bool  _isReset;
    double  _maximumPossibleForce;
    _UITouchForceObservationMessageReader * _observeReader;
    bool  _shouldFilterDueToSystemGestures;
    double  _timestamp;
    double  _unclampedTouchForce;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } centroid;
@property (nonatomic) double maximumPossibleForce;
@property (nonatomic) bool shouldFilterDueToSystemGestures;
@property (nonatomic) double timestamp;
@property (nonatomic) double unclampedTouchForce;

+ (id)observe:(id /* block */)arg1;
+ (id)reset;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })centroid;
- (void)ifObservation:(id /* block */)arg1 ifReset:(id /* block */)arg2;
- (void)ifObservationUnclamped:(id /* block */)arg1 ifReset:(id /* block */)arg2;
- (double)maximumPossibleForce;
- (void)setCentroid:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMaximumPossibleForce:(double)arg1;
- (void)setShouldFilterDueToSystemGestures:(bool)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setUnclampedTouchForce:(double)arg1;
- (bool)shouldFilterDueToSystemGestures;
- (double)timestamp;
- (double)unclampedTouchForce;

@end
