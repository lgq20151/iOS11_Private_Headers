/* made by EzioChiu.
 */

@protocol FCMutableTodayPrivateData <FCTodayPrivateData>

@required

- (NSSet *)autoFavoriteTagIDs;
- (<FCDerivedPersonalizationData><NSCoding> *)derivedPersonalizationData;
- (NSString *)feldsparID;
- (NSSet *)mutedTagIDs;
- (NSNumber *)onboardingVersion;
- (NSSet *)purchasedTagIDs;
- (NSArray *)rankedPersonalSubscribedTagIDs;
- (NSDictionary *)recentlyReadHistoryItems;
- (NSArray *)recentlySeenHistoryItems;
- (void)setAutoFavoriteTagIDs:(NSSet *)arg1;
- (void)setDerivedPersonalizationData:(id <FCDerivedPersonalizationData><NSCoding>)arg1;
- (void)setFeldsparID:(NSString *)arg1;
- (void)setMutedTagIDs:(NSSet *)arg1;
- (void)setOnboardingVersion:(NSNumber *)arg1;
- (void)setPurchasedTagIDs:(NSSet *)arg1;
- (void)setRankedPersonalSubscribedTagIDs:(NSArray *)arg1;
- (void)setRecentlyReadHistoryItems:(NSDictionary *)arg1;
- (void)setRecentlySeenHistoryItems:(NSArray *)arg1;

@end
