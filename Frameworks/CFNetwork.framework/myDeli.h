/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface myDeli : NSObject <NSURLSessionDelegate> {
    NSError * _errorResult;
    bool  _hasCanceled;
    bool  _receivedResponse;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool hasCanceled;
@property (readonly) unsigned long long hash;
@property bool receivedResponse;
@property (retain) NSError *someError;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)dealloc;
- (bool)hasCanceled;
- (id)init;
- (bool)receivedResponse;
- (void)setHasCanceled:(bool)arg1;
- (void)setReceivedResponse:(bool)arg1;
- (void)setSomeError:(id)arg1;
- (id)someError;

@end
