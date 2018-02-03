/* made by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACDManagedAccountType : NSManagedObject

@property (nonatomic, retain) NSSet *accessKeys;
@property (nonatomic, retain) NSString *accountTypeDescription;
@property (nonatomic, retain) NSSet *accounts;
@property (nonatomic, retain) NSString *credentialProtectionPolicy;
@property (nonatomic, retain) NSString *credentialType;
@property (nonatomic, retain) NSNumber *encryptAccountProperties;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSNumber *obsolete;
@property (nonatomic, retain) NSString *owningBundleID;
@property (nonatomic, retain) NSSet *permission;
@property (nonatomic, retain) NSSet *supportedDataclasses;
@property (nonatomic, retain) NSNumber *supportsAuthentication;
@property (nonatomic, retain) NSNumber *supportsMultipleAccounts;
@property (nonatomic, retain) NSSet *syncableDataclasses;
@property (nonatomic, retain) NSNumber *visibility;

@end
