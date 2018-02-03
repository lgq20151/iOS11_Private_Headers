/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarBatteryItem : _UIStatusBarItem {
    _UIBatteryView * _batteryView;
    _UIStatusBarImageView * _chargingView;
    bool  _highlighted;
    _UIStatusBarStringView * _percentView;
}

@property (nonatomic, retain) _UIBatteryView *batteryView;
@property (nonatomic, retain) _UIStatusBarImageView *chargingView;
@property (nonatomic) bool highlighted;
@property (nonatomic, retain) _UIStatusBarStringView *percentView;

+ (id)chargingDisplayIdentifier;
+ (id)iconDisplayIdentifier;
+ (id)percentDisplayIdentifier;

- (void).cxx_destruct;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)batteryView;
- (id)chargingView;
- (id)dependentEntryKeys;
- (bool)highlighted;
- (id)init;
- (id)percentView;
- (void)setBatteryView:(id)arg1;
- (void)setChargingView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPercentView:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
