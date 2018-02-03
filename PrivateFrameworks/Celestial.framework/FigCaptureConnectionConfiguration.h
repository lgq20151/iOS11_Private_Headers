/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureConnectionConfiguration : NSObject <FigXPCCoding, NSCopying> {
    NSString * _connectionID;
    bool  _enabled;
    unsigned int  _mediaType;
    FigCaptureSinkConfiguration * _sinkConfiguration;
    FigCaptureSourceConfiguration * _sourceConfiguration;
}

@property (nonatomic, copy) NSString *connectionID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) FigCaptureDepthDataSinkConfiguration *depthDataSinkConfiguration;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) FigCaptureIrisSinkConfiguration *irisSinkConfiguration;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic, retain) FigCaptureSinkConfiguration *sinkConfiguration;
@property (nonatomic, retain) FigCaptureSourceConfiguration *sourceConfiguration;
@property (readonly) FigCaptureStillImageSinkConfiguration *stillImageSinkConfiguration;
@property (readonly) Class superclass;
@property (readonly) FigCaptureVideoThumbnailSinkConfiguration *thumbnailSinkConfiguration;
@property (readonly) FigCaptureVideoDataSinkConfiguration *videoDataSinkConfiguration;
@property (readonly) FigCaptureVideoPreviewSinkConfiguration *videoPreviewSinkConfiguration;

- (id)connectionID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)depthDataSinkConfiguration;
- (bool)enabled;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (id)irisSinkConfiguration;
- (bool)isEqual:(id)arg1;
- (unsigned int)mediaType;
- (void)setConnectionID:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setMediaType:(unsigned int)arg1;
- (void)setSinkConfiguration:(id)arg1;
- (void)setSourceConfiguration:(id)arg1;
- (id)sinkConfiguration;
- (id)sourceConfiguration;
- (id)stillImageSinkConfiguration;
- (id)thumbnailSinkConfiguration;
- (id)videoDataSinkConfiguration;
- (id)videoPreviewSinkConfiguration;

@end
