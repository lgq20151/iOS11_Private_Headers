/* made by EzioChiu.
 */

@protocol PKPaymentDataProviderDelegate <NSObject>

@optional

- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableMessageService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveTransaction:(PKPaymentTransaction *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didRemoveTransactionWithIdentifier:(NSString *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateWithFelicaPassProperties:(PKFelicaPassProperties *)arg2;

@end
