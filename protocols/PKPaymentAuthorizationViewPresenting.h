/* made by EzioChiu.
 */

@protocol PKPaymentAuthorizationViewPresenting <NSObject>

@required

+ (void)presentCell:(UITableViewCell *)arg1 withDataItem:(PKPaymentDataItem *)arg2 shouldShowSeperator:(bool)arg3 forPaymentRequest:(PKPaymentRequest *)arg4;

@optional

+ (void)presentView:(UIView *)arg1 withDataItem:(PKPaymentDataItem *)arg2 forPaymentRequest:(PKPaymentRequest *)arg3;

@end
