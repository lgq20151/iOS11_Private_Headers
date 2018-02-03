/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CILocalLightFilter : CIFilter {
    CIImage * inputGuideImage;
    CIImage * inputImage;
    NSData * inputLightMap;
    NSNumber * inputLightMapHeight;
    CIImage * inputLightMapImage;
    NSNumber * inputLightMapWidth;
    NSNumber * inputLocalLight;
}

+ (id)customAttributes;

- (id)_polyKernel;
- (id)outputImage;

@end
