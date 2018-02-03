/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer {
    int  _directionalFailureCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastLocation;
    double  _lastTime;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startLocation;
    UIDelayedAction * _swipeFailureDelay;
}

+ (bool)_shouldDefaultToTouches;

- (void).cxx_destruct;
- (void)_processNewLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_resetGestureRecognizer;
- (void)clearTimer;
- (void)dealloc;
- (void)enoughTimeElapsed:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
