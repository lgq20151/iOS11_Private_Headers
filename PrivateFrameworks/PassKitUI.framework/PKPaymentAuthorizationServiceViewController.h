/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAuthorizationServiceViewController : UIViewController <PKAuthenticatorDelegate, PKPaymentAuthorizationFooterViewDelegate, PKPaymentAuthorizationServiceProtocol, PKPaymentAuthorizationStateMachineDelegate, UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    bool  _allowCompactProcessing;
    bool  _authenticating;
    PKAuthenticator * _authenticator;
    long long  _authorizationMode;
    unsigned long long  _biometryAttempts;
    bool  _bypassAuthenticator;
    UIBarButtonItem * _cancelBarButtonItem;
    bool  _cancelButtonDisabled;
    UIView * _contentView;
    NSLayoutConstraint * _contentViewRightConstraint;
    <PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> * _delegate;
    UITableView * _detailTableView;
    PKPaymentAuthorizationFooterView * _footerView;
    struct __IOHIDEventSystemClient { } * _hidSystemClient;
    bool  _hostApplicationEnteredBackground;
    bool  _hostApplicationResignedActive;
    bool  _isPad;
    double  _keyboardHeight;
    PKPaymentAuthorizationLayout * _layout;
    UIViewController * _passcodeViewController;
    NSLayoutConstraint * _passphraseBottomConstraint;
    UIView * _passphraseSeparatorView;
    UIViewController * _passphraseViewController;
    PKPaymentAuthorizationPasswordButtonView * _passwordButtonView;
    PKPaymentPreferencesViewController * _paymentCardPreferencesController;
    PKPhysicalButtonView * _physicalButtonView;
    long long  _preferencesStyle;
    PKPaymentPreferencesViewController * _shippingAddressPreferencesController;
    PKPaymentPreferencesViewController * _shippingContactPreferencesController;
    PKPaymentPreferencesViewController * _shippingMethodPreferencesController;
    bool  _shouldIgnorePhysicalButton;
    PKPaymentAuthorizationStateMachine * _stateMachine;
    PKPaymentAuthorizationSummaryItemsView * _summaryItemsView;
    PKPaymentAuthorizationTotalView * _totalView;
    bool  _treatingHostAsBackgrounded;
    bool  _userIntentRequired;
    bool  _viewAppeared;
    bool  _visible;
}

@property (nonatomic, retain) PKAuthenticator *authenticator;
@property (nonatomic, readonly) bool cancelButtonDisabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPhysicalButtonView *physicalButtonView;
@property (nonatomic, readonly) bool shouldIgnorePhysicalButton;
@property (nonatomic, retain) PKPaymentAuthorizationStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (getter=isUserIntentRequired, nonatomic, readonly) bool userIntentRequired;

- (void).cxx_destruct;
- (void)_addPassphraseViewControllerToHierarchy:(id)arg1 withCompletion:(id /* block */)arg2;
- (long long)_authenticatorPolicy;
- (id)_compactNavigationController;
- (void)_createSubviews;
- (void)_didCancel:(bool)arg1;
- (void)_didFailWithError:(id)arg1;
- (void)_didFailWithFatalError:(id)arg1;
- (void)_didSucceedWithAuthorizationStateParam:(id)arg1;
- (id)_evaluationRequest;
- (void)_handleModelUpdate;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)_invalidPaymentDataWithParam:(id)arg1;
- (void)_payWithPasswordPressed:(id)arg1;
- (void)_processClientCallback:(id)arg1;
- (void)_removePassphraseViewFromHierarchyWithCompletionHandler:(id /* block */)arg1;
- (void)_removeSimulatorHIDListener;
- (void)_resumeAuthenticationWithPreviousError:(id)arg1 animated:(bool)arg2;
- (void)_selectOptionsForDataItem:(id)arg1;
- (void)_setAuthenticating:(bool)arg1;
- (void)_setPasscodeViewController:(id)arg1;
- (void)_setPassphraseViewController:(id)arg1;
- (void)_setUserIntentRequired:(bool)arg1 shouldIgnorePhysicalButton:(bool)arg2;
- (void)_setVisible:(bool)arg1;
- (void)_setupPaymentPassAndBillingAddress;
- (void)_setupShippingAddress;
- (void)_setupShippingContact;
- (void)_setupShippingMethods;
- (void)_setupWithPaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 andApplicationIdentifier:(id)arg3;
- (void)_startEvaluation;
- (void)_startSimulatorHIDListener;
- (void)_suspendAuthentication;
- (void)_suspendAuthenticationAndForceReset:(bool)arg1;
- (Class)_tableViewClassForDataItem:(id)arg1;
- (long long)_totalViewStyle;
- (void)_updateBackgroundedState:(bool)arg1;
- (void)_updatePendingTransaction:(id)arg1 withAuthorizationStateParam:(id)arg2;
- (void)_updatePhysicalButtonInstruction;
- (void)_updatePreferencesWithErrors:(id)arg1;
- (void)_updatePreferredContentSize;
- (void)_updateShippingMethods;
- (void)_updateUserIntentRequired;
- (Class)_viewPresenterClassForDataItem:(id)arg1;
- (id)authenticator;
- (void)authenticator:(id)arg1 didRequestUserAction:(long long)arg2;
- (void)authenticator:(id)arg1 didTransitionToPearlState:(long long)arg2;
- (void)authenticatorDidEncounterFingerOff:(id)arg1;
- (void)authenticatorDidEncounterFingerOn:(id)arg1;
- (void)authenticatorDidEncounterMatchMiss:(id)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationFooterViewDidChangeConstraints:(id)arg1;
- (void)authorizationFooterViewPasscodeButtonPressed:(id)arg1;
- (void)authorizationFooterViewWillChangeConstraints:(id)arg1;
- (void)biometricAttemptFailed;
- (bool)cancelButtonDisabled;
- (void)cancelPressed:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)dismissPasscodeViewController;
- (void)dismissPassphraseViewController;
- (void)dismissPassphraseViewControllerWithCompletion:(id /* block */)arg1;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationDidCancel;
- (void)handleHostApplicationWillResignActive:(bool)arg1;
- (id)handlePaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 andApplicationIdentifier:(id)arg3;
- (id)initWithLayout:(id)arg1;
- (bool)isUserIntentRequired;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (bool)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4;
- (id)physicalButtonView;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(id /* block */)arg2 reply:(id /* block */)arg3;
- (void)presentPassphraseViewController:(id)arg1 completionHandler:(id /* block */)arg2 reply:(id /* block */)arg3;
- (void)resumeAndUpdateContentSize;
- (void)setAuthenticator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFooterState:(long long)arg1 string:(id)arg2 animated:(bool)arg3;
- (void)setPhysicalButtonView:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (bool)shouldIgnorePhysicalButton;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (bool)signInViewController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (id)stateMachine;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end