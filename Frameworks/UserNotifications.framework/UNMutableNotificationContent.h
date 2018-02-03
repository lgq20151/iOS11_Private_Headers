/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNMutableNotificationContent : UNNotificationContent

@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, copy) NSNumber *badge;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *categoryIdentifier;
@property (nonatomic, copy) NSString *darwinNotificationName;
@property (nonatomic, copy) NSString *darwinSnoozedNotificationName;
@property (nonatomic, copy) NSString *defaultActionTitle;
@property (getter=isFromSnooze, nonatomic) bool fromSnooze;
@property (nonatomic) bool hasDefaultAction;
@property (nonatomic, copy) NSString *launchImageName;
@property (nonatomic, copy) NSArray *peopleIdentifiers;
@property (nonatomic) bool shouldAddToNotificationsList;
@property (nonatomic) bool shouldAlwaysAlertWhileAppIsForeground;
@property (nonatomic) bool shouldLockDevice;
@property (nonatomic) bool shouldPauseMedia;
@property (getter=isSnoozeable, nonatomic) bool snoozeable;
@property (nonatomic, copy) UNNotificationSound *sound;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *threadIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSDictionary *userInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultActionTitle;
- (void)setAttachments:(id)arg1;
- (void)setBadge:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCategoryIdentifier:(id)arg1;
- (void)setDarwinNotificationName:(id)arg1;
- (void)setDarwinSnoozedNotificationName:(id)arg1;
- (void)setDefaultActionTitle:(id)arg1;
- (void)setFromSnooze:(bool)arg1;
- (void)setHasDefaultAction:(bool)arg1;
- (void)setLaunchImageName:(id)arg1;
- (void)setPeopleIdentifiers:(id)arg1;
- (void)setShouldAddToNotificationsList:(bool)arg1;
- (void)setShouldAlwaysAlertWhileAppIsForeground:(bool)arg1;
- (void)setShouldLockDevice:(bool)arg1;
- (void)setShouldPauseMedia:(bool)arg1;
- (void)setSnoozeable:(bool)arg1;
- (void)setSound:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setThreadIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;

@end
