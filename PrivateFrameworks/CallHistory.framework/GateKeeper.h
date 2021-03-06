/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface GateKeeper : CHLogger {
    bool  _hasDeviceBeenUnlockedSinceBoot;
}

@property bool hasDeviceBeenUnlockedSinceBoot;

+ (id)instance;

- (void)cacheUnlockSinceBootState;
- (bool)hasDeviceBeenUnlockedSinceBoot;
- (id)init;
- (void)reFetch;
- (void)setHasDeviceBeenUnlockedSinceBoot:(bool)arg1;
- (void)setupMobileKeyBag;

@end
