/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLIndoorCommonHooks : NSObject

+ (id)filterLocationGroups:(id)arg1 forOperatingMode:(long long)arg2;
+ (id)nearestVenues:(struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x_1_1_1; } x1; })arg1 availableVenues:(id)arg2 latestPosition:(id)arg3 availabilityZScoreConfidenceInterval:(double)arg4 settings:(id)arg5;
+ (id)nearestVenues:(struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x_1_1_1; } x1; })arg1 availableVenues:(id)arg2 latestPosition:(id)arg3 availabilityZScoreConfidenceInterval:(double)arg4 settings:(const struct NearestVenueSettings { id x1; id x2; }*)arg5 isAllowedMultipleVenues:(bool)arg6;
+ (id)nearestVenuesImpl:(struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x_1_1_1; } x1; })arg1 availableVenues:(id)arg2 latestPosition:(id)arg3 availabilityZScoreConfidenceInterval:(double)arg4 settings:(const struct NearestVenueSettings { id x1; id x2; }*)arg5 isAllowedMultipleVenues:(bool)arg6;

@end
