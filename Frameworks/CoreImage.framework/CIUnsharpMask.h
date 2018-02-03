/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIUnsharpMask : CIFilter {
    CIImage * inputImage;
    NSNumber * inputIntensity;
    NSNumber * inputRadius;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputIntensity;
@property (nonatomic, retain) NSNumber *inputRadius;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)_kernel;
- (id)inputImage;
- (id)inputIntensity;
- (id)inputRadius;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputIntensity:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end