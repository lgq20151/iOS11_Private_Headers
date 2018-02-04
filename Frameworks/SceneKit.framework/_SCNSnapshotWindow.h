/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface _SCNSnapshotWindow : UIWindow

- (bool)_canBecomeKeyWindow;
- (id)_hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (bool)_isSettingFirstResponder;
- (void)_setFirstResponder:(id)arg1;
- (struct CGPoint { double x1; double x2; })_warpPoint:(struct CGPoint { double x1; double x2; })arg1 outOfBounds:(bool*)arg2;
- (void)dealloc;
- (id)scnView;
- (struct CGPoint { double x1; double x2; })warpPoint:(struct CGPoint { double x1; double x2; })arg1;

@end