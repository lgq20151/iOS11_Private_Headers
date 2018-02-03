/* made by EzioChiu.
 */

@protocol NSURLDownloadDelegate <NSObject>

@optional

- (bool)download:(NSURLDownload *)arg1 canAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)download:(NSURLDownload *)arg1 decideDestinationWithSuggestedFilename:(NSString *)arg2;
- (void)download:(NSURLDownload *)arg1 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)download:(NSURLDownload *)arg1 didCreateDestination:(NSString *)arg2;
- (void)download:(NSURLDownload *)arg1 didFailWithError:(NSError *)arg2;
- (void)download:(NSURLDownload *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)download:(NSURLDownload *)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (void)download:(NSURLDownload *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (bool)download:(NSURLDownload *)arg1 shouldDecodeSourceDataOfMIMEType:(NSString *)arg2;
- (void)download:(NSURLDownload *)arg1 willResumeWithResponse:(NSURLResponse *)arg2 fromByte:(long long)arg3;
- (NSURLRequest *)download:(NSURLDownload *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
- (void)downloadDidBegin:(NSURLDownload *)arg1;
- (void)downloadDidFinish:(NSURLDownload *)arg1;
- (bool)downloadShouldUseCredentialStorage:(NSURLDownload *)arg1;

@end
