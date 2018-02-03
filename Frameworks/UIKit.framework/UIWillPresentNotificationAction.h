/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWillPresentNotificationAction : BSAction {
    bool  _cachedDeliverable;
    UNNotification * _cachedNotification;
    NSObject<OS_dispatch_semaphore> * _decodeSemaphore;
}

@property (nonatomic, readonly) bool isDeliverable;
@property (nonatomic, readonly) bool isLocal;
@property (nonatomic, readonly) bool isRemote;
@property (nonatomic, readonly, retain) UNNotification *notification;

- (void).cxx_destruct;
- (long long)UIActionType;
- (void)_blockingWaitForDecodeSemaphore;
- (id)_trigger;
- (id)initWithNotification:(id)arg1 deliverable:(bool)arg2 timeout:(double)arg3 withHandler:(id /* block */)arg4;
- (id)initWithNotification:(id)arg1 timeout:(double)arg2 withHandler:(id /* block */)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isDeliverable;
- (bool)isLocal;
- (bool)isRemote;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)notification;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
