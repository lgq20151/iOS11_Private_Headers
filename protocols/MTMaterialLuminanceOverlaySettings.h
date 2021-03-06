/* made by EzioChiu.
 */

@protocol MTMaterialLuminanceOverlaySettings <MTMaterialOverlaySettings>

@required

- (double)auxiliaryOverlayBlurRadius;
- (double)baseOverlayBrightness;
- (UIColor *)baseOverlayColor;
- (double)baseOverlaySaturation;
- (double)baseOverlayTintAlpha;
- (double)primaryOverlayBrightness;
- (double)primaryOverlaySaturation;
- (double)secondaryOverlayBrightness;
- (double)secondaryOverlaySaturation;
- (void)setAuxiliaryOverlayBlurRadius:(double)arg1;
- (void)setBaseOverlayBrightness:(double)arg1;
- (void)setBaseOverlaySaturation:(double)arg1;
- (void)setBaseOverlayTintAlpha:(double)arg1;
- (void)setPrimaryOverlayBrightness:(double)arg1;
- (void)setPrimaryOverlaySaturation:(double)arg1;
- (void)setSecondaryOverlayBrightness:(double)arg1;
- (void)setSecondaryOverlaySaturation:(double)arg1;

@end
