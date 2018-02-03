/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig> {
    NSDictionary * _VTCleanApertureDictionary;
    NSDictionary * _VTPixelAspectRatioDictionary;
    NSDictionary * _adaptedVideoCompressionProperties;
}

@property (nonatomic, readonly) unsigned int videoCodecType;
@property (nonatomic, readonly) NSDictionary *videoCompressionProperties;
@property (nonatomic, readonly) NSDictionary *videoEncoderSpecification;

+ (bool)_validateVideoCompressionProperties:(id)arg1 againstSupportedPropertyDictionary:(id)arg2 forCodecType:(id)arg3 exceptionReason:(id*)arg4;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
+ (id)eligibleOutputSettingsDictionaryKeys;

- (bool)canFullySpecifyOutputFormatReturningReason:(id*)arg1;
- (id)cleanApertureDictionary;
- (void)dealloc;
- (bool)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1;
- (int)height;
- (id)initWithAVVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
- (id)initWithTrustedAVVideoSettingsDictionary:(id)arg1;
- (id)pixelAspectRatioDictionary;
- (unsigned int)videoCodecType;
- (id)videoCompressionProperties;
- (id)videoEncoderSpecification;
- (int)width;
- (bool)willYieldCompressedSamples;

@end
