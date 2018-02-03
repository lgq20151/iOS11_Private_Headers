/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarBackgroundActivityItem : _UIStatusBarIndicatorItem {
    _UIStatusBarBackgroundActivityView * _backgroundView;
}

@property (nonatomic, retain) _UIStatusBarBackgroundActivityView *backgroundView;

+ (id)backgroundDisplayIdentifier;
+ (bool)shouldKeepIconVisibleForActivityType:(long long)arg1;

- (void).cxx_destruct;
- (id)_backgroundColorForActivityType:(long long)arg1;
- (id)_imageNameForActivityType:(long long)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)backgroundView;
- (id)imageForUpdate:(id)arg1;
- (id)imageNameForUpdate:(id)arg1;
- (id)indicatorEntryKey;
- (id)init;
- (void)setBackgroundView:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
