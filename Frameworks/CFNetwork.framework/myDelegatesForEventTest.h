/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface myDelegatesForEventTest : NSObject <NSStreamDelegate, NSURLSessionTaskDelegate> {
    bool  _eventRec;
    NSInputStream * _inStream;
    NSError * _inputStreamError;
    NSOutputStream * _outStream;
    NSError * _outputStreamError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSError *inputStreamError;
@property (retain) NSError *outputStreamError;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)closeStreams;
- (void)dealloc;
- (id)inputStreamError;
- (id)outputStreamError;
- (void)setInputStreamError:(id)arg1;
- (void)setOutputStreamError:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end
