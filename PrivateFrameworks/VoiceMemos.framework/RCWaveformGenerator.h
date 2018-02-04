/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCWaveformGenerator : NSObject {
    RCExtAudioFilePipe * _activeExtAudioFile;
    bool  _canceled;
    NSObject<OS_dispatch_semaphore> * _digestPausedSemaphore;
    unsigned long long  _framesConsumedSinceLastFlush;
    long long  _framesNeededForNextDB;
    long long  _framesNeededForNextFlush;
    NSMutableArray * _internalFinishedLoadingBlockUUIDs;
    NSMutableArray * _internalFinishedLoadingBlocks;
    bool  _isSampleRateKnown;
    NSError * _loadingError;
    NSOperationQueue * _loadingQueue;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    long long  _overviewUnitsPerSecond;
    unsigned long long  _pauseCount;
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__first_; 
        } __end_cap_; 
    }  _powerLevelBuffer;
    float  _powerLevelBufferLastPushedValue;
    unsigned long long  _powerLevelsConsumedSinceLastFlush;
    NSObject<OS_dispatch_queue> * _queue;
    struct PowerMeter { 
        bool mInstantaneousMode; 
        double mSampleRate; 
        double mPeakDecay1; 
        double mPeakDecay; 
        double mDecay1; 
        double mDecay; 
        int mPrevBlockSize; 
        int mPeakHoldCount; 
        double mPeak; 
        double mAveragePowerPeak; 
        double mMaxPeak; 
        struct AudioUnitMeterClipping { 
            float peakValueSinceLastCall; 
            unsigned char sawInfinity; 
            unsigned char sawNotANumber; 
        } mClipping; 
        double mAveragePowerF; 
        float m_vAvePower[16]; 
        int mAveragePowerI; 
    }  _samplePowerMeter;
    double  _segmentFlushInterval;
    long long  _state;
    double  _totalDigestedTime;
    double  _totalFlushedTime;
    NSHashTable * _weakObservers;
}

@property (nonatomic, readonly) bool canceled;
@property (nonatomic, readonly) bool finished;
@property (nonatomic, readonly) bool idle;
@property (nonatomic, readonly) bool loadable;
@property (nonatomic) long long overviewUnitsPerSecond;
@property (nonatomic) bool paused;
@property (nonatomic, readonly) double segmentFlushInterval;
@property (nonatomic, readonly) long long state;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_appendAveragePowerLevel:(float)arg1;
- (void)_appendAveragePowerLevelsByDigestingTimeRange:(struct { double x1; double x2; })arg1 inExtAudioFile:(id)arg2 sourceFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg3 outputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg4;
- (void)_appendAveragePowerLevelsByDigestingWaveformSegments:(id)arg1;
- (void)_appendPowerMeterValuesFromDataInAudioFile:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)_appendPowerMeterValuesFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_finishLoadingByTerminating:(bool)arg1 loadingFinishedBlockTimeoutDate:(id)arg2 loadingFinishedBlock:(id /* block */)arg3;
- (bool)_isCanceled;
- (void)_onLoadingQueue_appendPowerMeterValuesFromRawAudioData:(void*)arg1 frameCount:(long long)arg2 format:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg3 isPredigest:(bool)arg4;
- (void)_onLoadingQueue_appendSegment:(id)arg1;
- (void)_onLoadingQueue_digestAveragePowerLevel:(float)arg1;
- (void)_onLoadingQueue_flushRemainingData;
- (void)_onLoadingQueue_flushWaveformSegment:(id)arg1;
- (void)_onLoadingQueue_flushWithNextSegmentWithEndTime:(double)arg1 isPredigest:(bool)arg2;
- (void)_onLoadingQueue_pushAveragePowerLevel:(float)arg1;
- (void)_onQueue_appendAveragePowerLevelsByDigestingTimeRange:(struct { double x1; double x2; })arg1 inExtAudioFile:(id)arg2 sourceFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg3 outputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg4;
- (void)_performInternalFinishedLoadingBlocksAndFinishObservers;
- (void)_performLoadingFinishedBlock:(id /* block */)arg1 internalBlockUUID:(id)arg2 isTimeout:(bool)arg3;
- (void)_performObserversBlock:(id /* block */)arg1;
- (void)addSegmentOutputObserver:(id)arg1;
- (bool)appendAveragePowerLevel:(float)arg1;
- (bool)appendAveragePowerLevelsByDigestingContentsOfAudioFileURL:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)appendAveragePowerLevelsByDigestingSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)appendAveragePowerLevelsByDigestingWaveform:(id)arg1;
- (bool)appendAveragePowerLevelsByDigestingWaveformSegments:(id)arg1;
- (void)beginLoading;
- (bool)canceled;
- (void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)finished;
- (void)flushPendingCapturedSampleBuffers;
- (bool)idle;
- (id)init;
- (id)initWithSamplingParametersFromGenerator:(id)arg1;
- (id)initWithSegmentFlushInterval:(double)arg1;
- (bool)loadable;
- (long long)overviewUnitsPerSecond;
- (bool)paused;
- (void)removeSegmentOutputObserver:(id)arg1;
- (double)segmentFlushInterval;
- (void)setOverviewUnitsPerSecond:(long long)arg1;
- (void)setPaused:(bool)arg1;
- (long long)state;
- (id)synchronouslyApproximateWaveformForAVContentURL:(id)arg1 byReadingCurrentFileAheadTimeRange:(struct { double x1; double x2; })arg2;
- (void)terminateLoadingImmediately;
- (double)totalDigestedTime;
- (double)totalFlushedTime;

@end