/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDiscoveredUserInfo : NSObject <NSCopying, NSSecureCoding> {
    CNContact * _displayContact;
    CKRecordID * _userRecordID;
}

@property (nonatomic, readonly, copy) CNContact *displayContact;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, readonly, copy) CKRecordID *userRecordID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayContact;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserRecordID:(id)arg1 displayContact:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)lastName;
- (id)userRecordID;

@end
