/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSNotificationManager : NSObject <BBRemoteDataProvider> {
    BBDataProviderConnection * _bbConnection;
    BBDataProviderProxy * _bbProxy;
    NSMutableSet * _notifications;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_notificationWithIdentifier:(id)arg1;
- (id)defaultSectionInfo;
- (void)getPNGDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 sizeConstraints:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)handleBulletinActionResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (void)invalidate;
- (void)scheduleNotification:(id)arg1;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (id)sortDescriptors;
- (void)withdrawNotificationsWithProcessID:(int)arg1;

@end
