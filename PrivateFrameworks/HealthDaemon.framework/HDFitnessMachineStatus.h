/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessMachineStatus : HDHealthServiceCharacteristic {
    unsigned long long  _machineState;
}

@property (nonatomic) unsigned long long machineState;

+ (id)_buildWithBinaryValue:(id)arg1 error:(id*)arg2;
+ (id)uuid;

- (id)description;
- (unsigned long long)machineState;
- (void)setMachineState:(unsigned long long)arg1;

@end
