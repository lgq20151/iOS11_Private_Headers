/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureMovieFileRecordingSettings : FigCaptureRecordingSettings {
    NSDictionary * _audioSettings;
    int  _bravoCameraSelectionBehavior;
    bool  _irisRecording;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieFragmentInterval;
    NSArray * _movieLevelMetadata;
    bool  _recordVideoOrientationAndMirroringChanges;
    bool  _sendPreviewIOSurface;
    bool  _videoMirrored;
    int  _videoOrientation;
    NSDictionary * _videoSettings;
}

@property (nonatomic, copy) NSDictionary *audioSettings;
@property (nonatomic) int bravoCameraSelectionBehavior;
@property (getter=isIrisRecording, nonatomic) bool irisRecording;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;
@property (nonatomic, copy) NSArray *movieLevelMetadata;
@property (nonatomic) bool recordVideoOrientationAndMirroringChanges;
@property (nonatomic) bool sendPreviewIOSurface;
@property (nonatomic) bool videoMirrored;
@property (nonatomic) int videoOrientation;
@property (nonatomic, copy) NSDictionary *videoSettings;

+ (bool)supportsSecureCoding;

- (id)audioSettings;
- (int)bravoCameraSelectionBehavior;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isIrisRecording;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (id)movieLevelMetadata;
- (bool)recordVideoOrientationAndMirroringChanges;
- (bool)sendPreviewIOSurface;
- (void)setAudioSettings:(id)arg1;
- (void)setBravoCameraSelectionBehavior:(int)arg1;
- (void)setIrisRecording:(bool)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieLevelMetadata:(id)arg1;
- (void)setRecordVideoOrientationAndMirroringChanges:(bool)arg1;
- (void)setSendPreviewIOSurface:(bool)arg1;
- (void)setVideoMirrored:(bool)arg1;
- (void)setVideoOrientation:(int)arg1;
- (void)setVideoSettings:(id)arg1;
- (bool)videoMirrored;
- (int)videoOrientation;
- (id)videoSettings;

@end
