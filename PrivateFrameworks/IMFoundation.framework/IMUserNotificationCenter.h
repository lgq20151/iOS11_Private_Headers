/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMUserNotificationCenter : NSObject {
    NSMutableDictionary * _identifierToBlockQueueMap;
    NSMutableDictionary * _identifierToCFUserNotificationMap;
    NSMutableDictionary * _identifierToIMUserNotificationQueueMap;
    NSMutableDictionary * _identifierToListenerQueueMap;
    NSMutableDictionary * _identifierToRunLoopSourcesMap;
}

@property (nonatomic, retain) NSMutableDictionary *identifierToBlockQueueMap;
@property (nonatomic, retain) NSMutableDictionary *identifierToCFUserNotificationMap;
@property (nonatomic, retain) NSMutableDictionary *identifierToIMUserNotificationQueueMap;
@property (nonatomic, retain) NSMutableDictionary *identifierToListenerQueueMap;
@property (nonatomic, retain) NSMutableDictionary *identifierToRunLoopSourcesMap;

+ (id)sharedInstance;

- (void)_cancelActiveUserNotificationForIdentifier:(id)arg1;
- (id /* block */)_dequeueBlockForIdentifier:(id)arg1;
- (id)_dequeueListenerForIdentifier:(id)arg1;
- (id)_dequeueUserNotificationForIdentifier:(id)arg1;
- (void)_displayNextUserNotificationForIdentifier:(id)arg1;
- (void)_enqueueBlock:(id /* block */)arg1 forIdentifier:(id)arg2;
- (void)_enqueueListener:(id)arg1 forIdentifier:(id)arg2;
- (void)_enqueueUserNotification:(id)arg1 forIdentifier:(id)arg2;
- (id /* block */)_frontBlockForIdentifier:(id)arg1;
- (id)_frontListenerForIdentifier:(id)arg1;
- (id)_frontUserNotificationForIdentifier:(id)arg1;
- (void)_handleUserNotification:(struct __CFUserNotification { }*)arg1 responseFlags:(unsigned long long)arg2;
- (void)addUserNotification:(id)arg1 listener:(id)arg2;
- (void)addUserNotification:(id)arg1 listener:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)countForIdentifier:(id)arg1;
- (void)dealloc;
- (id)identifierToBlockQueueMap;
- (id)identifierToCFUserNotificationMap;
- (id)identifierToIMUserNotificationQueueMap;
- (id)identifierToListenerQueueMap;
- (id)identifierToRunLoopSourcesMap;
- (void)removeAllListeners;
- (void)removeListener:(id)arg1;
- (void)removeNotificationsForServiceIdentifier:(id)arg1;
- (void)setIdentifierToBlockQueueMap:(id)arg1;
- (void)setIdentifierToCFUserNotificationMap:(id)arg1;
- (void)setIdentifierToIMUserNotificationQueueMap:(id)arg1;
- (void)setIdentifierToListenerQueueMap:(id)arg1;
- (void)setIdentifierToRunLoopSourcesMap:(id)arg1;

@end