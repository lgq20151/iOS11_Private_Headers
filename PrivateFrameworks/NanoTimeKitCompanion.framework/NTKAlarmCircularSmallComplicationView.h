/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAlarmCircularSmallComplicationView : NTKCircularComplicationView <CLKTimeFormatterObserver, NTKAlarmComplicationDisplay> {
    NSDate * _alarmDate;
    long long  _alarmState;
    NTKColoringLabel * _alternativeTimeLabel;
    NTKColoringLabel * _designatorLabel;
    NTKStackedImagesComplicationImageView * _image;
    bool  _showAlternativeTimeLabel;
    double  _snoozeDuration;
    NTKDigitalTimeLabel * _timeLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool shouldUseTemplateColors;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setShowAlternativeLabel:(bool)arg1;
- (void)_updateImage;
- (void)_updateLabelsForFontChange;
- (void)_updateTime;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (void)setStateActiveWithDate:(id)arg1;
- (void)setStateAllAlarmsOff;
- (void)setStateNoAlarms;
- (void)setStateSnoozingWithDuration:(double)arg1;
- (void)setUsesMediumLayout:(bool)arg1;
- (void)timeFormatterTextDidChange:(id)arg1;

@end
