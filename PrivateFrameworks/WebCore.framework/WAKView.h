/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WAKView : WAKResponder {
    bool  _drawsOwnDescendants;
    bool  _isHidden;
    NSMutableSet * subviewReferences;
    struct _WKViewContext { 
        int (*notificationCallback)(); 
        void *notificationUserInfo; 
        int (*responderCallback)(); 
        void *responderUserInfo; 
        int (*willRemoveSubviewCallback)(); 
        int (*invalidateGStateCallback)(); 
    }  viewContext;
    struct _WKView { struct _WKObject { unsigned int x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; struct _WKViewContext {} *x2; id x3; struct _WKView {} x4; struct __CFArray {} *x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; unsigned int x8; float x9; void *x10; } * viewRef;
}

// Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore

+ (void)_setInterpolationQuality:(int)arg1;
+ (id)_wrapperForViewRef:(struct _WKView { struct _WKObject { unsigned int x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; struct _WKViewContext {} *x2; id x3; struct _WKView {} x4; struct __CFArray {} *x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; unsigned int x8; float x9; void *x10; }*)arg1;
+ (id)focusView;

- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2;
- (void)_drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 lockFocus:(bool)arg3;
- (bool)_handleResponderCall:(int)arg1;
- (id)_initWithViewRef:(struct _WKView { struct _WKObject { unsigned int x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; struct _WKViewContext {} *x2; id x3; struct _WKView {} x4; struct __CFArray {} *x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; unsigned int x8; float x9; void *x10; }*)arg1;
- (void)_lockFocusViewInContext:(struct CGContext { }*)arg1;
- (bool)_selfHandleEvent:(id)arg1;
- (void)_setDrawsOwnDescendants:(bool)arg1;
- (id)_subviewReferences;
- (void)_unlockFocusViewInContext:(struct CGContext { }*)arg1;
- (struct _WKView { struct _WKObject { unsigned int x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; struct _WKViewContext {} *x2; id x3; struct _WKView {} x4; struct __CFArray {} *x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; unsigned int x8; float x9; void *x10; }*)_viewRef;
- (bool)accessibilityIsIgnored;
- (void)addSubview:(id)arg1;
- (unsigned int)autoresizingMask;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromView:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (struct CGSize { double x1; double x2; })convertSize:(struct CGSize { double x1; double x2; })arg1 toView:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)display;
- (void)displayIfNeeded;
- (void)displayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)displayRectIgnoringOpacity:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)displayRectIgnoringOpacity:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)frameSizeChanged;
- (void)handleEvent:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (bool)inLiveResize;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateGState;
- (bool)isDescendantOf:(id)arg1;
- (bool)isHiddenOrHasHiddenAncestor;
- (id)lastScrollableAncestor;
- (void)layout;
- (void)layoutIfNeeded;
- (void)lockFocus;
- (bool)mouse:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)needsDisplay;
- (bool)needsPanelToBecomeKey;
- (id)nextKeyView;
- (id)nextResponder;
- (id)nextValidKeyView;
- (id)previousKeyView;
- (id)previousValidKeyView;
- (void)releaseGState;
- (void)removeFromSuperview;
- (float)scale;
- (void)scrollPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (void)setBoundsOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setNeedsDisplay:(bool)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsLayout:(bool)arg1;
- (void)setNextKeyView:(id)arg1;
- (void)setScale:(float)arg1;
- (id)subviews;
- (id)superview;
- (void)unlockFocus;
- (void)viewDidMoveToWindow;
- (void)viewWillDraw;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (void)willRemoveSubview:(id)arg1;
- (id)window;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)_frame;
- (id)_webView;
- (void)_web_addDescendantWebHTMLViewsToArray:(id)arg1;
- (bool)_web_firstResponderIsSelfOrDescendantView;
- (id)_web_parentWebFrameView;
- (id)_web_superviewOfClass:(Class)arg1;

@end
