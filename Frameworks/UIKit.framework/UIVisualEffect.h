/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding> {
    _UIVisualEffectConfig * _effectConfig;
}

@property (nonatomic, readonly) bool _isATVStyle;
@property (nonatomic, readonly) bool _isAutomaticStyle;
@property (nonatomic, readonly) _UIVisualEffectConfig *effectConfig;
@property (nonatomic, readonly) _UIBackdropViewSettings *effectSettings;

+ (id)effectCombiningEffects:(id)arg1;
+ (id)effectCompositingColor:(id)arg1;
+ (id)effectCompositingColor:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3;
+ (id)effectCompositingImage:(id)arg1;
+ (id)effectCompositingImage:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3;
+ (id)emptyEffect;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateEffects:(id /* block */)arg1;
- (long long)_expectedUsage;
- (bool)_isATVStyle;
- (bool)_isAutomaticStyle;
- (bool)_needsUpdateForOption:(id)arg1;
- (bool)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (bool)_selectorOverriden:(SEL)arg1;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectConfig;
- (id)effectConfigForOptions:(id)arg1;
- (id)effectConfigForQuality:(long long)arg1;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (id)effectSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
