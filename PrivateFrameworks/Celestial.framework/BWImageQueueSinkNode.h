/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWImageQueueSinkNode : BWSinkNode {
    NSMutableArray * _bufferIDsInQueue;
    unsigned long long  _enqueuedBufferContextCount;
    struct _EnqueuedBufferContext {} ** _enqueuedBufferContexts;
    unsigned long long  _framesSinceLastHarmonicCompensation;
    NSObject<OS_os_transaction> * _holdingBuffersForClientAssertion;
    struct _CAImageQueue { } * _imageQueue;
    unsigned int  _imageQueueCapacity;
    unsigned long long  _imageQueueCurrentFreeSlots;
    unsigned int  _imageQueueHeight;
    unsigned int  _imageQueueRequiredFreeSlots;
    unsigned int  _imageQueueSlot;
    unsigned int  _imageQueueWidth;
    double  _lastDisplayTime;
    double  _lastFramePTS;
    double  _lateFrameIntervalStartPTS;
    unsigned long long  _numFramesReceived;
    bool  _packed10BitPixelFormatSupported;
    NSMutableArray * _previewPTSHistory;
    struct OpaqueFigSimpleMutex { } * _previewPTSHistoryMutex;
    NSObject<OS_dispatch_queue> * _previewPTSHistoryQueue;
    struct OpaqueFigPreviewSynchronizer { } * _previewSynchronizer;
    <BWImageQueueSinkNodePreviewTapDelegate> * _previewTapDelegate;
    double  _previousFrameDuration;
    bool  _resetPreviewSynchronizerOnNextFrame;
    unsigned long long * _sharedBufferIDs;
    unsigned long long  _sharedSurfaceCount;
    NSMutableArray * _sharedSurfaces;
    bool  _surfaceRegistrationComplete;
    struct OpaqueFigSimpleMutex { } * _surfaceRegistrationMutex;
    int  _syncStrategy;
    bool  _useGlobalIOSurfaces;
}

@property (nonatomic, readonly) struct _CAImageQueue { }*imageQueue;
@property (nonatomic, readonly) unsigned int imageQueueSlot;
@property (nonatomic) <BWImageQueueSinkNodePreviewTapDelegate> *previewTapDelegate;

+ (void)initialize;

- (unsigned long long)_bufferIDForSurface:(struct __IOSurface { }*)arg1;
- (void)_cleanupIOSurfaces;
- (void)_collectUnconsumedBuffersWithReason:(id)arg1;
- (struct _EnqueuedBufferContext { struct opaqueCMSampleBuffer {} *x1; unsigned long long x2; id x3; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x4; void*x5; long long x6; int x7; unsigned int x8; long long x9; }*)_contextForBuffer:(struct opaqueCMSampleBuffer { }*)arg1 node:(id)arg2 bufferId:(unsigned long long)arg3 framePTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (double)_displayTimeSyncedWithFramePTS:(double)arg1;
- (void)_ensureImageQueue;
- (id)_inputFormatRequirements;
- (void)_releaseBufferContext:(struct _EnqueuedBufferContext { struct opaqueCMSampleBuffer {} *x1; unsigned long long x2; id x3; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x4; void*x5; long long x6; int x7; unsigned int x8; long long x9; }*)arg1;
- (void)_storePreviewPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withHostTime:(unsigned long long)arg2;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (bool)hasNonLiveConfigurationChanges;
- (struct _CAImageQueue { }*)imageQueue;
- (unsigned int)imageQueueSlot;
- (id)initWithHFRSupport:(bool)arg1;
- (void)inputConnectionWillBeEnabled;
- (void)makeCurrentConfigurationLive;
- (id)nodeSubType;
- (bool)packed10BitPixelFormatSupported;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })previewPTSAtHostTime:(unsigned long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })previewPTSDisplayedAtHostTime:(unsigned long long)arg1 allowingExtrapolation:(bool)arg2;
- (id)previewTapDelegate;
- (void)registerSurfacesFromSourcePool:(id)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setPacked10BitPixelFormatSupported:(bool)arg1;
- (void)setPreviewTapDelegate:(id)arg1;
- (void)setSyncStrategy:(int)arg1;
- (int)syncStrategy;

@end
