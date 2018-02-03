/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISnapshotWindow : UIWindow

+ (bool)_isSystemWindow;

- (bool)_alwaysGetsContexts;
- (bool)_canActAsKeyWindowForScreen:(id)arg1;
- (bool)_canBecomeKeyWindow;
- (bool)_isConstrainedByScreenJail;
- (bool)_isSettingFirstResponder;
- (void)_setFirstResponder:(id)arg1;
- (bool)_shouldZoom;
- (void)_updateTransformLayerForClassicPresentation;

@end
