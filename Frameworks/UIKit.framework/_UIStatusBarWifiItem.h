/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarWifiItem : _UIStatusBarItem {
    _UIStatusBarImageView * _networkIconView;
    _UIStatusBarWifiSignalView * _signalView;
}

@property (nonatomic, retain) _UIStatusBarImageView *networkIconView;
@property (nonatomic, retain) _UIStatusBarWifiSignalView *signalView;

+ (id)iconDisplayIdentifier;
+ (id)signalStrengthDisplayIdentifier;

- (void).cxx_destruct;
- (id)_backgroundColorForUpdate:(id)arg1;
- (long long)_barCountForUpdate:(id)arg1;
- (double)_barThicknessForUpdate:(id)arg1;
- (id)_fillColorForUpdate:(id)arg1;
- (double)_interspaceForUpdate:(id)arg1;
- (double)_totalWidthForUpdate:(id)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)dependentEntryKeys;
- (id)init;
- (id)networkIconView;
- (void)setNetworkIconView:(id)arg1;
- (void)setSignalView:(id)arg1;
- (id)signalView;
- (id)viewForIdentifier:(id)arg1;

@end