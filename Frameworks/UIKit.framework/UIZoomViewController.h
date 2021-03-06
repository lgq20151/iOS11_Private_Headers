/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIZoomViewController : UIViewController {
    UIWindow * _window;
    UIButton * _zoomButton;
}

- (void).cxx_destruct;
- (void)_applicationDidFinishLaunching:(id)arg1;
- (void)_changeZoom:(id)arg1;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1 forWindow:(id)arg2;
- (void)_setupPositioningAndRotationForInterfaceOrientation:(long long)arg1 offscreen:(bool)arg2;
- (void)_suspendAnimationStarted:(id)arg1;
- (void)_updateZoomButtonTitle;
- (id)_window;
- (void)_zoomOrientationAnimationFinished:(id)arg1 finished:(bool)arg2 context:(void*)arg3;
- (void)_zoomOrientationChange:(id)arg1;
- (id)_zoomText:(bool)arg1;
- (void)dealloc;
- (id)init;
- (bool)isClassicControlWindow:(id)arg1;
- (void)loadView;
- (id)screen;

@end
