/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFWebAppServiceViewController : SFBrowserServiceViewController <SFWebAppServiceViewControllerProtocol> {
    NSMutableArray * _fallbackURLs;
    WKProcessPool * _processPool;
    UIView * _statusBarBackgroundView;
    UIWebClip * _webClip;
    WKWebsiteDataStore * _websiteDataStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (bool)_clientIsWebApp;
- (void)_initialLoadFinishedWithSuccess:(bool)arg1;
- (bool)_isURLOutOfScope:(id)arg1;
- (void)_loadNextFallbackURL;
- (void)_loadWebClipPageURL:(id)arg1;
- (unsigned long long)_persona;
- (bool)_privateBrowsingInitiallyEnabled;
- (bool)_usesScrollToTopView;
- (bool)canInstallProfiles;
- (bool)canPrint;
- (void)loadWebAppWithIdentifier:(id)arg1;
- (long long)preferredStatusBarStyle;
- (id)processPool;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)setWebViewController:(id)arg1;
- (void)viewDidLoad;
- (id)webViewConfiguration;
- (void)webViewController:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webViewController:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewController:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewControllerDidChangeLoadingState:(id)arg1;
- (void)webViewControllerDidFirstVisuallyNonEmptyLayout:(id)arg1;
- (id)websiteDataStore;
- (id)websiteDataStoreConfiguration;

@end
