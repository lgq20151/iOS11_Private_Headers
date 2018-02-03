/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCapturePhotoOutput : AVCaptureOutput {
    AVCapturePhotoOutputInternal * _internal;
}

@property (nonatomic, readonly) NSArray *availableLivePhotoVideoCodecTypes;
@property (nonatomic, readonly) NSArray *availablePhotoCodecTypes;
@property (nonatomic, readonly) NSArray *availablePhotoFileTypes;
@property (nonatomic, readonly) NSArray *availablePhotoPixelFormatTypes;
@property (nonatomic, readonly) NSArray *availableRawPhotoFileTypes;
@property (nonatomic, readonly) NSArray *availableRawPhotoPixelFormatTypes;
@property (getter=isCameraCalibrationDataDeliverySupported, nonatomic, readonly) bool cameraCalibrationDataDeliverySupported;
@property (getter=isDualCameraDualPhotoDeliveryEnabled, nonatomic) bool dualCameraDualPhotoDeliveryEnabled;
@property (getter=isDualCameraDualPhotoDeliverySupported, nonatomic, readonly) bool dualCameraDualPhotoDeliverySupported;
@property (getter=isDualCameraFusionSupported, nonatomic, readonly) bool dualCameraFusionSupported;
@property (getter=isHighResolutionCaptureEnabled, nonatomic) bool highResolutionCaptureEnabled;
@property (nonatomic, readonly) bool isFlashScene;
@property (nonatomic, readonly) bool isStillImageStabilizationScene;
@property (getter=isLensStabilizationDuringBracketedCaptureSupported, nonatomic, readonly) bool lensStabilizationDuringBracketedCaptureSupported;
@property (getter=isLivePhotoAutoTrimmingEnabled, nonatomic) bool livePhotoAutoTrimmingEnabled;
@property (getter=isLivePhotoCaptureEnabled, nonatomic) bool livePhotoCaptureEnabled;
@property (getter=isLivePhotoCaptureSupported, nonatomic, readonly) bool livePhotoCaptureSupported;
@property (getter=isLivePhotoCaptureSuspended, nonatomic) bool livePhotoCaptureSuspended;
@property (nonatomic, readonly) unsigned long long maxBracketedCapturePhotoCount;
@property (nonatomic, copy) AVCapturePhotoSettings *photoSettingsForSceneMonitoring;
@property (nonatomic, readonly) NSArray *preparedPhotoSettingsArray;
@property (getter=isStillImageStabilizationSupported, nonatomic, readonly) bool stillImageStabilizationSupported;
@property (nonatomic, readonly) NSArray *supportedFlashModes;

+ (id)DNGPhotoDataRepresentationForRawSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
+ (id)JPEGPhotoDataRepresentationForJPEGSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
+ (struct __CFDictionary { }*)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
+ (void)initialize;
+ (unsigned long long)maxLivePhotoDataSize;
+ (struct { int x1; int x2; })maxLivePhotoMovieDimensions;
+ (id)new;
+ (id)validMetadataTopLevelCGImagePropertiesKeys;

