/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

@interface IMAssistantMessageSendHandler : IMAssistantMessageHandler <INSendMessageIntentHandling> {
    IMChatRegistry * _chatRegistry;
}

@property (nonatomic, retain) IMChatRegistry *chatRegistry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)chatRegistry;
- (void)handleSendMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveContentForSendMessage:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)resolveMessageContentWithString:(id)arg1;
- (void)resolveRecipients:(id)arg1 forIntent:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resolveRecipientsForSendMessage:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveSpeakableGroupNameForSendMessage:(id)arg1 withCompletion:(id /* block */)arg2;
- (long long)sendMessageWithText:(id)arg1 toChat:(id)arg2;
- (void)setChatRegistry:(id)arg1;

@end
