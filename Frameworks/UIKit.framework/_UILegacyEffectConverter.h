/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UILegacyEffectConverter : NSObject

+ (id)sharedConverter;

- (void)applyBackdropSettings:(id)arg1 toEffectNode:(id)arg2;
- (void)applyVibrancyConfig:(id)arg1 toEffectNode:(id)arg2;
- (id)backdropSettingsForBlurStyle:(long long)arg1;
- (id)vibrancyConfigForHighQualityVibrancyStyle:(long long)arg1;
- (id)vibrancyConfigForLowQualityVibrancyStyle:(long long)arg1;
- (id)vibrancyConfigForReducedTransperancyVibrancyStyle:(long long)arg1;

@end
