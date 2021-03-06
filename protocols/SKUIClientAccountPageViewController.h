/* made by EzioChiu.
 */

@protocol SKUIClientAccountPageViewController <NSObject>

@required

- (void)didPrepareWithResult:(NSNumber *)arg1 error:(NSError *)arg2;
- (void)dismissViewControllerWithResult:(NSNumber *)arg1 error:(NSError *)arg2;
- (void)overrideCreditCardPresentationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SUCreditCardReaderOutput *, void*
- (void)overrideRedeemCameraWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKUIRedeem *, NSError *, void*

@end
