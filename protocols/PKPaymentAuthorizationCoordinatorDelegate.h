/* made by EzioChiu.
 */

@protocol PKPaymentAuthorizationCoordinatorDelegate <NSObject>

@required

- (void)paymentAuthorizationCoordinator:(void *)arg1 didAuthorizePayment:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationCoordinator *, PKPayment *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentAuthorizationResult *, void*
- (void)paymentAuthorizationCoordinatorDidFinish:(PKPaymentAuthorizationCoordinator *)arg1;

@optional

- (void)paymentAuthorizationCoordinator:(void *)arg1 didAuthorizePayment:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationCoordinator *, PKPayment *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)paymentAuthorizationCoordinator:(void *)arg1 didSelectPaymentMethod:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationCoordinator *, PKPaymentMethod *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)paymentAuthorizationCoordinator:(void *)arg1 didSelectPaymentMethod:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationCoordinator *, PKPaymentMethod *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentRequestPaymentMethodUpdate *, void*
- (void)paymentAuthorizationCoordinator:(void *)arg1 didSelectShippingAddress:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: PKPaymentAuthorizationCoordinator *, CNContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSArray *, NSArray *, void*
- (void)paymentAuthorizationCoordinator:(void *)arg1 didSelectShippingAddress:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationCoordinator *, CNContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentRequestShippingContactUpdate *, void*
- (void)paymentAuthorizationCoordinator:(void *)arg1 didSelectShippingMethod:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PKPaymentAuthorizationCoordinator *, PKShippingMethod *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSArray *, void*
- (void)paymentAuthorizationCoordinator:(void *)arg1 didSelectShippingMethod:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationCoordinator *, PKShippingMethod *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentRequestShippingMethodUpdate *, void*
- (void)paymentAuthorizationCoordinatorWillAuthorizePayment:(PKPaymentAuthorizationCoordinator *)arg1;

@end