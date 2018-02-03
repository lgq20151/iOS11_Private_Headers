/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScrollViewGestureSimulator : NSObject {
    CADisplayLink * _displayLink;
    bool  _hasSimulatedGestures;
    double  _lastWakeUpTime;
    struct __CFRunLoopSource { } * _mainThreadRunLoopSource;
    NSMutableArray * _simulatedGestures;
    NSTimer * _timer;
    NSThread * _workThread;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_displayLinkDidFire:(id)arg1;
- (void)_setHasSimulatedGestures:(id)arg1;
- (void)_signalMainThreadIfNecessary;
- (void)_threadMain;
- (void)_update;
- (void)dealloc;
- (id)init;
- (void)simulateGestureWithDuration:(double)arg1 begin:(id /* block */)arg2 update:(id /* block */)arg3 end:(id /* block */)arg4;

@end
