/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMServiceClient : NSObject {
    VMVoicemailManager * _voicemailManager;
}

@property (nonatomic, retain) VMVoicemailManager *voicemailManager;

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)dealloc;
- (void)handleOnlineStatusChangedNotification:(id)arg1;
- (void)handleSubscriptionStatusChangedNotification:(id)arg1;
- (void)handleVoicemailsChangedNotification:(id)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)setVoicemailManager:(id)arg1;
- (id)sharedAccount;
- (bool)sharedServiceIsSubscribed;
- (id)voicemailManager;

@end