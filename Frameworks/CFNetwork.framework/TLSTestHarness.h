/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface TLSTestHarness : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    bool  _clientCertificateRequested;
    NSURLCredential * _clientCertificateSent;
    bool  _enableTLSClientCert;
    bool  _enableTLSPSK;
    bool  _enableTLSTrustChecks;
    struct shared_ptr<__SecTrust> { 
        struct __SecTrust {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _receivedServerTrust;
    struct shared_ptr<TLSServer> { 
        struct TLSServer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _server;
    NSURLSession * _session;
    NSURLSessionConfiguration * _sessionConfig;
    NSMutableDictionary * _socketStreamProperties;
    NSMutableDictionary * _tasks;
}

@property bool clientCertificateRequested;
@property (retain) NSURLCredential *clientCertificateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool enableTLSClientCert;
@property bool enableTLSPSK;
@property bool enableTLSTrustChecks;
@property (readonly) unsigned long long hash;
@property struct shared_ptr<__SecTrust> { struct __SecTrust {} *x1; struct __shared_weak_count {} *x2; } receivedServerTrust;
@property struct shared_ptr<TLSServer> { struct TLSServer {} *x1; struct __shared_weak_count {} *x2; } server;
@property (retain) NSURLSession *session;
@property (retain) NSURLSessionConfiguration *sessionConfig;
@property (retain) NSMutableDictionary *socketStreamProperties;
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *tasks;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (bool)clientCertificateRequested;
- (id)clientCertificateSent;
- (void)dealloc;
- (bool)enableTLSClientCert;
- (bool)enableTLSPSK;
- (bool)enableTLSTrustChecks;
- (id)fetchRequest:(id)arg1;
- (id)initWithServer:(struct shared_ptr<TLSServer> { struct TLSServer {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<__SecTrust> { struct __SecTrust {} *x1; struct __shared_weak_count {} *x2; })receivedServerTrust;
- (struct shared_ptr<TLSServer> { struct TLSServer {} *x1; struct __shared_weak_count {} *x2; })server;
- (id)session;
- (id)sessionConfig;
- (void)setClientCertificateRequested:(bool)arg1;
- (void)setClientCertificateSent:(id)arg1;
- (void)setEnableTLSClientCert:(bool)arg1;
- (void)setEnableTLSPSK:(bool)arg1;
- (void)setEnableTLSTrustChecks:(bool)arg1;
- (void)setReceivedServerTrust:(struct shared_ptr<__SecTrust> { struct __SecTrust {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setServer:(struct shared_ptr<TLSServer> { struct TLSServer {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setSession:(id)arg1;
- (void)setSessionConfig:(id)arg1;
- (void)setSocketStreamProperties:(id)arg1;
- (void)setTasks:(id)arg1;
- (id)socketStreamProperties;
- (id)tasks;

@end
