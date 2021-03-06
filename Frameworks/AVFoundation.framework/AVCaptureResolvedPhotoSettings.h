/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureResolvedPhotoSettings : NSObject {
    AVCaptureResolvedPhotoSettingsInternal * _internal;
}

@property (getter=isDualCameraFusionEnabled, readonly) bool dualCameraFusionEnabled;
@property (readonly) struct { int x1; int x2; } embeddedThumbnailDimensions;
@property (readonly) unsigned long long expectedPhotoCount;
@property (getter=isFlashEnabled, readonly) bool flashEnabled;
@property (getter=cam_isRecordingMovieForLivePhoto, nonatomic, readonly) bool isRecordingMovieForLivePhoto;
@property (readonly) struct { int x1; int x2; } livePhotoMovieDimensions;
@property (readonly) struct { int x1; int x2; } photoDimensions;
@property (readonly) struct { int x1; int x2; } previewDimensions;
@property (readonly) struct { int x1; int x2; } rawPhotoDimensions;
@property (getter=isStillImageStabilizationEnabled, readonly) bool stillImageStabilizationEnabled;
@property (readonly) long long uniqueID;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (id)resolvedSettingsWithUniqueID:(long long)arg1 photoDimensions:(struct { int x1; int x2; })arg2 rawPhotoDimensions:(struct { int x1; int x2; })arg3 previewDimensions:(struct { int x1; int x2; })arg4 embeddedThumbnailDimensions:(struct { int x1; int x2; })arg5 livePhotoMovieEnabled:(bool)arg6 livePhotoMovieDimensions:(struct { int x1; int x2; })arg7 turboModeEnabled:(bool)arg8 flashEnabled:(bool)arg9 HDREnabled:(bool)arg10 adjustedPhotoFiltersEnabled:(bool)arg11 EV0PhotoDeliveryEnabled:(bool)arg12 stillImageStabilizationEnabled:(bool)arg13 dualCameraFusionEnabled:(bool)arg14 squareCropEnabled:(bool)arg15 photoManifest:(id)arg16;

- (id)_initWithUniqueID:(long long)arg1 photoDimensions:(struct { int x1; int x2; })arg2 rawPhotoDimensions:(struct { int x1; int x2; })arg3 previewDimensions:(struct { int x1; int x2; })arg4 embeddedThumbnailDimensions:(struct { int x1; int x2; })arg5 livePhotoMovieEnabled:(bool)arg6 livePhotoMovieDimensions:(struct { int x1; int x2; })arg7 turboModeEnabled:(bool)arg8 flashEnabled:(bool)arg9 HDREnabled:(bool)arg10 adjustedPhotoFiltersEnabled:(bool)arg11 EV0PhotoDeliveryEnabled:(bool)arg12 stillImageStabilizationEnabled:(bool)arg13 dualCameraFusionEnabled:(bool)arg14 squareCropEnabled:(bool)arg15 photoManifest:(id)arg16;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (struct { int x1; int x2; })embeddedThumbnailDimensions;
- (unsigned long long)expectedPhotoCount;
- (bool)isAdjustedPhotoFilterRenderingEnabled;
- (bool)isDualCameraFusionEnabled;
- (bool)isEV0PhotoDeliveryEnabled;
- (bool)isFlashEnabled;
- (bool)isHDREnabled;
- (bool)isSquareCropEnabled;
- (bool)isStillImageStabilizationEnabled;
- (bool)isTurboModeEnabled;
- (struct { int x1; int x2; })livePhotoMovieDimensions;
- (bool)livePhotoMovieEnabled;
- (struct { int x1; int x2; })photoDimensions;
- (id)photoManifest;
- (struct { int x1; int x2; })previewDimensions;
- (struct { int x1; int x2; })rawPhotoDimensions;
- (long long)uniqueID;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (bool)cam_isRecordingMovieForLivePhoto;

@end
