/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarDataBluetoothEntry : _UIStatusBarDataEntry {
    _UIStatusBarDataBatteryEntry * _batteryEntry;
    long long  _state;
}

@property (nonatomic, copy) _UIStatusBarDataBatteryEntry *batteryEntry;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)_ui_descriptionBuilder;
- (id)batteryEntry;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setBatteryEntry:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
