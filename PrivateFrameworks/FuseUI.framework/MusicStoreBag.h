/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreBag : NSObject {
    NSDictionary * _bagDictionary;
}

@property (nonatomic, readonly) NSDictionary *bagDictionary;
@property (nonatomic, readonly) NSArray *iOSVersionsForFormerFreeTrialUpsell;
@property (nonatomic, readonly) NSArray *iOSVersionsForNoThanksUpsell;
@property (nonatomic, readonly) NSArray *iOSVersionsForNotNowUpsell;
@property (nonatomic, readonly) bool isIgnoringAddToPlaylistUserSetting;
@property (nonatomic, readonly) unsigned long long librarySharedPlaylistTrackCountLimit;
@property (nonatomic, readonly) long long minimumNumberOfDaysBetweenPresentingWelcomeScreen;
@property (nonatomic, readonly) float popularityStarThreshold;
@property (nonatomic, readonly) NSURL *prominentRadioStationInfoURL;
@property (nonatomic, readonly) NSString *storeFrontSuffix;
@property (nonatomic, readonly) bool supportsConnect;
@property (nonatomic, readonly) bool supportsSubscription;
@property (nonatomic, readonly) NSDictionary *tabConfigurations;
@property (nonatomic, readonly) long long versionForFormerFreeTrialUpsell;
@property (nonatomic, readonly) long long versionForNoThanksUpsell;
@property (nonatomic, readonly) long long versionForNotNowUpsell;

- (void).cxx_destruct;
- (id)_iOSVersionsForUpsellTypeKey:(id)arg1;
- (id)_subscriptionDictionary;
- (long long)_upsellVersionForKey:(id)arg1;
- (id)bagDictionary;
- (id)iOSVersionsForFormerFreeTrialUpsell;
- (id)iOSVersionsForNoThanksUpsell;
- (id)iOSVersionsForNotNowUpsell;
- (id)initWithBagDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIgnoringAddToPlaylistUserSetting;
- (unsigned long long)librarySharedPlaylistTrackCountLimit;
- (long long)minimumNumberOfDaysBetweenPresentingWelcomeScreen;
- (float)popularityStarThreshold;
- (id)prominentRadioStationInfoURL;
- (id)storeFrontSuffix;
- (bool)supportsConnect;
- (bool)supportsSubscription;
- (id)tabConfigurations;
- (long long)versionForFormerFreeTrialUpsell;
- (long long)versionForNoThanksUpsell;
- (long long)versionForNotNowUpsell;

@end