/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIBlurEffect : UIVisualEffect {
    _UIBlurEffectImpl * _impl;
}

@property (nonatomic, readonly) bool _canProvideVibrancyEffect;
@property (nonatomic, readonly) bool _invertAutomaticStyle;
@property (nonatomic, readonly) long long _style;
@property (nonatomic, readonly) UIColor *_tintColor;

+ (void)_addBlurToEffectNode:(id)arg1 blurRadius:(double)arg2 scale:(double)arg3 options:(id)arg4;
+ (id)_effectWithStyle:(long long)arg1 invertAutomaticStyle:(bool)arg2;
+ (id)_effectWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(bool)arg3;
+ (id)_effectWithTintColor:(id)arg1;
+ (id)effectWithBlurRadius:(double)arg1;
+ (id)effectWithStyle:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_canProvideVibrancyEffect;
- (long long)_expectedUsage;
- (id)_initWithImplementation:(id)arg1;
- (bool)_invertAutomaticStyle;
- (bool)_isATVStyle;
- (bool)_isAutomaticStyle;
- (bool)_needsUpdateForOption:(id)arg1;
- (bool)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (long long)_style;
- (id)_tintColor;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (id)effectSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
