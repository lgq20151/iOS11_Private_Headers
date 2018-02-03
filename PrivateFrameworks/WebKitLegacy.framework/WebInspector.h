/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebInspector : NSObject {
    WebInspectorFrontend * _frontend;
    WebView * _inspectedWebView;
}

@property (getter=isOpen, nonatomic, readonly) bool open;

- (void)attach:(id)arg1;
- (void)close:(id)arg1;
- (void)dealloc;
- (void)detach:(id)arg1;
- (void)evaluateInFrontend:(id)arg1 script:(id)arg2;
- (id)initWithInspectedWebView:(id)arg1;
- (void)inspectedWebViewClosed;
- (bool)isDebuggingJavaScript;
- (bool)isJavaScriptProfilingEnabled;
- (bool)isOpen;
- (bool)isProfilingJavaScript;
- (bool)isTimelineProfilingEnabled;
- (void)releaseFrontend;
- (void)setFrontend:(id)arg1;
- (void)setJavaScriptProfilingEnabled:(bool)arg1;
- (void)setTimelineProfilingEnabled:(bool)arg1;
- (void)show:(id)arg1;
- (void)showConsole:(id)arg1;
- (void)showWindow;
- (void)startDebuggingJavaScript:(id)arg1;
- (void)startProfilingJavaScript:(id)arg1;
- (void)stopDebuggingJavaScript:(id)arg1;
- (void)stopProfilingJavaScript:(id)arg1;
- (void)toggleDebuggingJavaScript:(id)arg1;
- (void)toggleProfilingJavaScript:(id)arg1;

@end
