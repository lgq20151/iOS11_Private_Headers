/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKRequestContext : NSObject {
    NSDate * _beforeDate;
    NSString * _conversationId;
    unsigned long long  _count;
    bool  _hasProtectedMessages;
    NSArray * _mailboxes;
    unsigned long long  _messagesForSpecialMailbox;
}

@property (nonatomic, retain) NSDate *beforeDate;
@property (nonatomic, retain) NSString *conversationId;
@property (nonatomic) unsigned long long count;
@property (nonatomic) bool hasProtectedMessages;
@property (nonatomic, retain) NSArray *mailboxes;
@property (nonatomic) unsigned long long messagesForSpecialMailbox;

- (void).cxx_destruct;
- (id)beforeDate;
- (id)conversationId;
- (unsigned long long)count;
- (bool)hasProtectedMessages;
- (id)mailboxes;
- (unsigned long long)messagesForSpecialMailbox;
- (void)setBeforeDate:(id)arg1;
- (void)setConversationId:(id)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setHasProtectedMessages:(bool)arg1;
- (void)setMailboxes:(id)arg1;
- (void)setMessagesForSpecialMailbox:(unsigned long long)arg1;

@end
