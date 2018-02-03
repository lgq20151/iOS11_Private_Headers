/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNRemoteNotificationRegistrar : NSObject <UNUserNotificationServiceConnectionObserver> {
    NSString * _bundleIdentifier;
    <UNRemoteNotificationRegistrarDelegate> * _delegate;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UNRemoteNotificationRegistrarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)currentRegistrar;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)getAllowsRemoteNotificationsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)invalidateTokenForRemoteNotifications;
- (void)requestTokenForRemoteNotificationsWithCompletionHandler:(id /* block */)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
