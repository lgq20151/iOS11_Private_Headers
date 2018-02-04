/* made by EzioChiu
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKExtensionHostContext : PKExtensionBaseContext <PKExtensionHostContextProtocol> {
    NSObject<OS_dispatch_group> * _delayCallbacksGroup;
    <PKPaymentAuthorizationHostProtocol> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *delayCallbacksGroup;
@property (nonatomic) <PKPaymentAuthorizationHostProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationDidPresent;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationWillStart;
- (void)beginDelayingCallbacks;
- (id)delayCallbacksGroup;
- (id)delegate;
- (void)endDelayingCallbacks;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)setDelayCallbacksGroup:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)vendorContext;
- (id)vendorContextWithErrorHandler:(id /* block */)arg1;

@end