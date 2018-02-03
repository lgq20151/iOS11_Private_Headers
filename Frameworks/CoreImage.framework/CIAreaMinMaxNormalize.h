/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIAreaMinMaxNormalize : CIFilter {
    CIVector * inputExtent;
    CIImage * inputImage;
}

@property (nonatomic, retain) CIVector *inputExtent;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)inputExtent;
- (id)inputImage;
- (id)outputImage;
- (void)setInputExtent:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
