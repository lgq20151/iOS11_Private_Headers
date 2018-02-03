/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPortraitSkinMaskProcessor : CIImageProcessorKernel {
    NSDictionary * _inputFaceLandmarks;
    CIImage * _inputImage;
}

@property (nonatomic, retain) NSDictionary *inputFaceLandmarks;
@property (nonatomic, retain) CIImage *inputImage;

+ (bool)allowPartialOutputRegion;
+ (int)formatForInputAtIndex:(int)arg1;
+ (int)outputFormat;
+ (bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

- (id)inputFaceLandmarks;
- (id)inputImage;
- (void)setInputFaceLandmarks:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
