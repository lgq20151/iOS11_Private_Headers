/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSafeBrowsingController : NSObject <_SFSafeBrowsingWarningResponseObserver> {
    <_SFSafeBrowsingControllerDelegate> * _delegate;
    bool  _loadingSecurityWarningPage;
    _SFSecurityInfo * _provisionalSecurityInfo;
    unsigned long long  _safeBrowsingCheckSeed;
    <_SFSafeBrowsingWebProcessController> * _safeBrowsingControllerProxy;
    _WKRemoteObjectInterface * _safeBrowsingResponseObserverInterface;
    bool  _showingSecurityWarningPage;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFSafeBrowsingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLoadingSecurityWarningPage, nonatomic, readonly) bool loadingSecurityWarningPage;
@property (nonatomic, retain) _SFSecurityInfo *provisionalSecurityInfo;
@property (getter=isShowingSecurityWarningPage, nonatomic, readonly) bool showingSecurityWarningPage;
@property (readonly) Class superclass;

+ (id)_localizedStringsForSafeBrowsing;

- (void).cxx_destruct;
- (void)_fraudulentWebsiteCheckCompletedForURL:(id)arg1 withResult:(id)arg2 error:(id)arg3;
- (void)_safeBrowsingCheckFinishedWithSecurityInfo:(id)arg1;
- (id)_securityWarningPageURL;
- (void)_setUpSafeBrowsingObserverInterface;
- (int)_wbsAnalyticsSafeBrowsingProviderFromProvider:(id)arg1;
- (void)cancelCheckForFraudulentWebsites;
- (void)commitProvisionalSecurityInfo;
- (id)delegate;
- (void)didRespondToSafeBrowsingWarningWithResult:(long long)arg1;
- (void)hideSecurityWarningPage;
- (id)initWithWebView:(id)arg1;
- (void)invalidate;
- (bool)isLoadingSecurityWarningPage;
- (bool)isShowingSecurityWarningPage;
- (id)provisionalSecurityInfo;
- (id)safeBrowsingControllerProxy;
- (void)setDelegate:(id)arg1;
- (void)setProvisionalSecurityInfo:(id)arg1;
- (void)showSecurityWarningPageWithSecurityInfo:(id)arg1;
- (void)startCheckingFraudulentWebSitesWithURL:(id)arg1;
- (void)updateShowingSecurityWarningPageIfNeeded;
- (void)urlPassedSafeBrowsingCheck:(id)arg1 canCache:(bool)arg2;

@end
