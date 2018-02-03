/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface _CUIThemeEffectRendition : CUIThemeRendition {
    CUIShapeEffectPreset * _effectPreset;
    float  _minimumShadowSpread;
    const struct _cuieffectdata { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct _cuieffectlist { unsigned int x_5_1_1; unsigned int x_5_1_2[0]; } x5; } * effectData;
}

+ (id)_filteredCSIDataFromBaseCSIData:(id)arg1;

- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_setStructuredThemeStore:(id)arg1;
- (void)dealloc;
- (id)effectPreset;

@end