/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSessionTaskTransactionMetrics : NSObject

@property bool _cellular;
@property (copy) NSUUID *_connectionIdentifier;
@property bool _connectionRace;
@property (copy) NSString *_localAddressAndPort;
@property bool _localCache;
@property unsigned int _redirected;
@property (copy) NSString *_remoteAddressAndPort;
@property long long _requestHeaderBytesSent;
@property long long _responseBodyBytesDecoded;
@property long long _responseBodyBytesReceived;
@property long long _responseHeaderBytesReceived;
@property bool _secureConnection;
@property bool _serverPush;
@property (copy) NSDate *connectEndDate;
@property (copy) NSDate *connectStartDate;
@property (copy) NSDate *domainLookupEndDate;
@property (copy) NSDate *domainLookupStartDate;
@property (copy) NSDate *fetchStartDate;
@property (copy) NSString *networkProtocolName;
@property (getter=isProxyConnection) bool proxyConnection;
@property (copy) NSURLRequest *request;
@property (copy) NSDate *requestEndDate;
@property (copy) NSDate *requestStartDate;
@property long long resourceFetchType;
@property (copy) NSURLResponse *response;
@property (copy) NSDate *responseEndDate;
@property (copy) NSDate *responseStartDate;
@property (getter=isReusedConnection) bool reusedConnection;
@property (copy) NSDate *secureConnectionEndDate;
@property (copy) NSDate *secureConnectionStartDate;

- (id)_initWithPerformanceTiming:(struct __PerformanceTiming { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithNoInit;

@end
