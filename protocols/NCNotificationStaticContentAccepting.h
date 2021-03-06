/* made by EzioChiu.
 */

@protocol NCNotificationStaticContentAccepting <NSObject>

@required

- (NSDate *)date;
- (UIImage *)icon;
- (NSArray *)interfaceActions;
- (bool)isDateAllDay;
- (NSString *)primarySubtitleText;
- (NSString *)primaryText;
- (NSString *)secondaryText;
- (void)setDate:(NSDate *)arg1;
- (void)setIcon:(UIImage *)arg1;
- (void)setInterfaceActions:(NSArray *)arg1;
- (void)setPrimarySubtitleText:(NSString *)arg1;
- (void)setPrimaryText:(NSString *)arg1;
- (void)setSecondaryText:(NSString *)arg1;
- (void)setTimeZone:(NSTimeZone *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSTimeZone *)timeZone;
- (NSString *)title;

@optional

- (UIView *)accessoryView;
- (unsigned long long)messageNumberOfLines;
- (void)setAccessoryView:(UIView *)arg1;
- (void)setMessageNumberOfLines:(unsigned long long)arg1;
- (void)setThumbnail:(UIImage *)arg1;
- (UIImage *)thumbnail;

@end
