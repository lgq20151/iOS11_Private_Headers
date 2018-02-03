/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDynamicAnimationState : NSObject {
    NSMutableArray * _activeAnimations;
    CADisplayLink * _displayLink;
    double  _lastUpdateTime;
    UIScreen * _screen;
    bool  _shouldSchedYield;
    NSTimer * _timer;
}

@end
