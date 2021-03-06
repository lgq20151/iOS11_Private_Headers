/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageDisparityNode : BWNode {
    bool  _attachesFaceLandmarksToOutputSampleBuffer;
    BWNodeInput * _bravoHDRInput;
    NSDictionary * _cameraInfoByPortType;
    FigCaptureStillImageSettings * _currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings * _currentResolvedStillImageCaptureSettings;
    int  _deliveredDisparityCount;
    struct opaqueCMFormatDescription { } * _disparityFormatDescription;
    FigDisparityGenerator * _disparityGenerator;
    unsigned long long  _disparityMapHeight;
    unsigned long long  _disparityMapWidth;
    bool  _emitWideFrame;
    BWNodeError * _errorForTele;
    BWNodeError * _errorForWide;
    int  _expectedDisparityCount;
    NSObject<OS_dispatch_queue> * _landmarkDetectionQueue;
    BWVisionLandmarkDetector * _landmarkDetector;
    NSObject<OS_dispatch_group> * _pendingLandmarkDetectionGroup;
    int  _processingMode;
    bool  _shouldComputeDisparityWhenCalibrationFails;
    struct opaqueCMSampleBuffer { } * _teleHDRSbuf;
    struct opaqueCMSampleBuffer { } * _teleSbuf;
    BWNodeInput * _telephotoInput;
    NSDictionary * _telephotoSensorIDDictionary;
    BWNodeInput * _wideInput;
    struct opaqueCMSampleBuffer { } * _wideSbuf;
}

@property (nonatomic) bool attachesFaceLandmarksToOutputSampleBuffer;
@property (nonatomic, readonly) BWNodeInput *bravoHDRInput;
@property (nonatomic, readonly) BWNodeInput *telephotoInput;
@property (nonatomic, readonly) BWNodeInput *wideInput;

+ (void)initialize;

- (int)_OSStatusFromDisparityResult:(int)arg1;
- (void)_asynchronouslyComputeLandmarksForTeleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 attachToOutputBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)_clearCaptureRequestState;
- (void)_computeDisparityForTeleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 wideBuffer:(struct opaqueCMSampleBuffer { }*)arg2 attachToOutputBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (void)_finishPendingProcessing;
- (void)_handleError:(int)arg1 duringProcessingOfSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromInput:(id)arg3;
- (int)_loadAndConfigureDisparityGenerator;
- (void)_processBuffersForDisparityAndLandmarksIfNecessary;
- (void)_resolveProcessingMode;
- (bool)attachesFaceLandmarksToOutputSampleBuffer;
- (bool)attachesInputBracketToOutputSampleBuffer;
- (id)bravoHDRInput;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithTelephotoSensorIDDictionary:(id)arg1 cameraInfoByPortType:(id)arg2 disparityMapWidth:(unsigned long long)arg3 disparityMapHeight:(unsigned long long)arg4;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)prewarmLandmarkDetectorIfNecessary;
- (id)processorOptionsDictionary;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAttachesFaceLandmarksToOutputSampleBuffer:(bool)arg1;
- (void)setAttachesInputBracketToOutputSampleBuffer:(bool)arg1;
- (void)setShouldComputeDisparityWhenCalibrationFails:(bool)arg1;
- (bool)shouldComputeDisparityWhenCalibrationFails;
- (id)telephotoInput;
- (id)wideInput;

@end
