/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSProxyConnectionStreamTask : NSProxyConnection <NSStreamDelegate, NSURLSessionStreamDelegate> {
    bool  _dataAvailableForReading;
    NSString * _host;
    NSInputStream * _inputStream;
    bool  _isConnected;
    NSOutputStream * _outputStream;
    int  _port;
    NSObject<OS_dispatch_queue> * _queue;
    NSURLSessionStreamTask * _streamTask;
}

@property bool dataAvailableForReading;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSInputStream *inputStream;
@property (retain) NSOutputStream *outputStream;
@property (retain) NSURLSessionStreamTask *streamTask;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)_onConnected:(int)arg1;
- (void)cancel;
- (bool)dataAvailableForReading;
- (void)dealloc;
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4;
- (id)inputStream;
- (id)outputStream;
- (void)read:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)readFromStream;
- (void)setDataAvailableForReading:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInputStream:(id)arg1;
- (void)setOutputStream:(id)arg1;
- (void)setStreamTask:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)streamTask;
- (void)write:(id)arg1 handler:(id /* block */)arg2;

@end