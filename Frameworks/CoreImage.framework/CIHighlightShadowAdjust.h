/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIHighlightShadowAdjust : CIFilter <_CIFilterProperties> {
    NSNumber * inputHighlightAmount;
    CIImage * inputImage;
    NSNumber * inputRadius;
    NSNumber * inputShadowAmount;
}

@property (nonatomic, retain) NSNumber *inputHighlightAmount;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputRadius;
@property (nonatomic, retain) NSNumber *inputShadowAmount;

+ (id)customAttributes;

- (int)_defaultVersion;
- (id)_initFromProperties:(id)arg1;
- (bool)_isIdentity;
- (id)_kernelSH_v0;
- (id)_kernelSH_v1;
- (id)_kernelSH_v2;
- (id)_kernelSHnoB_v0;
- (id)_kernelSHnoB_v1;
- (id)_kernelSHnoB_v2;
- (id)_kernelSnoB_v0;
- (int)_maxVersion;
- (id)_outputProperties;
- (id)inputHighlightAmount;
- (id)inputImage;
- (id)inputRadius;
- (id)inputShadowAmount;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputHighlightAmount:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputShadowAmount:(id)arg1;

@end
