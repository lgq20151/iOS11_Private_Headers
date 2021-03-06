/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSURLAction : BCSAction {
    NSArray * _appLinks;
    NSURL * _appStoreSearchURLForUnsupportedScheme;
    LSApplicationProxy * _applicationProxy;
    bool  _deviceDataIsUnavailable;
    bool  _hasPreferredAppLink;
}

@property (nonatomic, readonly) bool hasMultipleAppLinks;
@property (nonatomic, readonly) bool hasPreferredAppLink;
@property (nonatomic, readonly) bool mustOpenAppLinkInApp;
@property (nonatomic, readonly) LSApplicationProxy *targetApplication;

- (void).cxx_destruct;
- (id)_actionDescriptionForURL:(id)arg1 application:(id)arg2 shouldShowHostNameForSafariURL:(bool)arg3;
- (id)_actionDescriptionWithoutTargetApplicationForURL:(id)arg1;
- (void)_resolveTargetApplicationForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_shouldBlockHandlingURL:(id)arg1;
- (bool)_shouldOpenInAppForAppLink:(id)arg1;
- (id)actionPickerItems;
- (id)debugDescriptionExtraInfoDictionary;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (void)determineActionabilityWithCompletionHandler:(id /* block */)arg1;
- (bool)hasMultipleAppLinks;
- (bool)hasPreferredAppLink;
- (id)initWithData:(id)arg1;
- (id)localizedDefaultActionDescription;
- (bool)mustOpenAppLinkInApp;
- (void)performAction;
- (void)performDefaultAction;
- (void)performDefaultActionWithFBOptions:(id)arg1;
- (id)targetApplication;
- (id)url;
- (id)urlThatCanBeOpened;

@end
