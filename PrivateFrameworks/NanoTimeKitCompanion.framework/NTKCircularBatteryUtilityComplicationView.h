/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCircularBatteryUtilityComplicationView : NTKUtilitySmallRingTextComplicationView <NTKBatteryComplicationDisplay> {
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool shouldUseTemplateColors;
@property (readonly) Class superclass;

- (void)_applyForegroundAlpha;
- (void)_updateRingColor;
- (void)setLevel:(float)arg1;
- (void)setState:(long long)arg1;

@end
