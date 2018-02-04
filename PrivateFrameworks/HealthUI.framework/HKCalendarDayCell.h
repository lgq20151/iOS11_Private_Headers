/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKCalendarDayCell : CALayer {
    UIFont * _boldFont;
    CALayer * _circle;
    NSDate * _date;
    HKDateCache * _dateCache;
    double  _dayDiameter;
    CALayer * _dayLabel;
    long long  _dayOfMonth;
    UIFont * _font;
    bool  _representsToday;
    bool  _selected;
    UIColor * _textColor;
}

@property (nonatomic, retain) UIFont *boldFont;
@property (nonatomic, readonly) CALayer *circle;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) HKDateCache *dateCache;
@property (nonatomic) double dayDiameter;
@property (nonatomic, readonly) CALayer *dayLabel;
@property (nonatomic, readonly) long long dayOfMonth;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) bool representsToday;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, retain) UIColor *textColor;

+ (void)clearImageCache;

- (void).cxx_destruct;
- (id)_integerNumberFormatter;
- (id)_reusedImageForDateIndex:(long long)arg1 color:(id)arg2;
- (double)_roundedRectCornerRadius;
- (struct CGSize { double x1; double x2; })_roundedRectSizeForDayNumberString:(id)arg1;
- (id)boldFont;
- (id)circle;
- (struct CGSize { double x1; double x2; })circleSize;
- (id)date;
- (id)dateCache;
- (double)dayDiameter;
- (id)dayLabel;
- (long long)dayOfMonth;
- (id)debugDescription;
- (id)font;
- (id)init;
- (id)initWithDateCache:(id)arg1;
- (bool)isSelected;
- (void)layoutOnce;
- (bool)representsToday;
- (void)setBoldFont:(id)arg1;
- (void)setDayDiameter:(double)arg1;
- (void)setFont:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (void)updateDateTextForDayNumber:(long long)arg1 textColor:(id)arg2;
- (void)updateWithDate:(id)arg1 dayOfMonth:(long long)arg2;

@end