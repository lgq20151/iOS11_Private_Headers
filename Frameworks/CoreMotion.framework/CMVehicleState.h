/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMVehicleState : NSObject

+ (bool)isAvailable;
+ (id)mostRecentInVehicle;
+ (id)mostRecentVehicleConnection;
+ (unsigned long long)vehicularHints;
+ (unsigned long long)vehicularState;

@end
