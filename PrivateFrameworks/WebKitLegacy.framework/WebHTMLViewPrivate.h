/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebHTMLViewPrivate : NSObject {
    NSTimer * autoscrollTimer;
    WebEvent * autoscrollTriggerEvent;
    bool  closed;
    WebDataSource * dataSource;
    bool  drawingIntoAcceleratedLayer;
    bool  drawingIntoLayer;
    bool  exposeInputContext;
    bool  handlingMouseDownEvent;
    bool  ignoringMouseDraggedEvents;
    bool  inScrollPositionChanged;
    struct WebHTMLViewInterpretKeyEventsParameters { struct KeyboardEvent {} *x1; bool x2; bool x3; bool x4; bool x5; } * interpretKeyEventsParameters;
    WebEvent * keyDownEvent;
    struct CGPoint { 
        double x; 
        double y; 
    }  lastScrollPosition;
    WAKView * layerHostingView;
    WebEvent * mouseDownEvent;
    NSArray * pageRects;
    bool  paginateScreenContent;
    WebPluginController * pluginController;
    bool  printing;
    SEL  selectorForDoCommandBySelector;
    NSString * toolTip;
    id  trackingRectOwner;
    void * trackingRectUserData;
    bool  transparentBackground;
}

+ (void)initialize;

- (void)clear;
- (void)dealloc;

@end