/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarRegionLinearLayout : NSObject <_UIStatusBarRegionLayout> {
    NSArray * _displayItems;
    NSArray * _horizontalConstraints;
    NSArray * _layoutGuides;
    _UIStatusBarRegion * _region;
    long long  _verticalAlignment;
    NSArray * _verticalConstraints;
}

@property (nonatomic, readonly) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *displayItems;
@property (nonatomic, readonly) bool fitsAllItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *horizontalConstraints;
@property (nonatomic, copy) NSArray *layoutGuides;
@property (nonatomic) _UIStatusBarRegion *region;
@property (readonly) Class superclass;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic, copy) NSArray *verticalConstraints;

- (void).cxx_destruct;
- (id)_horizontalConstraintsForViews:(id)arg1 layoutGuides:(id)arg2;
- (void)_updateConstraints;
- (id)_verticalConstraintsForDisplayItem:(id)arg1;
- (id)displayItems;
- (bool)fitsAllItems;
- (id)horizontalConstraints;
- (id)init;
- (void)invalidate;
- (id)layoutGuides;
- (id)region;
- (void)setDisplayItems:(id)arg1;
- (void)setHorizontalConstraints:(id)arg1;
- (void)setLayoutGuides:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (void)setVerticalConstraints:(id)arg1;
- (long long)verticalAlignment;
- (id)verticalConstraints;

@end
