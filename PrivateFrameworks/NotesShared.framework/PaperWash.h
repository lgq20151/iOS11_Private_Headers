/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface PaperWash : CIFilter {
    CIImage * _inputImage;
}

@property (nonatomic, retain) CIImage *inputImage;

- (void).cxx_destruct;
- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;

@end