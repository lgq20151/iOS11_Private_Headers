/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureStillImageOutput : AVCaptureOutput {
    AVCaptureStillImageOutputInternal * _internal;
}

@property (nonatomic) bool automaticallyEnablesStillImageStabilizationWhenAvailable;
@property (nonatomic, readonly) NSArray *availableImageDataCVPixelFormatTypes;
@property (nonatomic, readonly) NSArray *availableImageDataCodecTypes;
@property (getter=isCapturingStillImage, readonly) bool capturingStillImage;
@property (getter=isHighResolutionStillImageOutputEnabled, nonatomic) bool highResolutionStillImageOutputEnabled;
@property (nonatomic, copy) NSDictionary *outputSettings;
@property (getter=isStillImageStabilizationActive, nonatomic, readonly) bool stillImageStabilizationActive;
@property (getter=isStillImageStabilizationSupported, nonatomic, readonly) bool stillImageStabilizationSupported;

+ (struct __CFDictionary { }*)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
+ (void)initialize;
+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer { }*)arg1;
+ (id)jpegStillImageNSDataRepresentationForSurface:(struct __IOSurface { }*)arg1 size:(unsigned long long)arg2 metadata:(id)arg3;
+ (unsigned long long)maxStillImageJPEGDataSize;
+ (id)new;

- (long long)HDRMode;
- (bool)_bracketedSettingsAreValid:(id)arg1 fromConnection:(id)arg2 exceptionReason:(id*)arg3;
- (id)_figCaptureStillImageSettingsForBracketedCaptureSettingsArray:(id)arg1 fromConnection:(id)arg2;
- (id)_figCaptureStillImageSettingsForConnection:(id)arg1;
- (bool)_preparedForBracketedCaptureWithSettings:(id)arg1;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(bool)arg1;
- (void)_updateLensStabilizationDuringBracketedCaptureSupportedForDevice:(id)arg1;
- (void)_updateMaxBracketedStillImageCaptureCountForSourceFormat:(id)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (bool)automaticallyEnablesStillImageStabilizationWhenAvailable;
- (id)availableImageDataCVPixelFormatTypes;
- (id)availableImageDataCodecTypes;
- (bool)canAddConnectionForMediaType:(id)arg1;
- (void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)captureStillImageBracketAsynchronouslyFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearPreparedBracketIfNeeded;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)firstActiveConnection;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)handleNotificationForPrepareRequest:(id)arg1 withPayload:(id)arg2;
- (void)handleNotificationForRequest:(id)arg1 withPayload:(id)arg2 imageIsEV0:(bool*)arg3;
- (bool)highResolutionStillImageOutputEnabledChangeCausesCaptureSessionRestart;
- (unsigned int)imageDataFormatType;
- (id)init;
- (bool)isCapturingStillImage;
- (bool)isEV0CaptureEnabled;
- (bool)isHDRSupported;
- (bool)isHighResolutionStillImageOutputEnabled;
- (bool)isLensStabilizationDuringBracketedCaptureEnabled;
- (bool)isLensStabilizationDuringBracketedCaptureSupported;
- (bool)isNoiseReductionEnabled;
- (bool)isRawCaptureEnabled;
- (bool)isRawCaptureSupported;
- (bool)isStillImageStabilizationActive;
- (bool)isStillImageStabilizationSupported;
- (unsigned long long)maxBracketedCaptureStillImageCount;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputSettings;
- (struct CGSize { double x1; double x2; })outputSizeForSourceFormat:(id)arg1;
- (void)prepareToCaptureStillImageBracketFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })previewImageSize;
- (void)removeConnection:(id)arg1;
- (bool)resumeVideoProcessing;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)setAutomaticallyEnablesStillImageStabilizationWhenAvailable:(bool)arg1;
- (void)setEV0CaptureEnabled:(bool)arg1;
- (void)setHDRMode:(long long)arg1;
- (void)setHighResolutionStillImageOutputEnabled:(bool)arg1;
- (void)setLensStabilizationDuringBracketedCaptureEnabled:(bool)arg1;
- (void)setNoiseReductionEnabled:(bool)arg1;
- (void)setOutputSettings:(id)arg1;
- (void)setPreviewImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRawCaptureEnabled:(bool)arg1;
- (void)setShutterSound:(unsigned int)arg1;
- (void)setSquareCropEnabled:(bool)arg1;
- (void)setSuspendsVideoProcessingDuringStillImageCapture:(bool)arg1;
- (unsigned int)shutterSound;
- (bool)squareCropEnabled;
- (bool)suspendsVideoProcessingDuringStillImageCapture;
- (void)updateSISSupportedForSourceDevice:(id)arg1;

@end
