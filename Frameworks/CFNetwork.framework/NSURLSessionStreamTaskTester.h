/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSessionStreamTaskTester : NSObject <NSStreamDelegate, NSURLSessionStreamDelegate> {
    long long  _bytesRead;
    long long  _bytesWritten;
    id /* block */  _completion;
    NSInputStream * _inputStream;
    NSError * _inputStreamError;
    NSOutputStream * _outputStream;
    NSError * _outputStreamError;
    NSObject<OS_dispatch_queue> * _queue;
    NSURLSession * _session;
    NSURLSessionStreamTask * _streamTask;
    struct StreamTaskTestConfig { 
        NSString *host; 
        long long port; 
        NSDictionary *proxyConfig; 
        int connectionType; 
    }  _testConfig;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)cleanupInputStream;
- (void)cleanupOutputStream;
- (void)dealloc;
- (id)initWithTestConfig:(struct StreamTaskTestConfig { id x1; id x2; })arg1;
- (void)resumeWithTestBlock:(id /* block */)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end
