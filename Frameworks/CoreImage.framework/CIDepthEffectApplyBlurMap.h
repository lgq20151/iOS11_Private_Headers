/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDepthEffectApplyBlurMap : CIFilter {
    id  inputAuxDataMetadata;
    CIImage * inputBlurMap;
    AVCameraCalibrationData * inputCalibrationData;
    CIImage * inputImage;
    NSNumber * inputLumaNoiseScale;
    NSNumber * inputScale;
    NSString * inputShape;
}

@property (nonatomic, retain) id inputAuxDataMetadata;
@property (retain) CIImage *inputBlurMap;
@property (nonatomic, retain) AVCameraCalibrationData *inputCalibrationData;
@property (retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputLumaNoiseScale;
@property (nonatomic, retain) NSNumber *inputScale;
@property (nonatomic, retain) NSString *inputShape;

+ (id)customAttributes;

- (id)inputAuxDataMetadata;
- (id)inputBlurMap;
- (id)inputCalibrationData;
- (id)inputImage;
- (id)inputLumaNoiseScale;
- (id)inputScale;
- (id)inputShape;
- (id)outputImage;
- (void)setInputAuxDataMetadata:(id)arg1;
- (void)setInputBlurMap:(id)arg1;
- (void)setInputCalibrationData:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLumaNoiseScale:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputShape:(id)arg1;

@end
