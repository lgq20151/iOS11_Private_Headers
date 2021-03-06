/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationRequestContentProvider : NSObject <NCNotificationStaticContentProviding> {
    <NCNotificationStaticContentProvidingDelegate> * _delegate;
    NCNotificationRequest * _notificationRequest;
}

@property (nonatomic, readonly, copy) id /* block */ cancelAction;
@property (nonatomic, readonly, copy) id /* block */ clearAction;
@property (nonatomic, readonly, copy) id /* block */ closeAction;
@property (nonatomic, readonly, copy) NSDate *date;
@property (getter=isDateAllDay, nonatomic, readonly) bool dateAllDay;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) id /* block */ defaultAction;
@property (nonatomic) <NCNotificationStaticContentProvidingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) NSArray *interfaceActions;
@property (nonatomic, readonly) unsigned long long messageNumberOfLines;
@property (nonatomic, retain) NCNotificationRequest *notificationRequest;
@property (nonatomic, readonly, copy) NSString *primarySubtitleText;
@property (nonatomic, readonly, copy) NSString *primaryText;
@property (nonatomic, readonly, copy) NSString *secondaryText;
@property (nonatomic, readonly) bool showsTextInputOnAppearance;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIImage *thumbnail;
@property (nonatomic, readonly, copy) NSTimeZone *timeZone;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id /* block */)_actionForNotificationAction:(id)arg1;
- (id)_appBundleIdentifer;
- (id /* block */)cancelAction;
- (id /* block */)clearAction;
- (id /* block */)closeAction;
- (id)date;
- (id /* block */)defaultAction;
- (id)delegate;
- (id)icon;
- (id)init;
- (id)initWithNotificationRequest:(id)arg1;
- (id)interfaceActions;
- (bool)isDateAllDay;
- (unsigned long long)messageNumberOfLines;
- (id)notificationRequest;
- (id)primarySubtitleText;
- (id)primaryText;
- (id)secondaryText;
- (void)setDelegate:(id)arg1;
- (void)setNotificationRequest:(id)arg1;
- (bool)showsTextInputOnAppearance;
- (id)thumbnail;
- (id)timeZone;
- (id)title;

@end
