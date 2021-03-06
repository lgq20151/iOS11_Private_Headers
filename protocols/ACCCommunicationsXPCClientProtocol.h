/* made by EzioChiu.
 */

@protocol ACCCommunicationsXPCClientProtocol <NSObject>

@required

- (void)acceptCallWithAction:(int)arg1 callUUID:(NSString *)arg2;
- (void)endAllCalls;
- (void)endCallWithAction:(int)arg1 callUUID:(NSString *)arg2;
- (void)initiateCallToDestination:(NSString *)arg1 withService:(int)arg2 addressBookID:(NSString *)arg3;
- (void)initiateCallToVoicemail;
- (void)initiateRedial;
- (void)mergeCalls;
- (void)sendDTMF:(int)arg1 forCallWithUUID:(NSString *)arg2;
- (void)swapCalls;
- (void)triggerCallStateUpdates;
- (void)triggerCommunicationsUpdate;
- (void)updateHoldStatus:(bool)arg1 forCallWithUUID:(NSString *)arg2;
- (void)updateMuteStatus:(bool)arg1;
- (void)updateSubscriberList:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
