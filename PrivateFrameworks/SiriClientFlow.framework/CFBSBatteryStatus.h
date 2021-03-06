/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFBSBatteryStatus : SADomainObject

@property (nonatomic, copy) NSNumber *batteryCharging;
@property (nonatomic, copy) NSNumber *batteryPercent;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, copy) NSNumber *lowBattery;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)batteryCharging;
- (id)batteryPercent;
- (id)deviceName;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)lowBattery;
- (bool)requiresResponse;
- (void)setBatteryCharging:(id)arg1;
- (void)setBatteryPercent:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setLowBattery:(id)arg1;

@end
