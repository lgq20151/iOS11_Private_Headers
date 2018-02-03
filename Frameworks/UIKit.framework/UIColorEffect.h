/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIColorEffect : UIVisualEffect {
    NSString * _filterType;
    NSDictionary * _identityValues;
    NSDictionary * _requestedValues;
}

+ (id)_colorEffectCAMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg1;
+ (id)colorEffectAdd:(id)arg1;
+ (id)colorEffectBrightness:(double)arg1;
+ (id)colorEffectColor:(id)arg1;
+ (id)colorEffectContrast:(double)arg1;
+ (id)colorEffectInvert;
+ (id)colorEffectLuminanceMap:(id)arg1 blendingAmount:(double)arg2;
+ (id)colorEffectMatrix:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; struct { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; } x5; })arg1;
+ (id)colorEffectMonochromeTint:(id)arg1 blendingAmount:(double)arg2 brightnessAdjustment:(double)arg3;
+ (id)colorEffectMultiply:(id)arg1;
+ (id)colorEffectSaturate:(double)arg1;
+ (id)colorEffectSubtract:(id)arg1;

- (void).cxx_destruct;
- (long long)_expectedUsage;
- (id)_filterEntry;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
