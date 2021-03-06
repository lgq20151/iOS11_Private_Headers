/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIConfidenceMap : CIFilter {
    CIImage * inputDisparityImage;
    CIImage * inputImage;
}

@property (retain) CIImage *inputDisparityImage;
@property (retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_confidenceExtractRed;
- (id)extractLuminance:(id)arg1;
- (id)inputDisparityImage;
- (id)inputImage;
- (id)outputImage;
- (void)setInputDisparityImage:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
