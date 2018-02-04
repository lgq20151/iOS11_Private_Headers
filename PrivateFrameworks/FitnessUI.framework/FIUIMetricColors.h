/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIMetricColors : NSObject {
    UIColor * _adjustmentButtonBackgroundColor;
    UIColor * _buttonDisabledTextColor;
    UIColor * _buttonTextColor;
    UIColor * _gradientDarkColor;
    UIColor * _gradientLightColor;
    UIColor * _lightenedNonGradientColor;
    UIColor * _nonGradientTextColor;
    UIColor * _valueDisplayColor;
    NSString * _workoutRingColorIdentifier;
}

@property (nonatomic, retain) UIColor *adjustmentButtonBackgroundColor;
@property (nonatomic, retain) UIColor *buttonDisabledTextColor;
@property (nonatomic, retain) UIColor *buttonTextColor;
@property (nonatomic, retain) UIColor *gradientDarkColor;
@property (nonatomic, retain) UIColor *gradientLightColor;
@property (nonatomic, retain) UIColor *lightenedNonGradientColor;
@property (nonatomic, retain) UIColor *nonGradientTextColor;
@property (nonatomic, retain) UIColor *valueDisplayColor;
@property (nonatomic, retain) NSString *workoutRingColorIdentifier;

+ (id)briskColors;
+ (id)cadenceColors;
+ (id)clockColors;
+ (id)deepBreathingColors;
+ (id)distanceColors;
+ (id)elapsedTimeColors;
+ (id)elevationColors;
+ (id)energyColors;
+ (id)flightsClimbedColors;
+ (id)heartRateColors;
+ (id)keyColors;
+ (id)lapColors;
+ (id)lapsColors;
+ (id)metricColorsForGoalTypeIdentifier:(unsigned long long)arg1;
+ (id)metricColorsForMetricType:(unsigned long long)arg1;
+ (struct CGGradient { }*)newGradientForStartColor:(id)arg1 endColor:(id)arg2;
+ (id)noMetricColors;
+ (id)paceColors;
+ (id)powerColors;
+ (id)sedentaryColors;
+ (id)stepColors;
+ (id)systemGrayTextColor;

- (void).cxx_destruct;
- (id)adjustmentButtonBackgroundColor;
- (id)buttonDisabledTextColor;
- (id)buttonTextColor;
- (id)gradientDarkColor;
- (id)gradientLightColor;
- (id)lightenedNonGradientColor;
- (id)nonGradientTextColor;
- (void)setAdjustmentButtonBackgroundColor:(id)arg1;
- (void)setButtonDisabledTextColor:(id)arg1;
- (void)setButtonTextColor:(id)arg1;
- (void)setGradientDarkColor:(id)arg1;
- (void)setGradientLightColor:(id)arg1;
- (void)setLightenedNonGradientColor:(id)arg1;
- (void)setNonGradientTextColor:(id)arg1;
- (void)setValueDisplayColor:(id)arg1;
- (void)setWorkoutRingColorIdentifier:(id)arg1;
- (id)valueDisplayColor;
- (id)workoutRingColorIdentifier;

@end