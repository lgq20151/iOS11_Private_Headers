/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureIrisStillImageSettings : FigCaptureStillImageSettings {
    NSArray * _movieLevelMetadataForOriginalImage;
    int  _movieMode;
    FigCaptureMovieFileRecordingSettings * _movieRecordingSettings;
    NSURL * _movieURLForOriginalImage;
}

@property (nonatomic, copy) NSArray *movieLevelMetadataForOriginalImage;
@property (nonatomic) int movieMode;
@property (nonatomic, copy) FigCaptureMovieFileRecordingSettings *movieRecordingSettings;
@property (nonatomic, copy) NSURL *movieURLForOriginalImage;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)movieLevelMetadataForOriginalImage;
- (int)movieMode;
- (id)movieRecordingSettings;
- (id)movieURLForOriginalImage;
- (void)setMovieLevelMetadataForOriginalImage:(id)arg1;
- (void)setMovieMode:(int)arg1;
- (void)setMovieRecordingSettings:(id)arg1;
- (void)setMovieURLForOriginalImage:(id)arg1;

@end
