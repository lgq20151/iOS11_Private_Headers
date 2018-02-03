/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDocumentEnhancer : CIFilter {
    NSNumber * inputAmount;
    CIImage * inputImage;
}

@property (nonatomic, copy) NSNumber *inputAmount;

+ (id)customAttributes;

- (id)inputAmount;
- (id)outputImage;
- (void)setInputAmount:(id)arg1;

@end