- (bool)_HEVCAndHEIFAreAvailableForSourceDevice:(id)arg1;
- (id)_avErrorUserInfoDictionaryForError:(int)arg1 request:(id)arg2 payload:(id)arg3 isOriginalMovie:(bool)arg4;
- (void)_decrementObserverCountForKeyPath:(id)arg1;
- (void)_dispatchFailureCallbacks:(unsigned int)arg1 forRequest:(id)arg2 withError:(id)arg3 cleanupRequest:(bool)arg4;
- (void)_dispatchFailureCallbacksForSettings:(id)arg1 toDelegate:(id)arg2 withError:(id)arg3;
- (id)_errorForFigCaptureSessionNotificationPayloadErrorStatus:(int)arg1 userInfo:(id)arg2;
- (id)_figCaptureIrisPreparedSettingsForRequest:(id)arg1;
- (id)_figCaptureIrisStillImageSettingsForAVCapturePhotoSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3;
- (void)_handleDidCaptureStillImageNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleDidFinishCaptureNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleDidFinishRecordingIrisMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleDidRecordIrisMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_handlePreparationCompleteNotificationWithPayload:(id)arg1 settingsID:(long long)arg2;
- (void)_handleStillImageCompleteNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleWillBeginCaptureNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleWillCaptureStillImageNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_incrementObserverCountForKeyPath:(id)arg1;
- (id)_photoRequestForUniqueID:(long long)arg1;
- (void)_resetLivePhotoCaptureSuspended;
- (void)_resetLivePhotoMovieProcessingSuspended;
- (id)_sanitizedSettingsForSettings:(id)arg1;
- (void)_setIsFlashScene:(bool)arg1 firingKVO:(bool)arg2;
- (void)_setIsHDRScene:(bool)arg1 firingKVO:(bool)arg2;
- (void)_setIsStillImageStabilizationScene:(bool)arg1 firingKVO:(bool)arg2;
- (void)_updateAvailableLivePhotoVideoCodecTypesForSourceDevice:(id)arg1;
- (void)_updateAvailablePhotoCodecTypesForSourceDevice:(id)arg1;
- (void)_updateAvailablePhotoFileTypesForSourceDevice:(id)arg1;
- (void)_updateAvailablePhotoPixelFormatTypesForSourceDevice:(id)arg1;
- (void)_updateAvailableRawPhotoFileTypesForSourceDevice:(id)arg1;
- (void)_updateAvailableRawPhotoPixelFormatTypesForSourceDevice:(id)arg1;
- (void)_updateDepthDataDeliverySupportedForSourceDevice:(id)arg1;
- (void)_updateDualCameraDualPhotoDeliverySupportedForSourceDevice:(id)arg1;
- (void)_updateDualCameraFusionSupportedForSourceDevice:(id)arg1;
- (void)_updateLensStabilizationDuringBracketedCaptureSupportedForSourceDevice:(id)arg1;
- (void)_updateLivePhotoCaptureSupportedForSourceDevice:(id)arg1;
- (void)_updateLivePhotoMovieDimensionsForSourceDevice:(id)arg1;
- (void)_updateMaxBracketedCapturePhotoCountForSourceDevice:(id)arg1;
- (void)_updateOfflineVISSupportedForSourceDevice:(id)arg1;
- (void)_updateSceneMonitoringForSourceDevice:(id)arg1;
- (void)_updateStillImageStabilizationSupportedForSourceDevice:(id)arg1;
- (void)_updateSupportedFlashModesForSourceDevice:(id)arg1;
- (void)_updateSupportedHDRModesForSourceDevice:(id)arg1;
- (void)_updateSupportedPropertiesForSourceDevice:(id)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)availableLivePhotoVideoCodecTypes;
- (id)availablePhotoCodecTypes;
- (id)availablePhotoFileTypes;
- (id)availablePhotoPixelFormatTypes;
- (id)availableRawPhotoFileTypes;
- (id)availableRawPhotoPixelFormatTypes;
- (bool)canAddConnectionForMediaType:(id)arg1;
- (void)capturePhotoWithSettings:(id)arg1 delegate:(id)arg2;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)figCaptureIrisPreparedSettings;
- (id)init;
- (bool)isCameraCalibrationDataDeliverySupported;
- (bool)isDepthDataDeliveryEnabled;
- (bool)isDepthDataDeliverySupported;
- (bool)isDualCameraDualPhotoDeliveryEnabled;
- (bool)isDualCameraDualPhotoDeliverySupported;
- (bool)isDualCameraFusionSupported;
- (bool)isFilterRenderingEnabled;
- (bool)isFlashScene;
- (bool)isHDRScene;
- (bool)isHighResolutionCaptureEnabled;
- (bool)isImageOptimizationForOfflineVideoStabilizationSupported;
- (bool)isLensStabilizationDuringBracketedCaptureSupported;
- (bool)isLivePhotoAutoTrimmingEnabled;
- (bool)isLivePhotoCaptureEnabled;
- (bool)isLivePhotoCaptureSupported;
- (bool)isLivePhotoCaptureSuspended;
- (bool)isLivePhotoMovieProcessingSuspended;
- (bool)isStillImageStabilizationScene;
- (bool)isStillImageStabilizationSupported;
- (struct { int x1; int x2; })livePhotoMovieDimensions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoMovieDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoMovieVideoFrameDuration;
- (unsigned long long)maxBracketedCapturePhotoCount;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)optimizesImagesForOfflineVideoStabilization;
- (id)photoSettingsForSceneMonitoring;
- (id)preparedPhotoSettingsArray;
- (void)removeConnection:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setDualCameraDualPhotoDeliveryEnabled:(bool)arg1;
- (void)setFigCaptureSessionSectionProperty:(struct __CFString { }*)arg1 withHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 settingStateVaribleToNoOnFailure:(bool*)arg3;
- (void)setFilterRenderingEnabled:(bool)arg1;
- (void)setHighResolutionCaptureEnabled:(bool)arg1;
- (void)setLivePhotoAutoTrimmingEnabled:(bool)arg1;
- (void)setLivePhotoCaptureEnabled:(bool)arg1;
- (void)setLivePhotoCaptureSuspended:(bool)arg1;
- (void)setLivePhotoMovieProcessingSuspended:(bool)arg1;
- (void)setOptimizesImagesForOfflineVideoStabilization:(bool)arg1;
- (void)setPhotoSettingsForSceneMonitoring:(id)arg1;
- (void)setPreparedPhotoSettingsArray:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)supportedFlashModes;
- (id)supportedHDRModes;
- (id)supportedPhotoCodecTypesForFileType:(id)arg1;
- (id)supportedPhotoPixelFormatTypesForFileType:(id)arg1;
- (id)supportedRawPhotoPixelFormatTypesForFileType:(id)arg1;
- (void)userInitiatedCaptureRequestAtTime:(unsigned long long)arg1;

@end
