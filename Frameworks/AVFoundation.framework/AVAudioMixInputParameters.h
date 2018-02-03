/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying> {
    AVAudioMixInputParametersInternal * _inputParameters;
}

@property (nonatomic, readonly, retain) const struct opaqueMTAudioProcessingTap { }*audioTapProcessor;
@property (nonatomic, readonly, copy) NSString *audioTimePitchAlgorithm;
@property (nonatomic, readonly) int trackID;

- (id)_audioVolumeCurve;
- (void)_setScheduledAudioParameters:(id)arg1;
- (void)_setVolume:(float)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (id)_volumeCurveAsString;
- (const struct opaqueMTAudioProcessingTap { }*)audioTapProcessor;
- (id)audioTimePitchAlgorithm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)effectParameters;
- (void)finalize;
- (bool)getVolumeRampForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg4;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { }*)arg1;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (void)setEffectParameters:(id)arg1;
- (void)setTrackID:(int)arg1;
- (void)setVolume:(float)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (int)trackID;

@end