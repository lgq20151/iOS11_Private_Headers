/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARConfiguration : NSObject <NSCopying> {
    long long  _cameraPosition;
    AVCaptureSession * _customCaptureSession;
    NSArray * _customSensors;
    long long  _latencyFrameCount;
    unsigned long long  _lightEstimation;
    bool  _providesAudioData;
    long long  _worldAlignment;
}

@property (nonatomic) long long cameraPosition;
@property (nonatomic, retain) AVCaptureSession *customCaptureSession;
@property (nonatomic, retain) NSArray *customSensors;
@property (nonatomic) long long latencyFrameCount;
@property (nonatomic) unsigned long long lightEstimation;
@property (getter=isLightEstimationEnabled, nonatomic) bool lightEstimationEnabled;
@property (nonatomic) bool providesAudioData;
@property (nonatomic) long long worldAlignment;

+ (bool)isSupported;
+ (id)recordingConfigurationWithConfiguration:(id)arg1 recordingTechnique:(id*)arg2;
+ (id)recordingConfigurationWithConfiguration:(id)arg1 recordingTechnique:(id*)arg2 fileURL:(id)arg3;

- (void).cxx_destruct;
- (id)_descriptionWithoutBrackets;
- (long long)cameraPosition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customCaptureSession;
- (id)customSensors;
- (id)description;
- (id)deviceModel;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCameraPosition:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLightEstimationEnabled;
- (long long)latencyFrameCount;
- (long long)latencyFrameCountAdjustedForReplay;
- (unsigned long long)lightEstimation;
- (bool)providesAudioData;
- (void)setCameraPosition:(long long)arg1;
- (void)setCustomCaptureSession:(id)arg1;
- (void)setCustomSensors:(id)arg1;
- (void)setLatencyFrameCount:(long long)arg1;
- (void)setLightEstimation:(unsigned long long)arg1;
- (void)setLightEstimationEnabled:(bool)arg1;
- (void)setProvidesAudioData:(bool)arg1;
- (void)setWorldAlignment:(long long)arg1;
- (id)techniques;
- (long long)worldAlignment;

@end
