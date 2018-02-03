/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDepthBlurEffect : CIFilter {
    NSNumber * inputAperture;
    id  inputAuxDataMetadata;
    AVCameraCalibrationData * inputCalibrationData;
    CIVector * inputChinPositions;
    CIImage * inputDisparityImage;
    CIVector * inputFocusRect;
    CIImage * inputImage;
    CIVector * inputLeftEyePositions;
    NSNumber * inputLumaNoiseScale;
    CIVector * inputNosePositions;
    CIVector * inputRightEyePositions;
    NSNumber * inputScaleFactor;
}

@property (nonatomic, retain) NSNumber *inputAperture;
@property (nonatomic, retain) id inputAuxDataMetadata;
@property (nonatomic, copy) AVCameraCalibrationData *inputCalibrationData;
@property (nonatomic, retain) CIVector *inputChinPositions;
@property (retain) CIImage *inputDisparityImage;
@property (nonatomic, retain) CIVector *inputFocusRect;
@property (retain) CIImage *inputImage;
@property (nonatomic, retain) CIVector *inputLeftEyePositions;
@property (nonatomic, retain) NSNumber *inputLumaNoiseScale;
@property (nonatomic, retain) CIVector *inputNosePositions;
@property (nonatomic, retain) CIVector *inputRightEyePositions;
@property (nonatomic, retain) NSNumber *inputScaleFactor;

+ (id)customAttributes;

- (id)_getFocusRect:(id)arg1 focusRect:(id)arg2;
- (id)inputAperture;
- (id)inputAuxDataMetadata;
- (id)inputCalibrationData;
- (id)inputChinPositions;
- (id)inputDisparityImage;
- (id)inputFocusRect;
- (id)inputImage;
- (id)inputLeftEyePositions;
- (id)inputLumaNoiseScale;
- (id)inputNosePositions;
- (id)inputRightEyePositions;
- (id)inputScaleFactor;
- (id)outputImage;
- (void)setInputAperture:(id)arg1;
- (void)setInputAuxDataMetadata:(id)arg1;
- (void)setInputCalibrationData:(id)arg1;
- (void)setInputChinPositions:(id)arg1;
- (void)setInputDisparityImage:(id)arg1;
- (void)setInputFocusRect:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLeftEyePositions:(id)arg1;
- (void)setInputLumaNoiseScale:(id)arg1;
- (void)setInputNosePositions:(id)arg1;
- (void)setInputRightEyePositions:(id)arg1;
- (void)setInputScaleFactor:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
