/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentWebServiceTargetDevice : NSObject <PKPaymentWebServiceTargetDeviceProtocol> {
    PKPassLibrary * _passLibrary;
    PKPaymentService * _paymentService;
    PKAssertion * _provisioningAssertion;
    bool  _provisioningAssertionActive;
    PKAssertion * _verificationAssertion;
    bool  _verificationAssertionActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)localTargetDevice;

- (void).cxx_destruct;
- (void)_validateCommonPreconditionsWithCompletion:(id /* block */)arg1;
- (id)bridgedClientInfo;
- (bool)claimSecureElementForCurrentUser;
- (void)dealloc;
- (id)deviceDescriptionForPaymentWebService:(id)arg1;
- (id)deviceName;
- (id)deviceRegion;
- (void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
- (bool)felicaSecureElementIsAvailable;
- (id)init;
- (unsigned long long)maximumPaymentCards;
- (void)noteForegroundVerificationObserverActive:(bool)arg1;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(id /* block */)arg3;
- (bool)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;
- (void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3;
- (id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;
- (void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2;
- (id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 setNewAuthRandom:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(id /* block */)arg2;
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
- (bool)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1;
- (id)secureElementIdentifiers;
- (unsigned long long)secureElementOwnershipStateForCurrentUser;
- (void)setMaximumPaymentCards:(unsigned long long)arg1;
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
- (bool)supportsAutomaticPassPresentation;
- (bool)supportsExpressModeForExpressPassType:(long long)arg1;
- (id)trustedDeviceEnrollmentInfoForWebService:(id)arg1;

@end
