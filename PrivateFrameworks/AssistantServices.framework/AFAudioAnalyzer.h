/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAudioAnalyzer : NSObject <Endpointer> {
    struct OpaqueAudioComponentInstance { } * _audioUnitEPVAD2;
    double  _automaticEndpointingSuspensionEndTime;
    bool  _communicatedEndpointDetection;
    bool  _communicatedStartPointDetection;
    double  _delay;
    <AFAudioAnalyzerDelegate> * _delegate;
    bool  _detectedOneShotEndpoint;
    bool  _detectedOneShotStartpoint;
    bool  _detectedRecurrentEndpoint;
    bool  _detectedRecurrentStartpoint;
    double  _endWaitTime;
    int  _endpointMode;
    NSMutableData * _floatSampleBuffer;
    unsigned int  _frameRate;
    bool  _haveSeenNonZeroSamples;
    double  _interspeechWaitTime;
    bool  _isConfigured;
    double  _lastOneShotEndpoint;
    double  _lastOneShotStartpoint;
    double  _lastRecurrentEndpoint;
    double  _lastRecurrentStartpoint;
    double  _minimumDurationForEndpointer;
    NSString * _modelDictPath;
    double  _previousSamplesSeen;
    NSObject<OS_dispatch_queue> * _queue;
    double  _sampleRate;
    double  _samplesSeen;
    bool  _saveSampleSeenInReset;
    double  _startWaitTime;
    long long  _style;
    NSDictionary * _topLevelParameterDict;
    double  _totalSamples;
}

@property (nonatomic) double automaticEndpointingSuspensionEndTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double delay;
@property (nonatomic) <AFAudioAnalyzerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property double endWaitTime;
@property int endpointMode;
@property (readonly) unsigned long long hash;
@property double interspeechWaitTime;
@property (nonatomic, readonly) double lastEndOfVoiceActivityTime;
@property (nonatomic, readonly) double lastStartOfVoiceActivityTime;
@property (nonatomic) double minimumDurationForEndpointer;
@property double startWaitTime;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureWithSampleRate:(double)arg1 andFrameRate:(unsigned int)arg2;
- (void)_detectVoiceActivityInSamples:(float*)arg1 numSamples:(unsigned int)arg2;
- (double)automaticEndpointingSuspensionEndTime;
- (bool)configureWithASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 andFrameRate:(unsigned int)arg2;
- (void)dealloc;
- (double)delay;
- (id)delegate;
- (double)endWaitTime;
- (int)endpointMode;
- (int)getStatus:(struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1;
- (id)init;
- (double)interspeechWaitTime;
- (double)lastEndOfVoiceActivityTime;
- (double)lastStartOfVoiceActivityTime;
- (double)minimumDurationForEndpointer;
- (void)preheat;
- (void)reset;
- (void)saveSamplesSeenOnNextReset;
- (void)setAutomaticEndpointingSuspensionEndTime:(double)arg1;
- (void)setDelay:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndWaitTime:(double)arg1;
- (void)setEndpointMode:(int)arg1;
- (void)setInterspeechWaitTime:(double)arg1;
- (void)setMinimumDurationForEndpointer:(double)arg1;
- (void)setStartWaitTime:(double)arg1;
- (void)setStyle:(long long)arg1;
- (double)startWaitTime;
- (long long)style;

@end