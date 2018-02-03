/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureFileOutput : AVCaptureOutput {
    AVCaptureFileOutputInternal * _fileOutputInternal;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maxRecordedDuration;
@property (nonatomic) long long maxRecordedFileSize;
@property (nonatomic) long long minFreeDiskSpaceLimit;
@property (nonatomic, readonly) NSURL *outputFileURL;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } recordedDuration;
@property (nonatomic, readonly) long long recordedFileSize;
@property (getter=isRecording, nonatomic, readonly) bool recording;

+ (void)initialize;

- (void)dealloc;
- (id)initSubclass;
- (bool)isRecording;
- (bool)isRecordingPaused;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxRecordedDuration;
- (long long)maxRecordedFileSize;
- (long long)minFreeDiskSpaceLimit;
- (id)outputFileURL;
- (void)pauseRecording;
- (bool)pausesRecordingOnInterruption;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })recordedDuration;
- (long long)recordedFileSize;
- (void)resumeRecording;
- (void)setMaxRecordedDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaxRecordedFileSize:(long long)arg1;
- (void)setMinFreeDiskSpaceLimit:(long long)arg1;
- (void)setPausesRecordingOnInterruption:(bool)arg1;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (void)stopRecording;

@end
