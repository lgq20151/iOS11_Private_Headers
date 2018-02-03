/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPortraitEffect : CIFilter {
    NSNumber * inputEnrich;
    NSNumber * inputEyes;
    NSArray * inputFaceLandmarkArray;
    CIImage * inputFaceMask;
    CIImage * inputImage;
    NSNumber * inputLocalContrast;
    NSNumber * inputScale;
    NSNumber * inputSmooth;
    NSNumber * inputStrength;
    NSNumber * inputTeeth;
}

@property (nonatomic, retain) NSNumber *inputEnrich;
@property (nonatomic, retain) NSNumber *inputEyes;
@property (nonatomic, retain) NSArray *inputFaceLandmarkArray;
@property (nonatomic, retain) CIImage *inputFaceMask;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputLocalContrast;
@property (nonatomic, retain) NSNumber *inputScale;
@property (nonatomic, retain) NSNumber *inputSmooth;
@property (nonatomic, retain) NSNumber *inputStrength;
@property (nonatomic, retain) NSNumber *inputTeeth;

+ (id)customAttributes;

- (int)_defaultVersion;
- (int)_maxVersion;
- (id)backgroundPreviewCubeName;
- (id)backgroundPreviewCubePath;
- (id)cubeColorSpaceName;
- (id)inputEnrich;
- (id)inputEyes;
- (id)inputFaceLandmarkArray;
- (id)inputFaceMask;
- (id)inputImage;
- (id)inputLocalContrast;
- (id)inputScale;
- (id)inputSmooth;
- (id)inputStrength;
- (id)inputTeeth;
- (id)outputImage;
- (id)previewCubeName;
- (id)previewCubePath;
- (void)setInputEnrich:(id)arg1;
- (void)setInputEyes:(id)arg1;
- (void)setInputFaceLandmarkArray:(id)arg1;
- (void)setInputFaceMask:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLocalContrast:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputSmooth:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setInputTeeth:(id)arg1;
- (id)standbyCubeName;
- (id)standbyCubePath;

@end
