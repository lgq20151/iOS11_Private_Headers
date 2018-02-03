/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorCubesMixedWithMask : CIFilter {
    id  inputColorSpace;
    NSData * inputCube0Data;
    NSData * inputCube1Data;
    NSNumber * inputCubeDimension;
    CIImage * inputImage;
    CIImage * inputMaskImage;
}

@property (nonatomic, retain) id inputColorSpace;
@property (nonatomic, copy) NSData *inputCube0Data;
@property (nonatomic, copy) NSData *inputCube1Data;
@property (nonatomic, retain) NSNumber *inputCubeDimension;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIImage *inputMaskImage;

+ (id)customAttributes;

- (bool)_checkInputs;
- (id)inputColorSpace;
- (id)inputCube0Data;
- (id)inputCube1Data;
- (id)inputCubeDimension;
- (id)inputImage;
- (id)inputMaskImage;
- (id)outputImage;
- (void)setInputColorSpace:(id)arg1;
- (void)setInputCube0Data:(id)arg1;
- (void)setInputCube1Data:(id)arg1;
- (void)setInputCubeDimension:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputMaskImage:(id)arg1;

@end
