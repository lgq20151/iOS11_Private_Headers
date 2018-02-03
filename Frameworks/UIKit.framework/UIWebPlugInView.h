/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebPlugInView : WAKView {
    CALayer * _hostingLayer;
    bool  _isFullScreen;
    bool  _isMapViewPlugIn;
    bool  _isQuickTimePlugIn;
    bool  _isiAdPlugIn;
    struct __CFRunLoopObserver { } * _mainRunLoopDrawObserver;
    bool  _parentedInLayer;
    UIView * _uiView;
    UIWebDocumentView * _webView;
}

@property (nonatomic) bool isMapViewPlugIn;
@property (nonatomic) bool isQuickTimePlugIn;
@property (nonatomic) bool isiAdPlugIn;
@property (getter=isParentedInLayer, nonatomic) bool parentedInLayer;

- (void)_attachPluginLayerOnMainThread;
- (void)_connectPluginLayers;
- (void)_detachPluginLayerOnMainThread;
- (void)_disconnectPluginLayers;
- (void)_reshapeOnMainThread;
- (void)_viewDidMoveToWindowOnMainThread;
- (void)attachPluginLayer;
- (void)dealloc;
- (void)detachPluginLayer;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithWebView:(id)arg1 plugInView:(id)arg2;
- (void)invalidateGState;
- (bool)isMapViewPlugIn;
- (bool)isParented;
- (bool)isParentedInLayer;
- (bool)isQuickTimePlugIn;
- (bool)isiAdPlugIn;
- (void)layout;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (id)objectForWebScript;
- (id)plugInView;
- (id)pluginLayer;
- (void)reshape;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIsMapViewPlugIn:(bool)arg1;
- (void)setIsQuickTimePlugIn:(bool)arg1;
- (void)setIsiAdPlugIn:(bool)arg1;
- (void)setParentedInLayer:(bool)arg1;
- (void)setWebView:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)webPlugInDestroy;
- (void)webPlugInInitialize;
- (void)webPlugInStart;
- (void)webPlugInStop;
- (bool)willProvidePluginLayer;

@end
