/* made by EzioChiu.
 */

@protocol IKNetworkRequestRecord <NSObject>

@required

- (void)dataReceived:(NSData *)arg1 withIdentifier:(NSString *)arg2;
- (NSString *)frameId;
- (NSString *)loaderId;
- (void)loadingCompletedFromCacheWithResponseBody:(NSData *)arg1 mimeType:(NSString *)arg2 resourceType:(unsigned long long)arg3 forIdentifier:(NSString *)arg4;
- (void)loadingCompletedWithResponseBody:(NSData *)arg1 forIdentifier:(NSString *)arg2;
- (void)loadingError:(NSError *)arg1 withIdentifier:(NSString *)arg2;
- (void)request:(NSURLRequest *)arg1 willBeSentWithIdentifier:(NSString *)arg2;
- (void)responseReceived:(NSHTTPURLResponse *)arg1 timingData:(NSDictionary *)arg2 resourceType:(unsigned long long)arg3 withIdentifier:(NSString *)arg4;
- (void)setFrameId:(NSString *)arg1;

@end
