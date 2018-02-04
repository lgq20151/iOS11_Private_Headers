/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKLocationManager : NSObject

+ (id)fallbackLocation;
+ (id)sharedLocationManager;

- (id)anyLocation;
- (id)currentLocation;
- (id)previousLocation;
- (struct NSString { Class x1; }*)startLocationUpdatesWithHandler:(id /* block */)arg1;
- (struct NSString { Class x1; }*)startLocationUpdatesWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)stopLocationUpdatesForToken:(struct NSString { Class x1; }*)arg1;

@end