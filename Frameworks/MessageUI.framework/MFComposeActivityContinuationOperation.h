/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeActivityContinuationOperation : NSOperation <NSStreamDelegate> {
    <MFComposeActivityContinuationOperationDelegate> * _delegate;
    bool  _doneWithInputStream;
    bool  _doneWithOutputStream;
    unsigned long long  _draftBytesReceived;
    NSData * _draftData;
    unsigned long long  _draftDataByteIndex;
    unsigned long long  _draftExpectedSize;
    bool  _executing;
    bool  _finished;
    NSInputStream * _inputStream;
    NSOutputStream * _outputStream;
    NSObject<OS_dispatch_queue> * _streamHandlerQueue;
    unsigned long long  _transmissionType;
}

@property (nonatomic, readonly) unsigned long long bytesExpected;
@property (nonatomic, readonly) unsigned long long bytesReceived;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFComposeActivityContinuationOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *draftData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transmissionType;

+ (id)receivingOperationWithInputStream:(id)arg1 outputStream:(id)arg2;
+ (id)sendingOperationWithDraftData:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3;

- (void)_checkInContinuationStream:(id)arg1;
- (void)_commonContinuationStreamInitializationWithStream:(id)arg1;
- (void)_commonContinuationStreamTeardownWithStream:(id*)arg1;
- (void)_complete;
- (void)_didFinishTransferringContinuationPayload;
- (void)_failedToTransferContinuationPayload;
- (void)_finishReceivingContinuationDataAndCloseStream;
- (void)_handleErrorCode:(unsigned long long)arg1 logString:(id)arg2;
- (void)_receivingDataStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_receivingMessageStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_sendingDataStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_sendingMessageStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_setExecuting:(bool)arg1;
- (void)_setFinished:(bool)arg1;
- (void)_startContinuationStreams;
- (unsigned long long)bytesExpected;
- (unsigned long long)bytesReceived;
- (void)dealloc;
- (id)delegate;
- (id)draftData;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setDelegate:(id)arg1;
- (void)setDraftData:(id)arg1;
- (void)setTransmissionType:(unsigned long long)arg1;
- (void)start;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (unsigned long long)transmissionType;

@end
