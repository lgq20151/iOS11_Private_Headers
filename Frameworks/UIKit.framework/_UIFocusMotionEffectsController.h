/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusMotionEffectsController : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentOffset;
    _UIDynamicValueConvergenceAnimation * _rollbackAnimation;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } currentOffset;

- (void).cxx_destruct;
- (void)cancelRollbackAnimation;
- (struct CGPoint { double x1; double x2; })currentOffset;
- (void)reset;
- (void)startRollbackAnimation;
- (void)updateCurrentOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
