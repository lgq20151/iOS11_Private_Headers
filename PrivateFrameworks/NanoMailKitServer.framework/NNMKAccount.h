/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKAccount : NSObject <NSSecureCoding> {
    NSString * _accountId;
    NSString * _displayName;
    NSArray * _emailAddresses;
    NSArray * _mailboxes;
    bool  _shouldArchive;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSArray *emailAddresses;
@property (nonatomic, retain) NSArray *mailboxes;
@property (nonatomic) bool shouldArchive;

+ (id)inboxesFromAccounts:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountId;
- (id)description;
- (id)displayName;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mailboxes;
- (void)setAccountId:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setMailboxes:(id)arg1;
- (void)setShouldArchive:(bool)arg1;
- (bool)shouldArchive;

@end
