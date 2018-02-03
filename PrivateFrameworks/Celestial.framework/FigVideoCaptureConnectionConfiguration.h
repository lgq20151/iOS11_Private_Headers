/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {
    bool  _cameraIntrinsicMatrixDeliveryEnabled;
    bool  _mirroringEnabled;
    int  _orientation;
    int  _outputFormat;
    int  _outputHeight;
    int  _outputWidth;
    int  _retainedBufferCount;
    int  _videoStabilizationMethod;
}

@property (nonatomic) bool cameraIntrinsicMatrixDeliveryEnabled;
@property (nonatomic) bool mirroringEnabled;
@property (nonatomic) int orientation;
@property (nonatomic) int outputFormat;
@property (nonatomic) int outputHeight;
@property (nonatomic) int outputWidth;
@property (nonatomic) int retainedBufferCount;
@property (nonatomic) int videoStabilizationMethod;

- (bool)cameraIntrinsicMatrixDeliveryEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)mirroringEnabled;
- (int)orientation;
- (int)outputFormat;
- (int)outputHeight;
- (int)outputWidth;
- (int)retainedBufferCount;
- (void)setCameraIntrinsicMatrixDeliveryEnabled:(bool)arg1;
- (void)setMirroringEnabled:(bool)arg1;
- (void)setOrientation:(int)arg1;
- (void)setOutputFormat:(int)arg1;
- (void)setOutputHeight:(int)arg1;
- (void)setOutputWidth:(int)arg1;
- (void)setRetainedBufferCount:(int)arg1;
- (void)setVideoStabilizationMethod:(int)arg1;
- (int)videoStabilizationMethod;

@end
