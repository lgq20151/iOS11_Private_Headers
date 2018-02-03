/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIBlurEffectImpl : NSObject

+ (id)implementationFromCoder:(id)arg1;

- (bool)_needsUpdateForOption:(id)arg1;
- (bool)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (void)appendDescriptionTo:(id)arg1;
- (bool)canProvideVibrancyEffect;
- (void)encodeWithCoder:(id)arg1;
- (id)implementationForUserInterfaceStyle:(long long)arg1;
- (bool)invertAutomaticStyle;
- (void)setEffect:(id)arg1;
- (long long)style;
- (id)tintColor;

@end
