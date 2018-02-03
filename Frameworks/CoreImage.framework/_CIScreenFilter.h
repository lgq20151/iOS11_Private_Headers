/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface _CIScreenFilter : CIFilter {
    NSNumber * inputAngle;
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputSharpness;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) NSNumber *inputAngle;
@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputSharpness;
@property (nonatomic, retain) NSNumber *inputWidth;

+ (id)_kernel;
+ (id)_kernel_code;
+ (id)customAttributes;

- (id)inputAngle;
- (id)inputCenter;
- (id)inputImage;
- (id)inputSharpness;
- (id)inputWidth;
- (id)outputImage;
- (void)setInputAngle:(id)arg1;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputSharpness:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end
