/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDADraftMessage : DAMailMessage {
    NSString * _bodyData;
    unsigned long long  _clientID;
    MFMailMessage * _message;
}

- (id)bcc;
- (id)body;
- (int)bodyType;
- (id)cc;
- (id)clientID;
- (id)date;
- (void)dealloc;
- (id)from;
- (id)initWithMailMessage:(id)arg1 clientID:(unsigned long long)arg2;
- (id)messageIDHeader;
- (id)replyTo;
- (id)serverID;
- (void)setClientID:(unsigned long long)arg1;
- (id)subject;
- (id)to;

@end
