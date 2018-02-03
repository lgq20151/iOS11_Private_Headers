/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSessionTaskTransactionMetrics : NSURLSessionTaskTransactionMetrics <NSSecureCoding> {
    bool  __cellular;
    NSUUID * __connectionIdentifier;
    bool  __connectionRace;
    NSString * __localAddressAndPort;
    bool  __localCache;
    unsigned int  __redirected;
    NSString * __remoteAddressAndPort;
    long long  __requestHeaderBytesSent;
    long long  __responseBodyBytesDecoded;
    long long  __responseBodyBytesReceived;
    long long  __responseHeaderBytesReceived;
    bool  __secureConnection;
    bool  __serverPush;
    NSDate * _connectEndDate;
    NSDate * _connectStartDate;
    NSDate * _domainLookupEndDate;
    NSDate * _domainLookupStartDate;
    NSDate * _fetchStartDate;
    NSString * _networkProtocolName;
    bool  _proxyConnection;
    NSURLRequest * _request;
    NSDate * _requestEndDate;
    NSDate * _requestStartDate;
    long long  _resourceFetchType;
    NSURLResponse * _response;
    NSDate * _responseEndDate;
    NSDate * _responseStartDate;
    bool  _reusedConnection;
    NSDate * _secureConnectionEndDate;
    NSDate * _secureConnectionStartDate;
}

+ (bool)supportsSecureCoding;

- (bool)_cellular;
- (id)_connectionIdentifier;
- (bool)_connectionRace;
- (id)_initWithPerformanceTiming:(struct __PerformanceTiming { }*)arg1;
- (id)_localAddressAndPort;
- (bool)_localCache;
- (unsigned int)_redirected;
- (id)_remoteAddressAndPort;
- (long long)_requestHeaderBytesSent;
- (long long)_responseBodyBytesDecoded;
- (long long)_responseBodyBytesReceived;
- (long long)_responseHeaderBytesReceived;
- (bool)_secureConnection;
- (bool)_serverPush;
- (id)connectEndDate;
- (id)connectStartDate;
- (void)dealloc;
- (id)description;
- (id)domainLookupEndDate;
- (id)domainLookupStartDate;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchStartDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isProxyConnection;
- (bool)isReusedConnection;
- (id)networkProtocolName;
- (id)request;
- (id)requestEndDate;
- (id)requestStartDate;
- (long long)resourceFetchType;
- (id)response;
- (id)responseEndDate;
- (id)responseStartDate;
- (id)secureConnectionEndDate;
- (id)secureConnectionStartDate;
- (void)setConnectEndDate:(id)arg1;
- (void)setConnectStartDate:(id)arg1;
- (void)setDomainLookupEndDate:(id)arg1;
- (void)setDomainLookupStartDate:(id)arg1;
- (void)setFetchStartDate:(id)arg1;
- (void)setNetworkProtocolName:(id)arg1;
- (void)setProxyConnection:(bool)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestEndDate:(id)arg1;
- (void)setRequestStartDate:(id)arg1;
- (void)setResourceFetchType:(long long)arg1;
- (void)setResponse:(id)arg1;
- (void)setResponseEndDate:(id)arg1;
- (void)setResponseStartDate:(id)arg1;
- (void)setReusedConnection:(bool)arg1;
- (void)setSecureConnectionEndDate:(id)arg1;
- (void)setSecureConnectionStartDate:(id)arg1;
- (void)set_cellular:(bool)arg1;
- (void)set_connectionIdentifier:(id)arg1;
- (void)set_connectionRace:(bool)arg1;
- (void)set_localAddressAndPort:(id)arg1;
- (void)set_localCache:(bool)arg1;
- (void)set_redirected:(unsigned int)arg1;
- (void)set_remoteAddressAndPort:(id)arg1;
- (void)set_requestHeaderBytesSent:(long long)arg1;
- (void)set_responseBodyBytesDecoded:(long long)arg1;
- (void)set_responseBodyBytesReceived:(long long)arg1;
- (void)set_responseHeaderBytesReceived:(long long)arg1;
- (void)set_secureConnection:(bool)arg1;
- (void)set_serverPush:(bool)arg1;

@end
