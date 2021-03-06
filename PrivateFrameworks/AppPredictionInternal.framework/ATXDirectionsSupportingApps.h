/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXDirectionsSupportingApps : NSObject {
    NSSet * _blacklistApps;
}

+ (bool)_directionsModesSupportAutomobile:(id)arg1;
+ (bool)_directionsModesSupportRide:(id)arg1;
+ (bool)_directionsModesSupportTransit:(id)arg1;

- (void).cxx_destruct;
- (id)allEligibleLocationsApplications;
- (id)init;
- (id)initWithBlacklistApps:(id)arg1;
- (id)supportedDirectionsApps;

@end
