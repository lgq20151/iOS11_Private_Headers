/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBokehBlur : CIFilter {
    NSMutableArray * _recipe;
    CIImage * inputImage;
    NSNumber * inputRadius;
    NSNumber * inputRingAmount;
    NSNumber * inputRingSize;
    NSNumber * inputSoftness;
}

+ (id)customAttributes;

- (void)dealloc;
- (id)outputImage;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end
