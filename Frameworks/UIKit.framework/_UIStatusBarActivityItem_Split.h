/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarActivityItem_Split : _UIStatusBarActivityItem {
    _UIStatusBarActivityView * _activityView;
    UIActivityIndicatorView * _syncStartView;
}

@property (nonatomic, retain) _UIStatusBarActivityView *activityView;
@property (nonatomic, retain) UIActivityIndicatorView *syncStartView;

+ (id)syncStartDisplayIdentifier;
+ (id)verticalDisplayIdentifier;

- (void).cxx_destruct;
- (bool)_enableForType:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })activityIndicatorAlignmentRectInsets;
- (id)activityView;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)init;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)setActivityView:(id)arg1;
- (void)setSyncStartView:(id)arg1;
- (id)syncStartView;
- (id)viewForIdentifier:(id)arg1;

@end
