/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPortraitBlurNoise : CIFilter {
    CIVector * inputExtent;
    CIImage * inputImage;
    NSNumber * inputLumaNoiseAmpl;
    NSNumber * inputLumaNoiseModelCoeff;
    NSNumber * inputUseMetal;
}

@property (copy) CIVector *inputExtent;
@property (retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputLumaNoiseAmpl;
@property (nonatomic, copy) NSNumber *inputLumaNoiseModelCoeff;
@property (nonatomic, copy) NSNumber *inputUseMetal;

- (id)_kernel;
- (id)_kernelMetal;
- (id)inputExtent;
- (id)inputImage;
- (id)inputLumaNoiseAmpl;
- (id)inputLumaNoiseModelCoeff;
- (id)inputUseMetal;
- (id)outputImage;
- (void)setInputExtent:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLumaNoiseAmpl:(id)arg1;
- (void)setInputLumaNoiseModelCoeff:(id)arg1;
- (void)setInputUseMetal:(id)arg1;

@end
