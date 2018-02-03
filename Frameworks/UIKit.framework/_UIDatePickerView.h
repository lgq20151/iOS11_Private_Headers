/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDatePickerView : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate> {
    bool  _allowsZeroTimeInterval;
    _UIDatePickerChineseCalendar * _chineseWrapperCalendar;
    NSLocale * _compositeLocale;
    UIDatePicker * _datePickerDelegate;
    struct { 
        unsigned int staggerTimeIntervals : 1; 
        unsigned int loadingDateOrTime : 1; 
        unsigned int highlightsToday : 1; 
        unsigned int usesBlackChrome : 1; 
    }  _datePickerFlags;
    id  _delegateOfDatePicker;
    int  _expectedAMPM;
    UILabel * _hourLabel;
    NSDateComponents * _lastSelectedDateComponents;
    long long  _loadingDate;
    NSDate * _maximumDate;
    NSDate * _minimumDate;
    UILabel * _minuteLabel;
    _UIDatePickerMode * _mode;
    double  _timeInterval;
    NSTimeZone * _timeZone;
    NSCalendar * _userProvidedCalendar;
    NSLocale * _userProvidedLocale;
    NSDate * _userSuppliedDate;
    NSDate * _userSuppliedMaximumDate;
    NSDate * _userSuppliedMinimumDate;
}

@property (getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:, nonatomic) bool allowsZeroCountDownDuration;
@property (getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:, nonatomic) bool allowsZeroTimeInterval;
@property (getter=_amPmValue, nonatomic, readonly) long long amPmValue;
@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) double contentWidth;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSDateComponents *dateComponents;
@property (nonatomic) long long datePickerMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegateOfDatePicker;
@property (readonly, copy) NSString *description;
@property (getter=_hasCustomCalendar, nonatomic, readonly) bool hasCustomCalendar;
@property (getter=_hasCustomLocale, nonatomic, readonly) bool hasCustomLocale;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlightsToday;
@property (getter=_hrMinFont, nonatomic, readonly) UIFont *hrMinFont;
@property (getter=_isTimeIntervalMode, nonatomic, readonly) bool isTimeIntervalMode;
@property (getter=_lastSelectedDateComponents, nonatomic, readonly) NSDateComponents *lastSelectedDateComponents;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, copy) NSDate *maximumDate;
@property (nonatomic, copy) NSDate *minimumDate;
@property (nonatomic) long long minuteInterval;
@property (nonatomic) bool staggerTimeIntervals;
@property (readonly) Class superclass;
@property (nonatomic) double timeInterval;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, copy) NSCalendar *userProvidedCalendar;
@property (nonatomic, retain) NSLocale *userProvidedLocale;
@property (getter=_usesBlackChrome, setter=_setUsesBlackChrome:, nonatomic) bool usesBlackChrome;

- (void).cxx_destruct;
- (void)_UIAppearance_setTextColor:(id)arg1;
- (bool)_allowsZeroCountDownDuration;
- (bool)_allowsZeroTimeInterval;
- (long long)_amPmValue;
- (id)_componentsSelectedAfterEnforcingValidityOfComponents:(id)arg1 withLastManipulatedComponent:(long long)arg2;
- (id)_contentViewForSizingLabelForPositioningInComponent:(long long)arg1;
- (void)_datePickerReset:(id)arg1;
- (void)_doneLoadingDateOrTime;
- (id)_existingLabelForCalendarUnit:(unsigned long long)arg1;
- (void)_fadeLabelForCalendarUnit:(unsigned long long)arg1 toText:(id)arg2 animated:(bool)arg3;
- (bool)_hasCustomCalendar;
- (bool)_hasCustomLocale;
- (id)_hoursStringForHour:(long long)arg1;
- (id)_hrMinFont;
- (bool)_isCurrentCalendar:(id)arg1;
- (bool)_isTimeIntervalMode;
- (id)_labelForCalendarUnit:(unsigned long long)arg1 createIfNecessary:(bool)arg2;
- (id)_labelTextForCalendarUnit:(unsigned long long)arg1;
- (id)_lastSelectedDateComponents;
- (void)_loadDate:(id)arg1 animated:(bool)arg2;
- (id)_makeNewCalendarUnitLabel;
- (id)_minutesStringForHour:(long long)arg1 minutes:(long long)arg2;
- (id)_orientationImageSuffix;
- (void)_positionLabel:(id)arg1 forCalendarUnit:(unsigned long long)arg2 relativeTo:(id)arg3 order:(long long)arg4;
- (void)_rebuildCompositeLocale;
- (void)_resetSelectionOfTables;
- (void)_selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(bool)arg3 notify:(bool)arg4;
- (int)_selectedHourForColumn:(int)arg1;
- (int)_selectedMinuteForColumn:(int)arg1;
- (id)_selectedTextForCalendarUnit:(unsigned long long)arg1;
- (long long)_selectionBarRowInComponent:(long long)arg1;
- (void)_setAllowsZeroCountDownDuration:(bool)arg1;
- (void)_setAllowsZeroTimeInterval:(bool)arg1;
- (void)_setDate:(id)arg1 animated:(bool)arg2 forced:(bool)arg3;
- (void)_setHidesLabels:(bool)arg1;
- (void)_setLabel:(id)arg1 forCalendarUnit:(unsigned long long)arg2 animated:(bool)arg3;
- (void)_setMode:(id)arg1;
- (void)_setTextColor:(id)arg1;
- (void)_setUsesBlackChrome:(bool)arg1;
- (bool)_showingDate;
- (double)_tableRowHeight;
- (void)_todayChanged:(id)arg1;
- (bool)_updateDateOrTime;
- (void)_updateEnabledCellsIncludingWMDCells:(bool)arg1;
- (void)_updateLabelColors;
- (void)_updateLabels:(bool)arg1;
- (void)_updateTextColorForCalendarUnitLabel:(id)arg1;
- (bool)_updatedLastSelectedComponentsByValidatingSelectedDateWithLastManipulatedComponent:(long long)arg1;
- (bool)_usesBlackChrome;
- (id)_viewForSelectedRowInComponent:(long long)arg1;
- (id)calendar;
- (double)contentWidth;
- (id)date;
- (id)dateComponents;
- (long long)datePickerMode;
- (void)dealloc;
- (id)delegateOfDatePicker;
- (bool)highlightsToday;
- (int)hour;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)locale;
- (id)maximumDate;
- (id)minimumDate;
- (int)minute;
- (long long)minuteInterval;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerImageNamePrefix;
- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (int)second;
- (void)setDate:(id)arg1;
- (void)setDate:(id)arg1 animated:(bool)arg2;
- (void)setDateComponents:(id)arg1;
- (void)setDatePickerMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateOfDatePicker:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlightsToday:(bool)arg1;
- (void)setMaximumDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;
- (void)setMinuteInterval:(long long)arg1;
- (void)setStaggerTimeIntervals:(bool)arg1;
- (void)setTimeInterval:(double)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUserProvidedCalendar:(id)arg1;
- (void)setUserProvidedLocale:(id)arg1;
- (id)shadowColor;
- (bool)staggerTimeIntervals;
- (double)timeInterval;
- (id)timeZone;
- (id)userProvidedCalendar;
- (id)userProvidedLocale;

@end
