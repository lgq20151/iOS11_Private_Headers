/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCapturePhotoBracketSettings : AVCapturePhotoSettings {
    AVCapturePhotoBracketSettingsInternal * _bracketSettingsInternal;
}

@property (nonatomic, readonly) NSArray *bracketedSettings;
@property (getter=isLensStabilizationEnabled, nonatomic) bool lensStabilizationEnabled;

+ (id)photoBracketSettingsWithRawPixelFormatType:(unsigned int)arg1 processedFormat:(id)arg2 bracketedSettings:(id)arg3;
+ (id)photoBracketSettingsWithRawPixelFormatType:(unsigned int)arg1 rawFileType:(id)arg2 processedFormat:(id)arg3 processedFileType:(id)arg4 bracketedSettings:(id)arg5;

- (id)_initWithFormat:(id)arg1 processedFileType:(id)arg2 rawPixelFormatType:(unsigned int)arg3 rawFileType:(id)arg4 bracketedSettings:(id)arg5 uniqueID:(long long)arg6 exceptionReason:(id*)arg7;
- (id)bracketedSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (bool)isLensStabilizationEnabled;
- (void)setAutoDualCameraFusionEnabled:(bool)arg1;
- (void)setAutoStillImageStabilizationEnabled:(bool)arg1;
- (void)setEV0PhotoDeliveryEnabled:(bool)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setHDRMode:(long long)arg1;
- (void)setLensStabilizationEnabled:(bool)arg1;
- (void)setLivePhotoMovieFileURL:(id)arg1;
- (void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1;
- (void)setLivePhotoMovieMetadata:(id)arg1;
- (void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1;

@end
