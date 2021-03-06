/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface FRPublisherPremiumFeature : FRPersonalizationFeature {
    bool  _premium;
}

@property (nonatomic) bool premium;

- (id)fr_description;
- (id)init;
- (id)initWithPersonalizationIdentifier:(id)arg1;
- (id)initWithTagID:(id)arg1 premium:(bool)arg2;
- (bool)premium;
- (void)setPremium:(bool)arg1;

@end
