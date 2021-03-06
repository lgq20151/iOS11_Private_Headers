/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter
 */

@interface BCBatteryView : _UIBatteryView {
    bool  _lowBattery;
}

@property (getter=isLowBattery, nonatomic) bool lowBattery;

- (id)init;
- (id)initWithSizeCategory:(long long)arg1;
- (bool)isLowBattery;
- (void)setLowBattery:(bool)arg1;

@end
