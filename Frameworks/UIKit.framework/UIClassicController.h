/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIClassicController : NSObject {
    bool  _hidesStatusBarFiller;
    UIStatusBarViewController * _statusBarViewController;
    UIWindow * _window;
    UIZoomViewController * _zoomViewController;
}

+ (id)sharedClassicController;

- (void).cxx_destruct;
- (void)_classicChangeStatusBarOrientation:(id)arg1;
- (void)_classicChangeStatusBarOrientationFinished:(id)arg1 finished:(bool)arg2 context:(id)arg3;
- (void)_initializeStatusBarOrientation;
- (void)_setupWindow;
- (bool)_shouldHideStatusBar;
- (bool)_supportsZoom;
- (id)_window;
- (bool)drawsStatusBarFiller;
- (bool)isClassicControlWindow:(id)arg1;
- (bool)isZoomed;
- (void)setDrawsStatusBarFiller:(bool)arg1;
- (void)setStatusBarHidden:(bool)arg1 animationParameters:(id)arg2;
- (void)setStatusBarOrientation:(long long)arg1 animationParameters:(id)arg2;
- (void)setStatusBarStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)setZoomed:(bool)arg1;
- (void)setZoomed:(bool)arg1 animated:(bool)arg2;

@end
