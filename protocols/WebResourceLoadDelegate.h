/* made by EzioChiu.
 */

@protocol WebResourceLoadDelegate <NSObject>

@optional

- (id)webView:(WebView *)arg1 identifierForInitialRequest:(NSURLRequest *)arg2 fromDataSource:(WebDataSource *)arg3;
- (void)webView:(WebView *)arg1 plugInFailedWithError:(NSError *)arg2 dataSource:(WebDataSource *)arg3;
- (void)webView:(WebView *)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg3 fromDataSource:(WebDataSource *)arg4;
- (void)webView:(WebView *)arg1 resource:(id)arg2 didFailLoadingWithError:(NSError *)arg3 fromDataSource:(WebDataSource *)arg4;
- (void)webView:(WebView *)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(WebDataSource *)arg3;
- (void)webView:(WebView *)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg3 fromDataSource:(WebDataSource *)arg4;
- (void)webView:(WebView *)arg1 resource:(id)arg2 didReceiveContentLength:(long long)arg3 fromDataSource:(WebDataSource *)arg4;
- (void)webView:(WebView *)arg1 resource:(id)arg2 didReceiveResponse:(NSURLResponse *)arg3 fromDataSource:(WebDataSource *)arg4;
- (NSURLRequest *)webView:(WebView *)arg1 resource:(id)arg2 willSendRequest:(NSURLRequest *)arg3 redirectResponse:(NSURLResponse *)arg4 fromDataSource:(WebDataSource *)arg5;

@end
