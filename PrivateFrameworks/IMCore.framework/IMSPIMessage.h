/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMSPIMessage : NSObject {
    NSArray * _attachments;
    NSAttributedString * _attributedText;
    NSString * _bundleId;
    NSArray * _chatGuids;
    NSString * _chatIdentifier;
    NSDate * _date;
    NSDate * _dateRead;
    NSString * _displayAppName;
    NSString * _displayName;
    NSString * _effect;
    NSString * _groupID;
    NSString * _guid;
    bool  _isAudioMessage;
    bool  _isGroupChat;
    bool  _isOutgoing;
    bool  _isRead;
    NSDate * _lastReadDate;
    long long  _messageID;
    long long  _messageType;
    NSArray * _recipients;
    IMSPIMessage * _referencedMessage;
    IMSPIHandle * _sender;
    NSString * _service;
    NSString * _subject;
    NSString * _text;
}

@property (retain) NSArray *attachments;
@property (retain) NSAttributedString *attributedText;
@property (retain) NSString *bundleId;
@property (retain) NSArray *chatGuids;
@property (retain) NSString *chatIdentifier;
@property (retain) NSDate *date;
@property (retain) NSDate *dateRead;
@property (retain) NSString *displayAppName;
@property (retain) NSString *displayName;
@property (retain) NSString *effect;
@property (retain) NSString *groupID;
@property (retain) NSString *guid;
@property bool isAudioMessage;
@property bool isGroupChat;
@property bool isOutgoing;
@property bool isRead;
@property (retain) NSDate *lastReadDate;
@property long long messageID;
@property long long messageType;
@property (retain) NSArray *recipients;
@property (retain) IMSPIMessage *referencedMessage;
@property (retain) IMSPIHandle *sender;
@property (retain) NSString *service;
@property (retain) NSString *subject;
@property (retain) NSString *text;
@property (readonly) NSURL *url;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)attachments;
- (id)attributedText;
- (id)bundleId;
- (id)chatGuids;
- (id)chatIdentifier;
- (id)date;
- (id)dateRead;
- (void)dealloc;
- (id)description;
- (id)displayAppName;
- (id)displayName;
- (id)effect;
- (id)groupID;
- (id)guid;
- (bool)isAudioMessage;
- (bool)isGroupChat;
- (bool)isOutgoing;
- (bool)isRead;
- (id)lastReadDate;
- (long long)messageID;
- (long long)messageType;
- (id)recipients;
- (id)referencedMessage;
- (id)sender;
- (id)service;
- (void)setAttachments:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setChatGuids:(id)arg1;
- (void)setChatIdentifier:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDateRead:(id)arg1;
- (void)setDisplayAppName:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setIsAudioMessage:(bool)arg1;
- (void)setIsGroupChat:(bool)arg1;
- (void)setIsOutgoing:(bool)arg1;
- (void)setIsRead:(bool)arg1;
- (void)setLastReadDate:(id)arg1;
- (void)setMessageID:(long long)arg1;
- (void)setMessageType:(long long)arg1;
- (void)setRecipients:(id)arg1;
- (void)setReferencedMessage:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setService:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setText:(id)arg1;
- (id)subject;
- (id)text;
- (id)url;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (long long)messageRowIDForURL:(id)arg1;
+ (bool)messagesForGUID:(id)arg1 completion:(id /* block */)arg2;
+ (bool)messagesForIdentifier:(long long)arg1 completion:(id /* block */)arg2;
+ (void)messagesForURLs:(id)arg1 completion:(id /* block */)arg2;

@end
