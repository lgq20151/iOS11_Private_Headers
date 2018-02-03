/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFBackgroundDataTask : __NSCFBackgroundSessionTask <NSStreamDelegate> {
    unsigned long long  _bytesRead;
    bool  _finishedOpen;
    NSInputStream * _initialStream;
    bool  _openedStreamDuringNeedNewBodyStream;
    NSObject<OS_dispatch_io> * _pipeIO;
    NSFileHandle * _readHandle;
    NSInputStream * _requestBodyStream;
    bool  _streamBased;
    NSObject<OS_dispatch_semaphore> * _streamOpenedSema;
    id /* block */  _streamWriteCompletion;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isStreamBased, readonly) bool streamBased;
@property (copy) id /* block */ streamWriteCompletion;
@property (readonly) Class superclass;

- (void)_onqueue_captureStream:(id)arg1;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_didReceiveData:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_onqueue_didReceiveResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_onqueue_finishStream:(bool)arg1;
- (void)_onqueue_invokeStreamWriteCompletion;
- (void)_onqueue_needNewBodyStream:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_onqueue_openStream;
- (void)_onqueue_willBeRetried;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithSession:(id)arg1 remoteSession:(id)arg2 request:(id)arg3 ident:(unsigned long long)arg4;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isStreamBased;
- (void)readFromStream;
- (void)setStreamWriteCompletion:(id /* block */)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id /* block */)streamWriteCompletion;

@end
