/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PINeutralGrayWhiteBalanceFilter : CIFilter {
    NSNumber * _i;
    CIImage * _inputImage;
    NSNumber * _q;
    NSNumber * _strength;
    NSNumber * _warmth;
    NSNumber * _y;
}

@property (nonatomic, retain) NSNumber *i;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *q;
@property (nonatomic, retain) NSNumber *strength;
@property (nonatomic, retain) NSNumber *warmth;
@property (nonatomic, retain) NSNumber *y;

+ (id)PPtogHDRKernel;
+ (id)RGBToYIQKernel;
+ (id)YIQToRGBKernel;
+ (id)colorBalanceKernels;
+ (id)customAttributes;
+ (id)gHDRtoPPKernel;
+ (id)whiteBalanceKernel;

- (void).cxx_destruct;
- (id)applyInputConversion:(id)arg1;
- (id)applyOutputConversion:(id)arg1;
- (id)i;
- (id)inputImage;
- (bool)isDefaultWarmth:(double)arg1;
- (id)outputImage;
- (id)q;
- (void)setI:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setQ:(id)arg1;
- (void)setStrength:(id)arg1;
- (void)setWarmth:(id)arg1;
- (void)setY:(id)arg1;
- (id)strength;
- (id)warmth;
- (id)y;

@end