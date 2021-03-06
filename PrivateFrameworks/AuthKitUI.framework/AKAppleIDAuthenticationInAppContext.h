/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@interface AKAppleIDAuthenticationInAppContext : AKAppleIDAuthenticationContext <AKAppleIDAuthenticationUIProvider, AKBasicLoginAlertControllerDelegate, RemoteUIControllerDelegate> {
    <AKAppleIDAuthenticationInAppContextAlertDelegate> * _alertDelegate;
    AKBasicLoginAlertController * _basicLoginViewController;
    RUIObjectModel * _currentRemoteOM;
    NSHTTPURLResponse * _deferredResponse;
    <AKAppleIDAuthenticationInAppContextDelegate> * _delegate;
    bool  _forceInlinePresentation;
    bool  _isPresentingServerUI;
    NSHTTPURLResponse * _latestReadResponse;
    UINavigationController * _modalRemoteUINavController;
    UINavigationController * _navController;
    bool  _overrideFirstActionSignal;
    UIViewController * _presentingViewController;
    RemoteUIController * _remoteUIController;
    id /* block */  _serverUICompletion;
    AKAppleIDServerResourceLoadDelegate * _serverUIDelegate;
    AKAppleIDServerUIDataHarvester * _serverUIHelper;
    AAUICDPStingrayRemoteUIController * _stingrayController;
    UIViewController * _topViewControllerOnLoadStart;
}

@property (nonatomic) <AKAppleIDAuthenticationInAppContextAlertDelegate> *alertDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AKAppleIDAuthenticationInAppContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceInlinePresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_assertValidPresentingViewController;
- (void)_cleanUpBasicLogin;
- (void)_cleanUpBasicLoginWithCompletion:(id /* block */)arg1;
- (void)_completeWithFinalResponse:(id)arg1;
- (void)_handleBackButtonTap:(id)arg1;
- (bool)_isDeferrableFinalResponseHarvested;
- (id)_navController;
- (void)_presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 waitForInteraction:(bool)arg4 completion:(id /* block */)arg5;
- (id)_remoteUIController;
- (id)alertDelegate;
- (void)basicLoginAlertControllerDidDismiss:(id)arg1;
- (void)basicLoginAlertControllerDidPresent:(id)arg1;
- (void)basicLoginAlertControllerWillDismiss:(id)arg1;
- (id)cdpUiProvider;
- (void)completeWithError:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)dismissKeepUsingUIWithCompletion:(id /* block */)arg1;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)arg1;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)arg1;
- (bool)forceInlinePresentation;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)presentKeepUsingUIForAppleID:(id)arg1 completion:(id /* block */)arg2;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)arg1;
- (void)presentServerProvidedUIWithURLRequest:(id)arg1 delegate:(id)arg2 completion:(id /* block */)arg3;
- (id)presentingViewController;
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (id)remoteUIStyle;
- (id)serverDataHarvester;
- (void)setAlertDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceInlinePresentation:(bool)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)willPresentModalNavigationController:(id)arg1;

@end
