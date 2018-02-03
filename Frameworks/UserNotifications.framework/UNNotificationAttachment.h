/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationAttachment : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    unsigned long long  _family;
    NSString * _identifier;
    UNNotificationAttachmentOptions * _options;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) unsigned long long family;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) UNNotificationAttachmentOptions *options;
@property (nonatomic, readonly, copy) NSString *type;

+ (id)attachmentWithIdentifier:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (unsigned long long)stagingActionForAttachmentURL:(id)arg1 bundleProxy:(id)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)family;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 family:(unsigned long long)arg2 URL:(id)arg3 type:(id)arg4 options:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)options;
- (id)type;

@end
