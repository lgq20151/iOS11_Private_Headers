/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {
    struct OpaqueFigAssetWriter { } * _figAssetWriter;
    NSObject<OS_dispatch_queue> * _figAssetWriterAccessQueue;
    AVAssetWriterFigAssetWriterNotificationHandler * _notificationHandler;
    bool  _startSessionCalled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)finalStepWorkaroundOperationWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1;
+ (id)finishWritingDelegateOperationWithAssetWriter:(id)arg1 andFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg2 andDelegate:(id)arg3;
+ (id)prepareInputsOperationsWithInputs:(id)arg1;

- (id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)arg1;
- (struct OpaqueFigAssetWriter { }*)_retainedFigAssetWriter;
- (id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)arg1;
- (void)cancelWriting;
- (void)dealloc;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(bool)arg1 error:(id)arg2;
- (void)endSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)figTrackReferences;
- (void)finalize;
- (void)finishWriting;
- (void)finishWritingWithCompletionHandler:(id /* block */)arg1;
- (id)initWithConfigurationState:(id)arg1;
- (id)initWithConfigurationState:(id)arg1 error:(id*)arg2;
- (void)startSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (long long)status;

@end
