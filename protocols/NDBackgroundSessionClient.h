/* made by EzioChiu.
 */

@protocol NDBackgroundSessionClient <NSObject>

@required

- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didLoadTimeRange:(NSValue *)arg2 totalTimeRangesLoaded:(NSArray *)arg3 timeRangeExpectedToLoad:(NSValue *)arg4;
- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didReceiveDownloadToken:(unsigned long long)arg2;
- (void)backgroundAVAssetDownloadTask:(void *)arg1 didResolveMediaSelectionProperyList:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 7: unsigned long long, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 willDownloadToURL:(NSURL *)arg2;
- (void)backgroundAVAssetDownloadTaskDidUpdateProgress:(unsigned long long)arg1 totalBytesWritten:(unsigned long long)arg2 totalBytesExpectedToWrite:(unsigned long long)arg3;
- (void)backgroundDataTask:(void *)arg1 didReceiveData:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 7: unsigned long long, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)backgroundDataTaskDidBecomeDownloadTask:(unsigned long long)arg1;
- (void)backgroundDownloadTask:(void *)arg1 didFinishDownloadingToURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 7: unsigned long long, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)backgroundDownloadTask:(unsigned long long)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)backgroundSessionDidFinishAppWake:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)backgroundSessionDidStartAppWake:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)backgroundTask:(void *)arg1 _willSendRequestForEstablishedConnection:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, NSFileHandle *, void*
- (void)backgroundTask:(void *)arg1 didCompleteWithError:(void *)arg2 info:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 8: unsigned long long, NSError *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)backgroundTask:(void *)arg1 didFinishCollectingMetrics:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 7: unsigned long long, NSURLSessionTaskMetrics *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)backgroundTask:(void *)arg1 didReceiveChallenge:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(NSURLResponse *)arg2 timingData:(NSDictionary *)arg3;
- (void)backgroundTask:(void *)arg1 didReceiveResponse:(void *)arg2 timingData:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: unsigned long long, NSURLResponse *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)backgroundTask:(unsigned long long)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)backgroundTask:(void *)arg1 getAuthHeadersForResponse:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, void*
- (void)backgroundTask:(unsigned long long)arg1 hasConnectionWaitingWithError:(NSError *)arg2;
- (void)backgroundTask:(unsigned long long)arg1 hasConnectionWaitingWithReason:(long long)arg2;
- (void)backgroundTask:(void *)arg1 needNewBodyStream:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSFileHandle *, void*
- (void)backgroundTask:(void *)arg1 willBeginDelayedRequest:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLRequest *, void*
- (void)backgroundTask:(void *)arg1 willPerformHTTPRedirection:(void *)arg2 withNewRequest:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: unsigned long long, NSHTTPURLResponse *, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, void*
- (void)backgroundTaskDidResume:(unsigned long long)arg1;
- (void)backgroundTaskDidSuspend:(unsigned long long)arg1;
- (void)backgroundTaskHasConnectionWaiting:(unsigned long long)arg1;
- (void)credStorage_allCredentialsWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)credStorage_credentialsForProtectionSpace:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSURLProtectionSpace *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)credStorage_defaultCredentialForProtectionSpace:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSURLProtectionSpace *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLCredential *, void*
- (void)credStorage_getInitialCredentialDictionariesWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, void*
- (void)credStorage_removeCredential:(NSURLCredential *)arg1 forProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)credStorage_setCredential:(NSURLCredential *)arg1 forProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)credStorage_setDefaultCredential:(NSURLCredential *)arg1 forProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)openFileAtPath:(void *)arg1 mode:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 8: NSString *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSFileHandle *, void*
- (void)willRetryBackgroundDataTask:(unsigned long long)arg1 withError:(NSError *)arg2 timingData:(NSDictionary *)arg3;

@end
