/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditProtoSettings : PXSettings {
    bool  _allowAnyPlugin;
    bool  _autoCropEnabled;
    bool  _cropMaskBlurred;
    double  _cropRecomposeDelay;
    double  _cropSideMargins;
    double  _cropWheelSize;
    bool  _livePhotoTrimAllowed;
    double  _minimumLivePhotoTrimDuration;
    bool  _previewOriginalAllowsLongPress;
    double  _previewOriginalDuration;
    bool  _previewOriginalTimesOut;
    long long  _renderPriority;
    bool  _showLevelIndicator;
    bool  _showResetToolButton;
    bool  _simulateDownload;
    bool  _simulateDownloadFailure;
}

@property (nonatomic) bool allowAnyPlugin;
@property (nonatomic) bool autoCropEnabled;
@property (nonatomic) bool cropMaskBlurred;
@property (nonatomic) double cropRecomposeDelay;
@property (nonatomic) double cropSideMargins;
@property (nonatomic) double cropWheelSize;
@property (nonatomic) bool livePhotoTrimAllowed;
@property (nonatomic) double minimumLivePhotoTrimDuration;
@property (nonatomic) bool previewOriginalAllowsLongPress;
@property (nonatomic) double previewOriginalDuration;
@property (nonatomic) bool previewOriginalTimesOut;
@property (nonatomic) long long renderPriority;
@property (nonatomic) bool showLevelIndicator;
@property (nonatomic) bool showResetToolButton;
@property (nonatomic) bool simulateDownload;
@property (nonatomic) bool simulateDownloadFailure;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)allowAnyPlugin;
- (bool)autoCropEnabled;
- (bool)cropMaskBlurred;
- (double)cropRecomposeDelay;
- (double)cropSideMargins;
- (double)cropWheelSize;
- (bool)livePhotoTrimAllowed;
- (double)minimumLivePhotoTrimDuration;
- (id)parentSettings;
- (bool)previewOriginalAllowsLongPress;
- (double)previewOriginalDuration;
- (bool)previewOriginalTimesOut;
- (long long)renderPriority;
- (void)setAllowAnyPlugin:(bool)arg1;
- (void)setAutoCropEnabled:(bool)arg1;
- (void)setCropMaskBlurred:(bool)arg1;
- (void)setCropRecomposeDelay:(double)arg1;
- (void)setCropSideMargins:(double)arg1;
- (void)setCropWheelSize:(double)arg1;
- (void)setDefaultValues;
- (void)setLivePhotoTrimAllowed:(bool)arg1;
- (void)setMinimumLivePhotoTrimDuration:(double)arg1;
- (void)setPreviewOriginalAllowsLongPress:(bool)arg1;
- (void)setPreviewOriginalDuration:(double)arg1;
- (void)setPreviewOriginalTimesOut:(bool)arg1;
- (void)setRenderPriority:(long long)arg1;
- (void)setShowLevelIndicator:(bool)arg1;
- (void)setShowResetToolButton:(bool)arg1;
- (void)setSimulateDownload:(bool)arg1;
- (void)setSimulateDownloadFailure:(bool)arg1;
- (bool)showLevelIndicator;
- (bool)showResetToolButton;
- (bool)simulateDownload;
- (bool)simulateDownloadFailure;

@end