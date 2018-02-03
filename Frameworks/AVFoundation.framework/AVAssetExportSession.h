/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetExportSession : NSObject {
    AVAssetExportSessionInternal * _exportSession;
}

@property (nonatomic, readonly, retain) AVAsset *asset;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, copy) NSString *outputFileType;
@property (nonatomic, copy) NSURL *outputURL;
@property (nonatomic, readonly) NSString *presetName;
@property (nonatomic, readonly) float progress;
@property (nonatomic) bool shouldOptimizeForNetworkUse;
@property (nonatomic, readonly) long long status;

+ (id)allExportPresets;
+ (void)determineCompatibilityOfExportPreset:(id)arg1 withAsset:(id)arg2 outputFileType:(id)arg3 completionHandler:(id /* block */)arg4;
+ (long long)estimatedOutputFileLengthForPreset:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 properties:(id)arg3;
+ (id)exportPresetsCompatibleWithAsset:(id)arg1;
+ (id)exportSessionWithAsset:(id)arg1 presetName:(id)arg2;
+ (id)keyPathsForValuesAffectingEstimatedOutputFileLength;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumDurationForPreset:(id)arg1 properties:(id)arg2;

- (void)AVExportSessionExportAsynchronouslyCompletionHandler;
- (id)asset;
- (id)audioMix;
- (id)audioTimePitchAlgorithm;
- (bool)canPerformMultiplePassesOverSourceMediaData;
- (void)cancelExport;
- (id)customVideoCompositor;
- (void)dealloc;
- (id)description;
- (void)determineCompatibleFileTypesWithCompletionHandler:(id /* block */)arg1;
- (id)directoryForTemporaryFiles;
- (id)error;
- (long long)estimatedOutputFileLength;
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)arg1;
- (long long)fileLengthLimit;
- (id)init;
- (id)initWithAsset:(id)arg1 presetName:(id)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxDuration;
- (id)metadata;
- (id)metadataItemFilter;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minVideoFrameDuration;
- (id)outputFileType;
- (id)outputURL;
- (bool)preserveSyncFrames;
- (id)presetName;
- (float)progress;
- (void)setAudioMix:(id)arg1;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (void)setCanPerformMultiplePassesOverSourceMediaData:(bool)arg1;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (void)setFileLengthLimit:(long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadataItemFilter:(id)arg1;
- (void)setMinVideoFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setOutputFileType:(id)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setPreserveSyncFrames:(bool)arg1;
- (void)setShouldOptimizeForNetworkUse:(bool)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setVideoComposition:(id)arg1;
- (void)setVideoFrameRateConversionAlgorithm:(id)arg1;
- (bool)shouldOptimizeForNetworkUse;
- (long long)status;
- (id)supportedFileTypes;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (id)videoComposition;
- (id)videoFrameRateConversionAlgorithm;

@end
