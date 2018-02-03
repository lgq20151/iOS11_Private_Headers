/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLLocalSessionConnection : __NSCFURLSessionConnection <NSCopying, NSURLAuthenticationChallengeSender> {
    bool  _actuallyTriedCredentialsSuppliedInURL;
    bool  _canSendDidFinishCollectingMetrics;
    bool  _canceled;
    long long  _clientBufferLength;
    bool  _didCheckCredentialsSuppliedInURL;
    bool  _didCheckMixedReplace;
    unsigned int  _didReceiveDataCount;
    unsigned long long  _didReceiveResponseDisposition;
    bool  _isMixedReplace;
    struct URLConnectionLoader { int (**x1)(); struct __CFAllocator {} *x2; int (**x3)(); unsigned char x4; unsigned char x5; struct InterfaceRequiredForLoader {} *x6; id x7; int (*x8)(); int (**x9)(); struct PerformanceTiming {} *x10; id x11; struct RedirectionRecorder {} *x12; unsigned char x13; unsigned char x14; unsigned char x15; id x16; double x17; struct URLProtocol {} *x18; id x19; struct CoreSchedulingSet {} *x20; double x21; double x22; unsigned long long x23; struct ConfigFlags { unsigned int x_24_1_1 : 1; unsigned int x_24_1_2 : 1; unsigned int x_24_1_3 : 1; unsigned int x_24_1_4 : 1; unsigned int x_24_1_5 : 1; unsigned int x_24_1_6 : 1; unsigned int x_24_1_7 : 1; unsigned int x_24_1_8 : 1; } x24; unsigned char x25; unsigned char x26; unsigned char x27; unsigned char x28; unsigned long long x29; unsigned int x30; unsigned char x31; } * _loader;
    /* Warning: unhandled struct encoding: '{SessionConnectionLoadable=^^?qqqq^^?^^?@}' */ struct SessionConnectionLoadable { int (**x1)(); long long x2; long long x3; long long x4; long long x5; int (**x6)(); int (**x7)(); id x8; } * _loaderClient;
    unsigned long long  _maxDataSegmentCoalesceThreshhold;
    unsigned long long  _maxDataSegmentCount;
    long long  _pendingCompletion;
    NSObject<OS_dispatch_data> * _pendingData;
    NSError * _pendingError;
    bool  _sentDidFinishCollectingMetrics;
    NSObject<OS_dispatch_data> * _sniffData;
    NSURLResponse * _sniffResponse;
    int  _state;
    long long  _suspended;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_ackBytes:(long long)arg1;
- (void)_captureTCPIOConnection:(struct shared_ptr<TCPIOConnection> { struct TCPIOConnection {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)_capturedSocketInputStream:(id)arg1 outputStream:(id)arg2;
- (void)_cleanup;
- (void)_conditionalRequirementsChanged:(bool)arg1;
- (void)_connectionIsWaitingWithReason:(long long)arg1;
- (void)_didFinishWithError:(id)arg1;
- (void)_didReceiveChallenge:(id)arg1;
- (void)_didReceiveConnectionCacheKey:(struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct shared_ptr<NetworkProxy> { struct NetworkProxy {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; struct shared_ptr<const __CFString> { struct __CFString {} *x_12_1_1; struct __shared_weak_count {} *x_12_1_2; } x12; int x13; int x14; }*)arg1;
- (void)_didReceiveData:(id)arg1;
- (void)_didReceiveResponse:(id)arg1 sniff:(bool)arg2;
- (void)_didSendBodyData:(struct UploadProgressInfo { long long x1; long long x2; long long x3; })arg1;
- (void)_didSendMetrics;
- (void)_immediatePostDelegateTick;
- (void)_needConnectedSocketToHost:(id)arg1 port:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_needNewBodyStream;
- (bool)_needSendingMetrics;
- (void)_redirectRequest:(id)arg1 redirectResponse:(id)arg2 completion:(id /* block */)arg3;
- (void)_task_sendFinish;
- (void)_tick;
- (void)_tick_finishing;
- (void)_tick_initialize;
- (void)_tick_running;
- (void)_tick_sniffNow;
- (void)_willSendRequestForEstablishedConnection:(id)arg1 completion:(id /* block */)arg2;
- (void)afterDelegateWithTick:(id /* block */)arg1;
- (void)cancel;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)dealloc;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)resume;
- (void)setBytesPerSecondLimit:(long long)arg1;
- (void)setIsDownload:(bool)arg1;
- (void)setPoolPriority:(long long)arg1;
- (void)setPriorityHint:(float)arg1;
- (void)suspend;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)withDelegateAndPendingCompletion:(id /* block */)arg1;
- (void)withLoaderAsync:(id /* block */)arg1;
- (void)withLoaderOnQueue:(id /* block */)arg1;

@end
