/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface SwapRedAndGreenFilter : CIFilter {
    NSNumber * _inputAmount;
    CIImage * _inputImage;
}

@property (nonatomic, copy) NSNumber *inputAmount;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)inputAmount;
- (id)inputImage;
- (id)myKernel;
- (id)outputImage;
- (void)setInputAmount:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
