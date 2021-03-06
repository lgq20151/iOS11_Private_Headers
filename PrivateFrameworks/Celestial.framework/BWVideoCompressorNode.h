/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVideoCompressorNode : BWNode {
    bool  _bFrameEncodingAllowed;
    double  _bFrameEncodingAllowedAtHigherPressureStopTime;
    double  _bFrameEncodingAllowedAtHigherPressureTimeLimit;
    bool  _bFrameEncodingRequested;
    NSObject<OS_dispatch_semaphore> * _backPressureSemaphore;
    int  _backPressureSemaphoreInitialValue;
    struct OpaqueVTCompressionSession { } * _compressionSession;
    NSDictionary * _compressionSettings;
    bool  _didPrepareToEncode;
    NSObject<OS_dispatch_queue> * _emitterQueue;
    bool  _flushRequestReceived;
    float  _maxVideoFrameRate;
    bool  _nextFrameEncodeAsKeyFrame;
    int  _nonBFrameAverageBitRate;
    int  _powerPressureLevel;
    int  _powerPressureNotificationToken;
    bool  _shouldAttachDebugSEI;
    bool  _sourceIsHDResolution;
    unsigned int  _sourcePixelFormatType;
    NSObject<OS_dispatch_queue> * _thermalAndPowerNotificationQueue;
    int  _thermalPressureLevel;
    int  _thermalPressureNotificationToken;
}

+ (id)_formatRequirementsForCompressionSettings:(id)arg1 maxVideoFrameRate:(float)arg2 retainedBufferCountHint:(int*)arg3;
+ (void)initialize;

- (void)_cleanCompressor;
- (void)_registerForThermalAndPowerNotifications;
- (void)_signalBackPressureSemaphore;
- (void)_updatePowerPressureLevel;
- (void)_updateThermalPressureLevel;
- (void)_validateBFrameEncodingAbility;
- (id)backPressureSemaphore;
- (id)compressionSettings;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithCompressionSettings:(id)arg1 maxVideoFrameRate:(float)arg2 backPressureSemaphoreInitialValue:(int)arg3;
- (void)insertKeyFrame;
- (void)makeCurrentConfigurationLive;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)prepareForVideoCompression;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setCompressionSettings:(id)arg1;

@end
