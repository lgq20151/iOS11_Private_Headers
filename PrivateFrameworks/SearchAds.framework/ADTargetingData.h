/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
 */

@interface ADTargetingData : NSObject {
    double  _expirationDate;
    NSString * _toroIDString;
    bool  _updateInFlight;
    NSString * _userTargeting;
}

@property (nonatomic, readonly) double expirationDate;
@property (nonatomic, readonly) NSString *toroIDString;
@property (readonly) bool updateInFlight;
@property (nonatomic, readonly) NSString *userTargeting;

- (void).cxx_destruct;
- (bool)dataHasExpired;
- (double)expirationDate;
- (void)expire;
- (bool)idHasChanged;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)refreshTargetingData:(id /* block */)arg1;
- (void)saveTargetingData;
- (void)setExpirationDate:(double)arg1;
- (void)setToroIDString:(id)arg1;
- (void)setUserTargeting:(id)arg1;
- (id)targetingParameter;
- (id)targetingString;
- (id)toroIDString;
- (bool)updateInFlight;
- (id)userTargeting;

@end
