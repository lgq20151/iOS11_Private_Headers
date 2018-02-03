/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIBlurEffectLegacyImpl : _UIBlurEffectImpl {
    UIBlurEffect * _effect;
    bool  _invertAutomaticStyle;
    long long  _style;
    UIColor * _tintColor;
}

@property (nonatomic) UIBlurEffect *effect;

- (void).cxx_destruct;
- (bool)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (void)appendDescriptionTo:(id)arg1;
- (bool)canProvideVibrancyEffect;
- (id)effect;
- (void)encodeWithCoder:(id)arg1;
- (id)implementationForUserInterfaceStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(bool)arg3;
- (bool)invertAutomaticStyle;
- (void)setEffect:(id)arg1;
- (long long)style;
- (id)tintColor;

@end