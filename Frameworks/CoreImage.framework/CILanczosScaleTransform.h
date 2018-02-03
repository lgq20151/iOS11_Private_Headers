/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CILanczosScaleTransform : CIFilter {
    NSNumber * inputAspectRatio;
    CIImage * inputImage;
    NSNumber * inputScale;
}

@property (nonatomic, retain) NSNumber *inputAspectRatio;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputScale;

+ (id)customAttributes;

- (id)_CILanczosDownBy2;
- (id)_CILanczosHorizontalUpsample;
- (id)_CILanczosVerticalUpsample;
- (bool)_isIdentity;
- (id)inputAspectRatio;
- (id)inputImage;
- (id)inputScale;
- (id)outputImage;
- (void)setInputAspectRatio:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;

@end
