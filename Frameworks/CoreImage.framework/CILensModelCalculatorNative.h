/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CILensModelCalculatorNative : CIFilter {
    CIVector * inputFocusRect;
    CIImage * inputImage;
    CIImage * inputMinMaxImage;
    NSDictionary * inputTuningParameters;
}

@property (copy) CIVector *inputFocusRect;
@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputMinMaxImage;
@property (nonatomic, retain) NSDictionary *inputTuningParameters;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputFocusRect;
- (id)inputImage;
- (id)inputMinMaxImage;
- (id)inputTuningParameters;
- (id)outputImage;
- (void)setInputFocusRect:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputMinMaxImage:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;

@end
