/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputSetHostView : UIView

+ (bool)_notifyOnExplicitLayout;
+ (bool)_retroactivelyRequiresConstraintBasedLayout;
+ (bool)_shouldHitTestInputViewFirst;

- (int)_clipCornersOfView:(id)arg1;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)layoutIfNeeded;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
