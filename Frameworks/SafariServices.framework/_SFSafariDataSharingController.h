/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSafariDataSharingController : NSObject {
    NSMutableArray * _appBundlesWithSeparateData;
    NSObject<OS_dispatch_queue> * _dataSharingQueue;
    NSMutableDictionary * _dataSharingStore;
}

@property (nonatomic, readonly) NSURL *oAuthDataContainerURL;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_addDataSharingOAuthDomainWithAppBundleID:(id)arg1 domain:(id)arg2 allowShare:(bool)arg3;
- (void)_checkInAppBundleIDIfNeeded:(id)arg1;
- (void)_fetchMatchedCookiesForURL:(id)arg1 inStore:(id)arg2 completion:(id /* block */)arg3;
- (void)_loadAppBundlesWithSeparateDataIfNeeded;
- (void)_loadSharingModePlistWithBundleID:(id)arg1;
- (id)_oAuthWebsiteDataStore;
- (id)_policyFileURLWithBundleID:(id)arg1;
- (void)_saveDataSharingDictionary:(id)arg1 appBundleID:(id)arg2;
- (void)clearAllWebsitesData;
- (void)fetchCookiesForURL:(id)arg1 appBundleID:(id)arg2 webView:(id)arg3 completion:(id /* block */)arg4;
- (void)getDataSharingModeWithAppBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)importSafariWebsiteDataWithURL:(id)arg1 appBundleID:(id)arg2 webView:(id)arg3 notification:(id)arg4 completion:(id /* block */)arg5;
- (id)init;
- (id)oAuthDataContainerURL;
- (void)setDataSharingModeWithAppBundleID:(id)arg1 mode:(long long)arg2;
- (id)systemDataContainerURLWithAppBundleID:(id)arg1;
- (id)websiteDataStoreConfigurationWithRootURL:(id)arg1;

@end
