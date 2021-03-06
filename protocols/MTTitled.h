/* made by EzioChiu.
 */

@protocol MTTitled <NSObject, MTContentSizeCategoryAdjusting>

@required

- (NSDate *)date;
- (long long)dateFormatStyle;
- (UIImage *)icon;
- (UIButton *)iconButton;
- (bool)isDateAllDay;
- (void)setDate:(NSDate *)arg1;
- (void)setDateAllDay:(bool)arg1;
- (void)setDateFormatStyle:(long long)arg1;
- (void)setIcon:(UIImage *)arg1;
- (void)setTimeZone:(NSTimeZone *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSTimeZone *)timeZone;
- (NSString *)title;
- (UIButton *)utilityButton;

@end
