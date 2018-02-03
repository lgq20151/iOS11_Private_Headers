/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CICheatBlur : CIFilter {
    NSNumber * inputAmount;
    CIImage * inputImage;
}

+ (id)customAttributes;

- (id)_CIBox4;
- (id)_CIBox6;
- (id)_CICross4;
- (id)outputImage;

@end
