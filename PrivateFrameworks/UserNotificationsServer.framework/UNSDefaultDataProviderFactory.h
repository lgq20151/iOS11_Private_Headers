/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSDefaultDataProviderFactory : NSObject <BBObserverDelegate> {
    UNSApplicationLauncher * _appLauncher;
    UNSAttachmentsService * _attachmentsService;
    NSMutableSet * _authorizedBundleIdentifiers;
    UNSNotificationCategoryRepository * _categoryRepository;
    BBDataProviderConnection * _dataProviderConnection;
    NSMutableDictionary * _dataProvidersByBundleIdentifier;
    NSMutableDictionary * _descriptionsByBundleIdentifier;
    UNSNotificationRepository * _notificationRepository;
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    BBSettingsGateway * _settingsGateway;
    BBObserver * _settingsObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notificationSettingsDidChange:(id)arg1;
- (void)_queue_addObserver:(id)arg1;
- (void)_queue_applicationDidDisableNotificationSettings:(id)arg1;
- (void)_queue_applicationDidEnableNotificationSettings:(id)arg1;
- (void)_queue_applicationsDidInstall:(id)arg1;
- (void)_queue_applicationsDidUninstall:(id)arg1;
- (void)_queue_createDataProviderWithBundleIdentifier:(id)arg1;
- (void)_queue_createDataProviderWithBundleIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_queue_createNewDefaultDataProviders;
- (id)_queue_dataProviderForBundleIdentifier:(id)arg1;
- (void)_queue_enableNotifications:(bool)arg1 withAuthorizationOptions:(unsigned long long)arg2 forBundleIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_queue_getAuthorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_queue_getNotificationSettingsForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_queue_getSectionInfoForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_queue_hasBundleIdentifierRequestedAuthorization:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_queue_notificationSettingsDidChange:(id)arg1;
- (void)_queue_removeDataProviderWithBundleIdentifier:(id)arg1;
- (void)_queue_removeObserver:(id)arg1;
- (void)_queue_setSectionInfo:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (void)getAuthorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getNotificationSettingsForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)hasBundleIdentifierRequestedAuthorization:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithApplicationLauncher:(id)arg1 categoryRepository:(id)arg2 notificationRepository:(id)arg3 attachmentsService:(id)arg4;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;

@end
