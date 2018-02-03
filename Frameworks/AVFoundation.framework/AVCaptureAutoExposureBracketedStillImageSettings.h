/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureAutoExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings {
    float  _exposureTargetBias;
}

@property (readonly) float exposureTargetBias;

+ (id)autoExposureSettingsWithExposureTargetBias:(float)arg1;

- (id)_initAutoExposureSettingsWithExposureTargetBias:(float)arg1;
- (id)debugDescription;
- (id)description;
- (float)exposureTargetBias;

@end
