/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARImageData : NSObject <ARSensorData, NSCopying, NSSecureCoding> {
    float  _ISO;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _cameraIntrinsics;
    long long  _cameraPosition;
    NSDate * _captureDate;
    long long  _captureFramesPerSecond;
    AVDepthData * _depthData;
    double  _depthDataTimestamp;
    double  _exposureDuration;
    float  _exposureTargetOffset;
    ARFaceData * _faceData;
    struct __CVBuffer { } * _pixelBuffer;
    bool  _pixelBufferIsMirrored;
    long long  _renderFramesPerSecond;
    bool  _shouldRestrictFrameRate;
    float  _temperature;
    double  _timestamp;
    float  _tint;
}

@property (nonatomic) float ISO;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } cameraIntrinsics;
@property (nonatomic) long long cameraPosition;
@property (nonatomic, retain) NSDate *captureDate;
@property (nonatomic) long long captureFramesPerSecond;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) AVDepthData *depthData;
@property (nonatomic) double depthDataTimestamp;
@property (readonly, copy) NSString *description;
@property (nonatomic) double exposureDuration;
@property (nonatomic) float exposureTargetOffset;
@property (nonatomic, retain) ARFaceData *faceData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageResolution;
@property (nonatomic) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic) bool pixelBufferIsMirrored;
@property (nonatomic) long long renderFramesPerSecond;
@property (nonatomic) bool shouldRestrictFrameRate;
@property (readonly) Class superclass;
@property (nonatomic) float temperature;
@property (nonatomic) double timestamp;
@property (nonatomic) float tint;

+ (id)captureDateFromPresentationTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 session:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)ISO;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraIntrinsics;
- (long long)cameraPosition;
- (id)captureDate;
- (long long)captureFramesPerSecond;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)depthData;
- (double)depthDataTimestamp;
- (void)encodeWithCoder:(id)arg1;
- (double)exposureDuration;
- (float)exposureTargetOffset;
- (id)faceData;
- (struct CGSize { double x1; double x2; })imageResolution;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 captureFramePerSecond:(long long)arg2 renderFramePerSecond:(long long)arg3 captureDevice:(id)arg4 captureSession:(id)arg5;
- (struct __CVBuffer { }*)pixelBuffer;
- (bool)pixelBufferIsMirrored;
- (long long)renderFramesPerSecond;
- (void)setCameraIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setCameraPosition:(long long)arg1;
- (void)setCaptureDate:(id)arg1;
- (void)setCaptureFramesPerSecond:(long long)arg1;
- (void)setDepthData:(id)arg1;
- (void)setDepthDataTimestamp:(double)arg1;
- (void)setExposureDuration:(double)arg1;
- (void)setExposureTargetOffset:(float)arg1;
- (void)setFaceData:(id)arg1;
- (void)setISO:(float)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setPixelBufferIsMirrored:(bool)arg1;
- (void)setRenderFramesPerSecond:(long long)arg1;
- (void)setShouldRestrictFrameRate:(bool)arg1;
- (void)setTemperature:(float)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTint:(float)arg1;
- (bool)shouldRestrictFrameRate;
- (float)temperature;
- (double)timestamp;
- (float)tint;

@end
