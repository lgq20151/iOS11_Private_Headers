/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSIdentityProvider : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _appAdamIDs;
    NSURL * _appStoreRoomURL;
    NSURL * _authenticationURL;
    bool  _developer;
    NSString * _nameForSorting;
    bool  _prohibitedByStore;
    VSOptional * _providerID;
    VSOptional * _providerInfo;
    NSNumber * _rankForSorting;
    NSArray * _supportedAuthenticationSchemes;
    NSArray * _supportedTemplates;
    VSOptional * _uniqueID;
}

@property (nonatomic, copy) NSArray *appAdamIDs;
@property (nonatomic, copy) NSURL *appStoreRoomURL;
@property (nonatomic, copy) NSURL *authenticationURL;
@property (getter=isDeveloper, nonatomic) bool developer;
@property (nonatomic, readonly) VSOptional *displayName;
@property (nonatomic, copy) NSString *nameForSorting;
@property (getter=isProhibitedByStore, nonatomic) bool prohibitedByStore;
@property (nonatomic, retain) VSOptional *providerID;
@property (nonatomic, retain) VSOptional *providerInfo;
@property (nonatomic, copy) NSNumber *rankForSorting;
@property (nonatomic, copy) NSArray *supportedAuthenticationSchemes;
@property (nonatomic, copy) NSArray *supportedTemplates;
@property (nonatomic, readonly) bool supportsTemplatesSufficientForCurrentPlatform;
@property (nonatomic, readonly) bool supportsTemplatesSufficientForSomeKnownPlatform;
@property (nonatomic, retain) VSOptional *uniqueID;

+ (id)keyPathsForValuesAffectingDisplayName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appAdamIDs;
- (id)appStoreRoomURL;
- (id)authenticationURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isDeveloper;
- (bool)isEqual:(id)arg1;
- (bool)isFullySupportedForRequestsExpectingAuthenticationSchemes:(id)arg1;
- (bool)isProhibitedByStore;
- (id)nameForSorting;
- (id)providerID;
- (id)providerInfo;
- (id)rankForSorting;
- (void)setAppAdamIDs:(id)arg1;
- (void)setAppStoreRoomURL:(id)arg1;
- (void)setAuthenticationURL:(id)arg1;
- (void)setDeveloper:(bool)arg1;
- (void)setNameForSorting:(id)arg1;
- (void)setProhibitedByStore:(bool)arg1;
- (void)setProviderID:(id)arg1;
- (void)setProviderInfo:(id)arg1;
- (void)setRankForSorting:(id)arg1;
- (void)setSupportedAuthenticationSchemes:(id)arg1;
- (void)setSupportedTemplates:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)supportedAuthenticationSchemes;
- (id)supportedTemplates;
- (bool)supportsRequestsExpectingAuthenticationSchemes:(id)arg1;
- (bool)supportsTemplatesSufficientForCurrentPlatform;
- (bool)supportsTemplatesSufficientForSomeKnownPlatform;
- (id)uniqueID;

@end