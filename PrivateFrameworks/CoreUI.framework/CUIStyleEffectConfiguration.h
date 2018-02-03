/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIStyleEffectConfiguration : NSObject <NSCopying> {
    double  _brightnessMultiplier;
    unsigned long long  _colorTemperature;
    double  _effectScale;
    bool  _foregroundColorShouldTintEffects;
    long long  _presentationState;
    long long  _state;
    bool  _useSimplifiedEffect;
    long long  _value;
}

@property (nonatomic) double brightnessMultiplier;
@property (nonatomic) unsigned long long colorTemperature;
@property (nonatomic) double effectScale;
@property (nonatomic) bool foregroundColorShouldTintEffects;
@property (nonatomic) long long presentationState;
@property (nonatomic) long long state;
@property (nonatomic) bool useSimplifiedEffect;
@property (nonatomic) long long value;

- (double)brightnessMultiplier;
- (unsigned long long)colorTemperature;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)effectScale;
- (bool)foregroundColorShouldTintEffects;
- (id)init;
- (long long)presentationState;
- (void)setBrightnessMultiplier:(double)arg1;
- (void)setColorTemperature:(unsigned long long)arg1;
- (void)setEffectScale:(double)arg1;
- (void)setForegroundColorShouldTintEffects:(bool)arg1;
- (void)setPresentationState:(long long)arg1;
- (void)setState:(long long)arg1;
- (void)setUseSimplifiedEffect:(bool)arg1;
- (void)setValue:(long long)arg1;
- (bool)shouldIgnoreForegroundColor;
- (bool)shouldRespectOutputBlending;
- (long long)state;
- (bool)useSimplifiedEffect;
- (long long)value;

@end
