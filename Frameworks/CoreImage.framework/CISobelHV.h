/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISobelHV : CIFilter {
    CIImage * inputImage;
}

@property (retain) CIImage *inputImage;

- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;

@end
