/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTMaterialView : UIView <MTMaterialSettingsObserving> {
    id /* block */  _backdropScaleAdjustment;
    UIView * _backdropView;
    bool  _cornerRadiusIsContinuous;
    bool  _forceCrossfadeIfNecessary;
    NSString * _groupName;
    bool  _highlighted;
    bool  _isConfiguredAsOverlay;
    bool  _isInitialWeighting;
    unsigned long long  _options;
    UIView * _primaryOverlayView;
    UIView * _secondaryOverlayView;
    <MTMaterialSettings> * _settings;
    bool  _shouldCrossfadeIfNecessary;
    double  _weighting;
}

@property (nonatomic) bool allowsInPlaceFiltering;
@property (nonatomic, copy) id /* block */ backdropScaleAdjustment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceCrossfadeIfNecessary;
@property (nonatomic, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) <MTMaterialSettings><MTMaterialSettingsObservable> *materialSettings;
@property (nonatomic) bool shouldCrossfadeIfNecessary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MTVibrantStylingProvider *vibrantStylingProvider;
@property (nonatomic) double weighting;

+ (void)_validateRecipe:(long long*)arg1 andOptions:(unsigned long long*)arg2;
+ (void)initialize;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(id /* block */)arg4;
+ (id)materialViewWithSettings:(id)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)_adjustScaleOfBackdropView:(id)arg1 ifNecessaryWithWeighting:(double)arg2;
- (id)_backdropLayer;
- (id)_backdropViewSettingsForMaterialSettings:(id)arg1 options:(unsigned long long)arg2;
- (id)_basicOverlaySettings;
- (void)_configureBackdropViewIfNecessaryWithWeighting:(double)arg1;
- (void)_configureIfNecessaryWithWeighting:(double)arg1;
- (void)_configureMTBackdropView:(id)arg1 withWeighting:(double)arg2;
- (id)_configureOverlayView:(id*)arg1 ofClass:(Class)arg2 withOptions:(unsigned long long)arg3 color:(id)arg4 alpha:(double)arg5 weighting:(double)arg6;
- (void)_configureOverlayView:(id)arg1 withColor:(id)arg2 alpha:(double)arg3 weighting:(double)arg4;
- (id)_configureOverlayView:(id*)arg1 withOptions:(unsigned long long)arg2 color:(id)arg3 alpha:(double)arg4 weighting:(double)arg5;
- (void)_configurePrimaryOverlayViewIfNecessaryWithWeighting:(double)arg1;
- (void)_configureSecondaryOverlayViewIfNecessaryWithWeighting:(double)arg1;
- (double)_continuousCornerRadius;
- (bool)_isCrossfadeNecessary;
- (id)_luminanceOverlaySettings;
- (id)_mtBackdropView;
- (id)_observableSettings;
- (void)_reduceTransparencyStatusDidChange;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1;
- (bool)_supportsVariableWeighting;
- (void)_transitionToSettings:(id)arg1 options:(unsigned long long)arg2;
- (bool)allowsInPlaceFiltering;
- (id /* block */)backdropScaleAdjustment;
- (double)cornerRadius;
- (void)dealloc;
- (bool)forceCrossfadeIfNecessary;
- (id)groupName;
- (id)initWithSettings:(id)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(id /* block */)arg4;
- (bool)isHighlighted;
- (id)materialSettings;
- (void)setAllowsInPlaceFiltering:(bool)arg1;
- (void)setBackdropScaleAdjustment:(id /* block */)arg1;
- (void)setForceCrossfadeIfNecessary:(bool)arg1;
- (void)setGroupName:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setShouldCrossfadeIfNecessary:(bool)arg1;
- (void)setWeighting:(double)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldCrossfadeIfNecessary;
- (id)vibrantStylingProvider;
- (double)weighting;

@end
