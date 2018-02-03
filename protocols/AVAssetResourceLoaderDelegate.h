/* made by EzioChiu.
 */

@protocol AVAssetResourceLoaderDelegate <NSObject>

@optional

- (void)resourceLoader:(AVAssetResourceLoader *)arg1 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)resourceLoader:(AVAssetResourceLoader *)arg1 didCancelLoadingRequest:(AVAssetResourceLoadingRequest *)arg2;
- (bool)resourceLoader:(AVAssetResourceLoader *)arg1 shouldWaitForLoadingOfRequestedResource:(AVAssetResourceLoadingRequest *)arg2;
- (bool)resourceLoader:(AVAssetResourceLoader *)arg1 shouldWaitForRenewalOfRequestedResource:(AVAssetResourceRenewalRequest *)arg2;
- (bool)resourceLoader:(AVAssetResourceLoader *)arg1 shouldWaitForResponseToAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;

@end
