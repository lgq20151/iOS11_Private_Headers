/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolNetworkResponse : RWIProtocolJSONObject

@property (nonatomic, retain) RWIProtocolNetworkHeaders *headers;
@property (nonatomic, copy) NSString *headersText;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, retain) RWIProtocolNetworkHeaders *requestHeaders;
@property (nonatomic, copy) NSString *requestHeadersText;
@property (nonatomic) long long source;
@property (nonatomic) double status;
@property (nonatomic, copy) NSString *statusText;
@property (nonatomic, retain) RWIProtocolNetworkResourceTiming *timing;
@property (nonatomic, copy) NSString *url;

- (id)headers;
- (id)headersText;
- (id)initWithUrl:(id)arg1 status:(double)arg2 statusText:(id)arg3 headers:(id)arg4 mimeType:(id)arg5 source:(long long)arg6;
- (id)mimeType;
- (id)requestHeaders;
- (id)requestHeadersText;
- (void)setHeaders:(id)arg1;
- (void)setHeadersText:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setRequestHeaders:(id)arg1;
- (void)setRequestHeadersText:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setStatus:(double)arg1;
- (void)setStatusText:(id)arg1;
- (void)setTiming:(id)arg1;
- (void)setUrl:(id)arg1;
- (long long)source;
- (double)status;
- (id)statusText;
- (id)timing;
- (id)url;

@end
