/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMutableImageAdjustments : TSDImageAdjustments

@property (nonatomic) double bottomLevel;
@property (nonatomic) double contrast;
@property (nonatomic) double denoise;
@property (nonatomic) bool enhance;
@property (nonatomic) double exposure;
@property (nonatomic) double gamma;
@property (nonatomic) double highlights;
@property (nonatomic) bool representsSageAdjustments;
@property (nonatomic) double saturation;
@property (nonatomic) double shadows;
@property (nonatomic) double sharpness;
@property (nonatomic) double temperature;
@property (nonatomic) double tint;
@property (nonatomic) double topLevel;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBottomLevel:(double)arg1;
- (void)setContrast:(double)arg1;
- (void)setDenoise:(double)arg1;
- (void)setEnhance:(bool)arg1;
- (void)setExposure:(double)arg1;
- (void)setGamma:(double)arg1;
- (void)setHighlights:(double)arg1;
- (void)setRepresentsSageAdjustments:(bool)arg1;
- (void)setSaturation:(double)arg1;
- (void)setShadows:(double)arg1;
- (void)setSharpness:(double)arg1;
- (void)setTemperature:(double)arg1;
- (void)setTint:(double)arg1;
- (void)setTopLevel:(double)arg1;

@end