/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerEffectOuterGlow : CUIPSDLayerEffectComponent {
    int  _blendMode;
    unsigned long long  _blurSize;
    CUIColor * _color;
    double  _opacity;
    unsigned long long  _spread;
}

@property int blendMode;
@property unsigned long long blurSize;
@property (retain) CUIColor *color;
@property double opacity;
@property unsigned long long spread;

- (int)blendMode;
- (unsigned long long)blurSize;
- (id)color;
- (void)dealloc;
- (unsigned int)effectType;
- (id)init;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (double)opacity;
- (void)setBlendMode:(int)arg1;
- (void)setBlurSize:(unsigned long long)arg1;
- (void)setColor:(id)arg1;
- (void)setOpacity:(double)arg1;
- (void)setSpread:(unsigned long long)arg1;
- (unsigned long long)spread;
- (bool)updateLayerEffectPreset:(id)arg1 error:(id*)arg2;

@end
