/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKMonogramComplicationController : NTKComplicationController <NTKTimeTravel> {
    NSString * _monogramText;
}

@property (nonatomic, readonly) <NTKMonogramComplicationDisplay> *legacyDisplay;

+ (bool)_acceptsComplicationType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_activate;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_handleCustomMonogramChanged;
- (void)_handleFaceDefaultsChanged;
- (void)_handleLocaleChange;
- (void)_reloadMonogramText;
- (void)_updateDisplay;
- (bool)hasTapAction;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;

@end
