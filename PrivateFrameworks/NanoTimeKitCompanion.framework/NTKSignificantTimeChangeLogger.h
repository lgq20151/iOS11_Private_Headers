/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSignificantTimeChangeLogger : NSObject

+ (void)beginLogging;
+ (id)sharedInstance;

- (void)_handleNotification:(id)arg1;
- (void)_logNotificationReceiptWithName:(id)arg1;
- (void)_startObserving;
- (id)init;

@end
