/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSSubscription : NSObject <NSCopying, NSSecureCoding> {
    long long  _accessLevel;
    NSDate * _creationDate;
    NSString * _derivedSubscriptionInfo;
    NSDate * _expirationDate;
    NSDate * _modificationDate;
    NSString * _providedSubscriptionInfo;
    VSSubscriptionSource * _source;
    NSString * _subscriberIdentifierHash;
    NSArray * _tierIdentifiers;
}

@property (nonatomic) long long accessLevel;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSString *derivedSubscriptionInfo;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSString *providedSubscriptionInfo;
@property (nonatomic, copy) VSSubscriptionSource *source;
@property (nonatomic, copy) NSString *subscriberIdentifierHash;
@property (nonatomic, copy) NSString *subscriptionInfo;
@property (nonatomic, copy) NSArray *tierIdentifiers;
@property (nonatomic, readonly, copy) NSData *versionHash;

+ (id)keyPathsForValuesAffectingSubscriptionInfo;
+ (id)keyPathsForValuesAffectingVersionHash;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_updateHash:(id)arg1 withValueForProperty:(id)arg2;
- (long long)accessLevel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)derivedSubscriptionInfo;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)modificationDate;
- (id)providedSubscriptionInfo;
- (void)setAccessLevel:(long long)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDerivedSubscriptionInfo:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setProvidedSubscriptionInfo:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSubscriberIdentifierHash:(id)arg1;
- (void)setSubscriptionInfo:(id)arg1;
- (void)setTierIdentifiers:(id)arg1;
- (id)source;
- (id)subscriberIdentifierHash;
- (id)subscriptionInfo;
- (id)tierIdentifiers;
- (id)versionHash;

@end