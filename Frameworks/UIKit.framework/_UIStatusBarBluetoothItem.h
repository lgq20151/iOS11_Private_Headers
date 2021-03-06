/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarBluetoothItem : _UIStatusBarIndicatorItem {
    _UIStatusBarImageView * _batteryImageView;
}

@property (nonatomic, retain) _UIStatusBarImageView *batteryImageView;

+ (id)batteryDisplayIdentifier;

- (void).cxx_destruct;
- (id)_batteryFillColorForEntry:(id)arg1 usingTintColor:(id)arg2;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)batteryImageView;
- (id)imageNameForUpdate:(id)arg1;
- (id)indicatorEntryKey;
- (void)setBatteryImageView:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
