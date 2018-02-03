/* made by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACCredentialItem : NSObject <ACProtobufCoding, NSSecureCoding> {
    NSString * _accountIdentifier;
    ACAccountStore * _accountStore;
    NSMutableSet * _dirtyProperties;
    NSDate * _expirationDate;
    NSURL * _objectID;
    bool  _persistent;
    NSString * _serviceName;
}

@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic) ACAccountStore *accountStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDirty, nonatomic, readonly) bool dirty;
@property (nonatomic, readonly) NSSet *dirtyProperties;
@property (nonatomic, retain) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *objectID;
@property (getter=isPersistent, nonatomic) bool persistent;
@property (nonatomic, readonly) NSString *serviceName;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_encodeProtobuf;
- (id)_encodeProtobufData;
- (id)_initWithProtobuf:(id)arg1;
- (id)_initWithProtobufData:(id)arg1;
- (void)_markPropertyDirty:(id)arg1;
- (id)accountIdentifier;
- (id)accountStore;
- (void)clearDirtyProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dirtyProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)fullDescription;
- (id)initWithAccountIdentifier:(id)arg1 serviceName:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagedCredentialItem:(id)arg1;
- (id)initWithManagedCredentialItem:(id)arg1 accountStore:(id)arg2;
- (bool)isDirty;
- (bool)isExpired;
- (bool)isPersistent;
- (bool)isPropertyDirty:(id)arg1;
- (void)markAllPropertiesDirty;
- (id)objectID;
- (id)serviceName;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setPersistent:(bool)arg1;
- (void)setServiceName:(id)arg1;

@end
