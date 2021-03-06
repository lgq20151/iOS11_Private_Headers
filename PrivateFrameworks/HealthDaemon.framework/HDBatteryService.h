/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDBatteryService : HDHealthService {
    CBCharacteristic * _batteryCharacteristic;
}

@property (nonatomic, retain) CBCharacteristic *batteryCharacteristic;

+ (id)implementedProperties;
+ (long long)serviceType;
+ (id)serviceUUID;

- (void).cxx_destruct;
- (id)batteryCharacteristic;
- (id)handleBatteryLevel:(id)arg1;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (void)readProperty:(id)arg1;
- (void)setBatteryCharacteristic:(id)arg1;

@end
