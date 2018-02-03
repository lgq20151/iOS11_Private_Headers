/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDepthEffectMakeBlurMap : CIFilter {
    NSNumber * inputAperture;
    id  inputAuxDataMetadata;
    AVCameraCalibrationData * inputCalibrationData;
    CIVector * inputChinPosition;
    CIVector * inputFaceMidPoint;
    CIVector * inputFocusRect;
    CIImage * inputImage;
    CIVector * inputLeftEyePosition;
    CIVector * inputRightEyePosition;
    NSNumber * inputScale;
    CIImage * inputShiftmapImage;
}

@property (nonatomic, copy) NSNumber *inputAperture;
@property (nonatomic, retain) id inputAuxDataMetadata;
@property (nonatomic, retain) AVCameraCalibrationData *inputCalibrationData;
@property (nonatomic, retain) CIVector *inputChinPosition;
@property (nonatomic, retain) CIVector *inputFaceMidPoint;
@property (nonatomic, retain) CIVector *inputFocusRect;
@property (retain) CIImage *inputImage;
@property (nonatomic, retain) CIVector *inputLeftEyePosition;
@property (nonatomic, retain) CIVector *inputRightEyePosition;
@property (nonatomic, copy) NSNumber *inputScale;
@property (retain) CIImage *inputShiftmapImage;

+ (id)customAttributes;

- (id)_metalImage;
- (id)_nativeCIFaceMaskImage:(id)arg1 tuningParameters:(id)arg2;
- (id)_nativeCILensModelImage:(id)arg1 aperture:(float)arg2;
- (id)_nativeImage:(id)arg1 aperture:(float)arg2;
- (bool)_needToRunFaceMask;
- (id)inputAperture;
- (id)inputAuxDataMetadata;
- (id)inputCalibrationData;
- (id)inputChinPosition;
- (id)inputFaceMidPoint;
- (id)inputFocusRect;
- (id)inputImage;
- (id)inputLeftEyePosition;
- (id)inputRightEyePosition;
- (id)inputScale;
- (id)inputShiftmapImage;
- (id)outputImage;
- (void)setInputAperture:(id)arg1;
- (void)setInputAuxDataMetadata:(id)arg1;
- (void)setInputCalibrationData:(id)arg1;
- (void)setInputChinPosition:(id)arg1;
- (void)setInputFaceMidPoint:(id)arg1;
- (void)setInputFocusRect:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLeftEyePosition:(id)arg1;
- (void)setInputRightEyePosition:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputShiftmapImage:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
