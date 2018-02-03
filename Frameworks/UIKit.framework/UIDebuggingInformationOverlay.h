/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDebuggingInformationOverlay : UIWindow <UISplitViewControllerDelegate> {
    bool  _checkingTouches;
    struct CGPoint { 
        double x; 
        double y; 
    }  _drawingOrigin;
    UIWindow * _inspectedWindow;
    UIEvent * _lastTouch;
    bool  _touchCaptureEnabled;
    NSMutableArray * _touchObservers;
}

@property (nonatomic) bool checkingTouches;
@property (nonatomic) struct CGPoint { double x1; double x2; } drawingOrigin;
@property (nonatomic, retain) UIWindow *inspectedWindow;
@property (nonatomic, retain) UIEvent *lastTouch;
@property (nonatomic, readonly) UIDebuggingInformationOverlayViewController *overlayViewController;
@property (nonatomic, retain) UIDebuggingInformationRootTableViewController *rootTableViewController;
@property (nonatomic) bool touchCaptureEnabled;
@property (nonatomic, retain) NSMutableArray *touchObservers;

+ (id)overlay;
+ (void)popDisableApplyingConfigurations;
+ (void)prepareDebuggingOverlay;
+ (void)pushDisableApplyingConfigurations;

- (void).cxx_destruct;
- (bool)checkingTouches;
- (struct CGPoint { double x1; double x2; })drawingOrigin;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inspectedWindow;
- (id)lastTouch;
- (id)overlayViewController;
- (id)rootTableViewController;
- (void)setCheckingTouches:(bool)arg1;
- (void)setDrawingOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInspectedWindow:(id)arg1;
- (void)setLastTouch:(id)arg1;
- (void)setRootTableViewController:(id)arg1;
- (void)setTouchCaptureEnabled:(bool)arg1;
- (void)setTouchObservers:(id)arg1;
- (void)toggleFullscreen;
- (void)toggleVisibility;
- (bool)touchCaptureEnabled;
- (id)touchObservers;

@end
