/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface _UNNotificationServiceExtensionRemoteContext : _UNNotificationServiceExtensionContext <_UNNotificationServiceExtensionRemoteXPCInterface> {
    UNNotificationServiceExtension * _extensionInstance;
    struct atomic_flag { 
        bool _Value; 
    }  _hasRepliedFlag;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UNNotificationServiceExtension *extensionInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_stageAttachmentsForNotificationContent:(id)arg1;
- (void)didReceiveNotificationRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)extensionInstance;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)serviceExtensionTimeWillExpire;
- (void)setExtensionInstance:(id)arg1;

@end
