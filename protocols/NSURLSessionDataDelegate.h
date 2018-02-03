/* made by EzioChiu.
 */

@protocol NSURLSessionDataDelegate <NSURLSessionTaskDelegate>

@optional

- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didBecomeDownloadTask:(NSURLSessionDownloadTask *)arg3;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didBecomeStreamTask:(NSURLSessionStreamTask *)arg3;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveData:(NSData *)arg3;
- (void)URLSession:(void *)arg1 dataTask:(void *)arg2 didReceiveResponse:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSURLSession *, NSURLSessionDataTask *, NSURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)URLSession:(void *)arg1 dataTask:(void *)arg2 willCacheResponse:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSURLSession *, NSURLSessionDataTask *, NSCachedURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSCachedURLResponse *, void*

@end
