/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMFall : NSObject

+ (bool)areStatsAvailable;

- (id)sendStatsDataToUrl:(id)arg1;
- (void)sendStatsDataToUrl:(id)arg1 onCompletion:(id /* block */)arg2;
- (bool)setStatsEnabled:(bool)arg1;
- (void)setStatsEnabled:(bool)arg1 onCompletion:(id /* block */)arg2;
- (void)simulateFallEvent;

@end
