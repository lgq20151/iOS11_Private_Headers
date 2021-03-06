/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIBiometricController : PSUIPasscodeLockController <BiometricKitUIEnrollResultDelegate, UIPopoverControllerDelegate> {
    bool  _currentlyEnablingTouchIDForPurchases;
    PSEnrollContainerViewController * _enrollController;
    UIPopoverController * _enrollmentPopoverController;
    id /* block */  _modalFlowCancelCompletion;
    id /* block */  _modalFlowSuccessCompletion;
    long long  _storeState;
}

@property (nonatomic) bool currentlyEnablingTouchIDForPurchases;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) PSEnrollContainerViewController *enrollController;
@property (nonatomic, retain) UIPopoverController *enrollmentPopoverController;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ modalFlowCancelCompletion;
@property (nonatomic, copy) id /* block */ modalFlowSuccessCompletion;
@property (nonatomic) long long storeState;
@property (readonly) Class superclass;

+ (bool)shouldPresentEnrollmentInPopover;

- (void).cxx_destruct;
- (id)_passcodeControllerForSpecifier:(id)arg1;
- (void)_popEnrollmentController;
- (void)addEnrollmentOrCreatePasscodeIfNecessaryWithCompletion:(id /* block */)arg1;
- (id)authorizationToken;
- (id)biometricLogo;
- (id)biometricTableViewHeader;
- (void)cancelModalFlow;
- (void)completeModalFlow;
- (bool)currentlyEnablingTouchIDForPurchases;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)didCancelEnteringPIN;
- (void)didUnlock;
- (void)enrollBiometric;
- (id)enrollController;
- (void)enrollmentCompletedForIdentity:(id)arg1;
- (void)enrollmentControllerDidDismiss;
- (id)enrollmentPopoverController;
- (bool)hasPasscodeAndBiometric;
- (id)headerForUseBiometricSection;
- (void)hideCancelButton;
- (bool)isBiometricEditingAllowed;
- (bool)isEnrollmentAvailable;
- (id)isTouchIDForPurchasesEnabled:(id)arg1;
- (bool)isTouchIDForPurchasesRestricted;
- (id)isTouchIDForStockholmEnabled:(id)arg1;
- (bool)isTouchIDForStockholmRestricted;
- (id)isTouchIDUnlockEnabled:(id)arg1;
- (bool)isTouchIDUnlockRestricted;
- (id /* block */)modalFlowCancelCompletion;
- (id /* block */)modalFlowSuccessCompletion;
- (id)passcodeController;
- (bool)popoverControllerShouldDismissPopover:(id)arg1;
- (void)presentPasscodePaneFromSpecifier:(id)arg1;
- (void)presentPopoverForContentViewController:(id)arg1;
- (void)pushPasscodePane;
- (void)setCurrentlyEnablingTouchIDForPurchases:(bool)arg1;
- (void)setEnrollController:(id)arg1;
- (void)setEnrollmentPopoverController:(id)arg1;
- (void)setModalFlowCancelCompletion:(id /* block */)arg1;
- (void)setModalFlowSuccessCompletion:(id /* block */)arg1;
- (void)setStoreState:(long long)arg1;
- (void)setTouchIDForPurchasesEnabled:(id)arg1 specifier:(id)arg2;
- (void)setTouchIDForStockholmEnabled:(id)arg1 specifier:(id)arg2;
- (void)setTouchIDUnlockEnabled:(id)arg1 specifier:(id)arg2;
- (void)setupBiometricLogoHeader;
- (bool)shouldRestrictFeaturesRequiringEnrollment;
- (long long)storeState;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)updateStoreBiometricsState;
- (void)updateTouchIDForPurchasesSpecifier;
- (void)updateTouchIDForStockholmSpecifier;
- (void)updateTouchIDUnlockSpecifier;
- (id)useBiometricForSpecifiers;
- (void)viewWillAppear:(bool)arg1;

@end
