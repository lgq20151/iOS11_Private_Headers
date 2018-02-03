/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCMDMPayload : MCPayload {
    int  _accessRights;
    NSString * _checkInURLString;
    bool  _checkOutWhenRemoved;
    NSNumber * _checkOutWhenRemovedNum;
    NSData * _identityPersistentID;
    NSString * _identityUUID;
    NSArray * _serverCapabilities;
    NSString * _serverURLString;
    bool  _signMessage;
    NSNumber * _signMessageNum;
    NSString * _topic;
    bool  _useDevelopmentAPNS;
    NSNumber * _useDevelopmentAPNSNum;
}

@property (nonatomic, readonly) int accessRights;
@property (nonatomic, readonly, retain) NSString *checkInURLString;
@property (nonatomic, readonly) bool checkOutWhenRemoved;
@property (nonatomic, readonly) NSNumber *checkOutWhenRemovedNum;
@property (nonatomic, retain) NSData *identityPersistentID;
@property (nonatomic, readonly, retain) NSString *identityUUID;
@property (nonatomic, readonly, retain) NSArray *localizedAccessRightDescriptions;
@property (nonatomic, readonly) NSArray *serverCapabilities;
@property (nonatomic, readonly, retain) NSString *serverURLString;
@property (nonatomic, readonly) bool signMessage;
@property (nonatomic, readonly) NSNumber *signMessageNum;
@property (nonatomic, readonly, retain) NSString *topic;
@property (nonatomic, readonly) bool useDevelopmentAPNS;
@property (nonatomic, readonly) NSNumber *useDevelopmentAPNSNum;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)_invalidRightsError;
- (id)_invalidTopicError;
- (id)_nonHTTPSURLErrorForField:(id)arg1;
- (int)accessRights;
- (id)checkInURLString;
- (bool)checkOutWhenRemoved;
- (id)checkOutWhenRemovedNum;
- (id)description;
- (id)identityPersistentID;
- (id)identityUUID;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)localizedAccessRightDescriptions;
- (id)payloadDescriptionKeyValueSections;
- (id)serverCapabilities;
- (id)serverURLString;
- (void)setIdentityPersistentID:(id)arg1;
- (bool)signMessage;
- (id)signMessageNum;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
- (id)topic;
- (bool)useDevelopmentAPNS;
- (id)useDevelopmentAPNSNum;

@end
