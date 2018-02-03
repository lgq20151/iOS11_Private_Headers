/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScrollViewMockPanGestureRecognizer : NSObject {
    UIScrollViewPanGestureRecognizer * _gestureRecognizer;
    long long  _state;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

@property (nonatomic, retain) UIScrollViewPanGestureRecognizer *gestureRecognizer;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)gestureRecognizer;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTranslation:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (void)simulateTranslation:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (long long)state;
- (struct CGPoint { double x1; double x2; })translationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })velocityInView:(id)arg1;

@end
