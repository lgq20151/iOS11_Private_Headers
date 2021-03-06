/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarCellularItem : _UIStatusBarItem {
    _UIStatusBarStringView * _networkTypeView;
    _UIStatusBarStringView * _serviceNameView;
    _UIStatusBarCellularSignalView * _signalView;
    _UIStatusBarImageView * _sosView;
}

@property (nonatomic, retain) _UIStatusBarStringView *networkTypeView;
@property (nonatomic, retain) _UIStatusBarStringView *serviceNameView;
@property (nonatomic, retain) _UIStatusBarCellularSignalView *signalView;
@property (nonatomic, retain) _UIStatusBarImageView *sosView;

+ (id)nameDisplayIdentifier;
+ (id)signalStrengthDisplayIdentifier;
+ (id)sosDisplayIdentifier;
+ (id)typeDisplayIdentifier;

- (void).cxx_destruct;
- (id)_backgroundColorForUpdate:(id)arg1;
- (id)_fillColorForUpdate:(id)arg1;
- (id)_fontForEntry:(id)arg1 baselineOffset:(double*)arg2;
- (id)_stringForCellularType:(long long)arg1;
- (id)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)dependentEntryKeys;
- (id)init;
- (id)networkTypeView;
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;
- (id)serviceNameView;
- (void)setNetworkTypeView:(id)arg1;
- (void)setServiceNameView:(id)arg1;
- (void)setSignalView:(id)arg1;
- (void)setSosView:(id)arg1;
- (id)signalView;
- (id)sosView;
- (id)viewForIdentifier:(id)arg1;

@end
