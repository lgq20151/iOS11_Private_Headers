/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTMessage : NSObject {
    bool  _bypassSupportedMessageModesCheck;
    NSString * _contentType;
    NSMutableDictionary * _contentTypeParams;
    NSString * _countryCode;
    NSDate * _date;
    NSMutableArray * _items;
    unsigned int  _messageId;
    int  _messageType;
    NSDictionary * _rawHeaders;
    NSMutableArray * _recipients;
    unsigned int  _replaceMessage;
    NSObject<CTMessageAddress><NSCopying> * _sender;
    CTPhoneNumber * _serviceCenter;
    NSString * _subject;
    NSUUID * _uuid;
}

@property (nonatomic) bool bypassSupportedMessageModesCheck;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, readonly, copy) NSString *countryCode;
@property (readonly) NSDate *date;
@property (readonly) NSArray *items;
@property (nonatomic) unsigned int messageId;
@property (nonatomic) int messageType;
@property (readonly) NSDictionary *rawHeaders;
@property (readonly) NSArray *recipients;
@property (readonly) unsigned int replaceMessage;
@property (nonatomic, copy) NSObject<CTMessageAddress><NSCopying> *sender;
@property (nonatomic, copy) CTPhoneNumber *serviceCenter;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, retain) NSUUID *uniqueIdentifier;

- (void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2;
- (id)addData:(id)arg1 withContentType:(id)arg2;
- (void)addEmailRecipient:(id)arg1;
- (id)addPart:(id)arg1;
- (void)addPhoneRecipient:(id)arg1;
- (void)addRecipient:(id)arg1;
- (id)addText:(id)arg1;
- (id)allContentTypeParameterNames;
- (bool)bypassSupportedMessageModesCheck;
- (id)contentType;
- (id)contentTypeParameterWithName:(id)arg1;
- (id)countryCode;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithDate:(id)arg1;
- (id)items;
- (unsigned int)messageId;
- (int)messageType;
- (id)rawHeaders;
- (id)recipients;
- (void)removePartAtIndex:(unsigned long long)arg1;
- (void)removeRecipient:(id)arg1;
- (void)removeRecipientsInArray:(id)arg1;
- (unsigned int)replaceMessage;
- (id)sender;
- (id)serviceCenter;
- (void)setBypassSupportedMessageModesCheck:(bool)arg1;
- (void)setContentType:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setMessageId:(unsigned int)arg1;
- (void)setMessageType:(int)arg1;
- (void)setRawHeaders:(id)arg1;
- (void)setRecipient:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setReplaceMessage:(unsigned int)arg1;
- (void)setSender:(id)arg1;
- (void)setServiceCenter:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)subject;
- (id)uniqueIdentifier;

@end
