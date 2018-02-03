/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureIrisSinkConfiguration : FigCaptureSinkConfiguration {
    bool  _bravoDualPhotoDeliveryEnabled;
    bool  _depthDataDeliveryEnabled;
    bool  _filterRenderingEnabled;
    int  _movieAutoTrimMethod;
    bool  _movieCaptureEnabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieVideoFrameDuration;
    bool  _optimizesImagesForOfflineVideoStabilization;
    FigCaptureIrisPreparedSettings * _preparedSettings;
    bool  _quadraHighResCaptureEnabled;
}

@property (nonatomic) bool bravoDualPhotoDeliveryEnabled;
@property (nonatomic) bool depthDataDeliveryEnabled;
@property (nonatomic) bool filterRenderingEnabled;
@property (nonatomic) int irisMovieAutoTrimMethod;
@property (nonatomic) bool irisMovieCaptureEnabled;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } irisMovieDuration;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } irisMovieVideoFrameDuration;
@property (nonatomic, retain) FigCaptureIrisPreparedSettings *irisPreparedSettings;
@property (nonatomic) bool optimizesImagesForOfflineVideoStabilization;
@property (nonatomic) bool quadraHighResCaptureEnabled;

- (bool)bravoDualPhotoDeliveryEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (bool)depthDataDeliveryEnabled;
- (id)description;
- (bool)filterRenderingEnabled;
- (id)initWithXPCEncoding:(id)arg1;
- (int)irisMovieAutoTrimMethod;
- (bool)irisMovieCaptureEnabled;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })irisMovieDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })irisMovieVideoFrameDuration;
- (id)irisPreparedSettings;
- (bool)isEqual:(id)arg1;
- (bool)optimizesImagesForOfflineVideoStabilization;
- (bool)quadraHighResCaptureEnabled;
- (void)setBravoDualPhotoDeliveryEnabled:(bool)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setFilterRenderingEnabled:(bool)arg1;
- (void)setIrisMovieAutoTrimMethod:(int)arg1;
- (void)setIrisMovieCaptureEnabled:(bool)arg1;
- (void)setIrisMovieDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setIrisMovieVideoFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setIrisPreparedSettings:(id)arg1;
- (void)setOptimizesImagesForOfflineVideoStabilization:(bool)arg1;
- (void)setQuadraHighResCaptureEnabled:(bool)arg1;
- (int)sinkType;

@end
