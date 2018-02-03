/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScrollViewMockPinchGestureRecognizer : NSObject {
    UIScrollViewPinchGestureRecognizer * _gestureRecognizer;
    double  _scale;
    long long  _state;
    double  _velocity;
}

@property (nonatomic, retain) UIScrollViewPinchGestureRecognizer *gestureRecognizer;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)_activeTouchesForEvent:(id)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)gestureRecognizer;
- (double)scale;
- (void)setGestureRecognizer:(id)arg1;
- (void)setState:(long long)arg1;
- (void)simulateScale:(double)arg1 velocity:(double)arg2;
- (long long)state;
- (double)velocity;

@end
