/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKeyboardBasedTextSelectionGestureCluster : _UIKeyboardTextSelectionGestureCluster

- (void)beginOneFingerSelectWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (bool)enclosingScrollViewIsScrolling;
- (void)endOneFingerSelectWithExecutionContext:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)oneFingerForcePan:(id)arg1;
- (void)oneFingerForcePress:(id)arg1;
- (id)owner;
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint { double x1; double x2; })arg1 viaDrag:(bool)arg2;
- (void)updateOneFingerSelectWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;

@end