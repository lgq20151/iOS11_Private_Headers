/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKModularSmallRingTemplateView : NTKModularTemplateView {
    UIView<NTKComplicationImageView> * _imageView;
    NTKColoringLabel * _label;
    float  _level;
    CLKProgressProvider * _progressProvider;
    struct NSNumber { Class x1; } * _progressUpdateToken;
    NTKColoringImageView * _stateRing;
}

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
+ (id)supportedTemplateClasses;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_configureContentSubviews;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_layoutContentView;
- (void)_update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsXL:(bool)arg1;
- (void)updateRingWithProgressProvider:(id)arg1;
- (void)updateRingWithRingDescription:(id)arg1;

@end
