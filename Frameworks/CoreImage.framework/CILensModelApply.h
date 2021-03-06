/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CILensModelApply : CIFilter {
    NSNumber * inputAperture;
    CIImage * inputCalculatorValuesImage;
    CIImage * inputImage;
    NSNumber * inputIntrinsicMatrixFocalLength;
    CIVector * inputOriginalSize;
    NSDictionary * inputTuningParameters;
}

@property (nonatomic, copy) NSNumber *inputAperture;
@property (nonatomic, retain) CIImage *inputCalculatorValuesImage;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputIntrinsicMatrixFocalLength;
@property (nonatomic, copy) CIVector *inputOriginalSize;
@property (nonatomic, retain) NSDictionary *inputTuningParameters;

- (id)_lensModelKernel;
- (id)inputAperture;
- (id)inputCalculatorValuesImage;
- (id)inputImage;
- (id)inputIntrinsicMatrixFocalLength;
- (id)inputOriginalSize;
- (id)inputTuningParameters;
- (id)outputImage;
- (void)setInputAperture:(id)arg1;
- (void)setInputCalculatorValuesImage:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputIntrinsicMatrixFocalLength:(id)arg1;
- (void)setInputOriginalSize:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;

@end
