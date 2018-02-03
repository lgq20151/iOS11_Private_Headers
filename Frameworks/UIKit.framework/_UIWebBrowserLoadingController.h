/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIWebBrowserLoadingController : NSObject <WebFrameLoadDelegate> {
    NSURL * _URL;
    NSString * _URLString;
    NSURL * _backURL;
    UIWebBrowserView * _browserView;
    bool  _canGoBack;
    bool  _canGoForward;
    WebDataSource * _dataSourceWithError;
    <_UIWebBrowserLoadingControllerDelegate> * _delegate;
    NSError * _errorThatCausedLoadToEnd;
    float  _estimatedProgress;
    NSArray * _fallbackURLs;
    NSURL * _forwardURL;
    NSString * _lastSuccessfulURLString;
    bool  _loadEndedWithError;
    bool  _loadStoppedFromAPI;
    bool  _loading;
    long long  _loadingState;
    unsigned int  _pendingFrameLoadMessages;
    bool  _securePageHasInsecureContent;
    NSString * _title;
    NSString * _userTypedAddress;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, readonly) NSString *URLString;
@property (nonatomic, retain) UIWebBrowserView *browserView;
@property (nonatomic, readonly) bool canGoBack;
@property (nonatomic, readonly) bool canGoForward;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIWebBrowserLoadingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) float estimatedProgress;
@property (readonly) unsigned long long hash;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic) long long loadingState;
@property (getter=isSecure, nonatomic, readonly) bool secure;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (id)URL;
- (id)URLString;
- (bool)_URLMayStartLoad:(id)arg1;
- (void)_attemptTransitionToLoadingState:(long long)arg1;
- (id)_dataSourceURL;
- (void)_didNotLoadURL;
- (id)_getDataSourceURL:(id)arg1;
- (void)_loadRequest:(id)arg1 userDriven:(bool)arg2;
- (void)_performWebViewLoadSelector:(SEL)arg1 forceProgress:(bool)arg2;
- (void)_progressChanged:(id)arg1;
- (void)_setBackURL:(id)arg1;
- (void)_setFallbackURLs:(id)arg1;
- (void)_setForwardURL:(id)arg1;
- (void)_setLoading:(bool)arg1 withError:(bool)arg2;
- (void)_setLoading:(bool)arg1 withError:(bool)arg2 fromDelegate:(bool)arg3 fromFragmentLoad:(bool)arg4;
- (void)_setLoading:(bool)arg1 withError:(bool)arg2 fromFragmentLoad:(bool)arg3;
- (void)_setLoadingFromDelegate:(bool)arg1 withError:(id)arg2 dataSource:(id)arg3;
- (void)_setSecurePageHasInsecureContent:(bool)arg1;
- (void)_setUserTypedAddress:(id)arg1;
- (void)_tryMultipleURLs:(id)arg1;
- (void)_updateAfterHistoryChange;
- (void)_updateBackForward;
- (void)_updateURL;
- (void)_updateURLString;
- (id)browserView;
- (bool)canGoBack;
- (bool)canGoForward;
- (void)dealloc;
- (id)delegate;
- (float)estimatedProgress;
- (void)goBack;
- (void)goForward;
- (bool)isLoading;
- (bool)isSecure;
- (void)loadUserTypedAddress:(id)arg1;
- (long long)loadingState;
- (void)reload;
- (void)setBrowserView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEstimatedProgress:(float)arg1;
- (void)setLoadingState:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (void)stopLoading;
- (id)title;
- (void)webView:(id)arg1 didCancelClientRedirectForFrame:(id)arg2;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didPopStateWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didPushStateWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didReplaceStateWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didRunInsecureContent:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 willPerformClientRedirectToURL:(id)arg2 delay:(double)arg3 fireDate:(id)arg4 forFrame:(id)arg5;
- (void)webViewDidDisplayInsecureContent:(id)arg1;

@end
