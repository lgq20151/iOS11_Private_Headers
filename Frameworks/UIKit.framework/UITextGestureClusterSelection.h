/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextGestureClusterSelection : UITextGestureCluster {
    double  _lastTapTimestamp;
}

- (bool)cluster_gestureRecognizerShouldBegin:(id)arg1;
- (void)confirmMarkedText:(id)arg1;
- (id)initWithView:(id)arg1 andMode:(int)arg2;
- (void)oneFingerDoubleTap:(id)arg1;
- (void)oneFingerTap:(id)arg1;
- (void)oneFingerTapSelectsAll:(id)arg1;
- (void)setHybridSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldHandleOneFingerTapInUneditable:(id)arg1;
- (void)tapAndAHalf:(id)arg1;
- (void)twoFingerRangedSelectGesture:(id)arg1;

@end
