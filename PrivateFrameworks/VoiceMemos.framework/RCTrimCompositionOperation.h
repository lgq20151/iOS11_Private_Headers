/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCTrimCompositionOperation : RCTrimTimeRangeOperation {
    NSURL * _destinationComposedAVURL;
    double  _durationOfFragmentsBeingTrimmed;
    NSError * _error;
    double  _exportedDuration;
    double  _lastPostedProgress;
    NSObject<OS_dispatch_queue> * _serialQueue;
    RCComposition * _sourceComposition;
    NSOperationQueue * _subOperationQueue;
    double  _subTaskProgressAmounts;
    bool  _success;
    RCTrimAudioFileOperation * _trimAudioFileSubOperation;
}

@property (nonatomic, readonly, copy) NSURL *destinationComposedAVURL;
@property (nonatomic, readonly, copy) RCComposition *sourceComposition;

+ (id)_intermediateTrimmedAVOutputURLForFragment:(id)arg1;
+ (id)_intermediateTrimmedWaveformURLForFragment:(id)arg1;

- (void).cxx_destruct;
- (bool)_isSaveToCopyOperation;
- (void)_performSyncOnSerialQueue:(id /* block */)arg1;
- (void)cancel;
- (id)destinationComposedAVURL;
- (id)error;
- (double)exportedDuration;
- (id)initWithSourceComposition:(id)arg1 destinationComposedAVURL:(id)arg2 timeRange:(struct { double x1; double x2; })arg3 trimMode:(long long)arg4;
- (void)main;
- (id)performTrimOnComposedAVURLWithDestinationComposition:(id)arg1;
- (id)performTrimOnFragmentsWithDestinationComposition:(id)arg1;
- (double)progress;
- (id)sourceComposition;
- (bool)success;

@end