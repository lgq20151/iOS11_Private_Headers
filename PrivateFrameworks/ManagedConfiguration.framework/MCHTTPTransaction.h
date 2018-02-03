/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCHTTPTransaction : NSObject <NSURLSessionDataDelegate> {
    NSString * _CMSSignatureHeaderName;
    NSString * _contentType;
    NSURL * _currentURL;
    NSData * _data;
    NSObject<OS_dispatch_semaphore> * _doneSema;
    NSError * _error;
    struct __SecIdentity { } * _identity;
    NSString * _method;
    NSURL * _permanentlyRedirectedURL;
    bool  _rememberData;
    NSURL * _requestURL;
    NSMutableData * _responseData;
    NSURLSession * _session;
    long long  _statusCode;
    double  _timeout;
    NSString * _userAgent;
}

@property (nonatomic, retain) NSString *CMSSignatureHeaderName;
@property (nonatomic, retain) NSString *contentType;
@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *method;
@property (nonatomic, readonly, retain) NSURL *permanentlyRedirectedURL;
@property (nonatomic, readonly, retain) NSData *responseData;
@property (nonatomic, readonly) long long statusCode;
@property (readonly) Class superclass;
@property (nonatomic) double timeout;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) NSString *userAgent;

+ (id)transactionWithURL:(id)arg1 method:(id)arg2;

- (void).cxx_destruct;
- (id)CMSSignatureHeaderName;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_beginTransaction;
- (bool)_shouldAllowTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2;
- (id)contentType;
- (struct __SecIdentity { }*)copyIdentity;
- (id)data;
- (void)dealloc;
- (id)error;
- (id)initWithURL:(id)arg1 method:(id)arg2;
- (id)method;
- (void)performCompletionBlock:(id /* block */)arg1;
- (void)performSynchronously;
- (id)permanentlyRedirectedURL;
- (id)responseData;
- (void)setCMSSignatureHeaderName:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setData:(id)arg1;
- (void)setIdentity:(struct __SecIdentity { }*)arg1;
- (void)setMethod:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (long long)statusCode;
- (double)timeout;
- (id)url;
- (id)userAgent;

@end
