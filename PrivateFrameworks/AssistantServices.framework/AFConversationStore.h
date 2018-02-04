/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFConversationStore : NSObject {
    NSMutableDictionary * _conversationsByIdentifier;
}

@property (getter=_conversationsByIdentifier, nonatomic, readonly) NSMutableDictionary *conversationsByIdentifier;

- (void).cxx_destruct;
- (id)_conversationsByIdentifier;
- (void)_registerConversation:(id)arg1 withIdentifier:(id)arg2;
- (bool)getConversation:(id*)arg1 withIdentifier:(id)arg2 error:(id*)arg3;
- (id)init;
- (bool)removeConversationWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)saveConversation:(id)arg1 identifier:(id)arg2 error:(id*)arg3;

@end