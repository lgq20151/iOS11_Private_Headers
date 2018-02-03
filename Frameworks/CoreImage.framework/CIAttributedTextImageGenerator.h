/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIAttributedTextImageGenerator : CIFilter {
    NSNumber * inputScaleFactor;
    NSAttributedString * inputText;
}

@property (nonatomic, retain) NSNumber *inputScaleFactor;
@property (nonatomic, retain) NSAttributedString *inputText;

+ (id)customAttributes;

- (id)inputScaleFactor;
- (id)inputText;
- (id)outputImage;
- (void)setInputScaleFactor:(id)arg1;
- (void)setInputText:(id)arg1;

@end
