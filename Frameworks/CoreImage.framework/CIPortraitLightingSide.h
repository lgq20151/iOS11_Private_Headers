/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPortraitLightingSide : CIFilter {
    NSNumber * inputCenterBottom;
    CIImage * inputImage;
    NSNumber * inputOrientation;
    CIVector * inputPt1;
    CIVector * inputPt2;
    CIVector * inputPt3;
    CIVector * inputPt4;
    CIVector * inputPt5;
    CIVector * inputPt6;
    NSNumber * inputRotate;
    NSNumber * inputStrength;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) NSNumber *inputCenterBottom;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputOrientation;
@property (nonatomic, retain) CIVector *inputPt1;
@property (nonatomic, retain) CIVector *inputPt2;
@property (nonatomic, retain) CIVector *inputPt3;
@property (nonatomic, retain) CIVector *inputPt4;
@property (nonatomic, retain) CIVector *inputPt5;
@property (nonatomic, retain) CIVector *inputPt6;
@property (nonatomic, retain) NSNumber *inputRotate;
@property (nonatomic, retain) NSNumber *inputStrength;
@property (nonatomic, retain) NSNumber *inputWidth;

+ (id)customAttributes;

- (id)_kickLightKernel_neg;
- (id)_kickLightKernel_pos;
- (id)inputCenterBottom;
- (id)inputImage;
- (id)inputOrientation;
- (id)inputPt1;
- (id)inputPt2;
- (id)inputPt3;
- (id)inputPt4;
- (id)inputPt5;
- (id)inputPt6;
- (id)inputRotate;
- (id)inputStrength;
- (id)inputWidth;
- (id)outputImage;
- (void)setInputCenterBottom:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputOrientation:(id)arg1;
- (void)setInputPt1:(id)arg1;
- (void)setInputPt2:(id)arg1;
- (void)setInputPt3:(id)arg1;
- (void)setInputPt4:(id)arg1;
- (void)setInputPt5:(id)arg1;
- (void)setInputPt6:(id)arg1;
- (void)setInputRotate:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end
