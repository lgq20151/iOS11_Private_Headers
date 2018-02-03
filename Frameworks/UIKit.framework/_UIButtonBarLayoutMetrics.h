/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIButtonBarLayoutMetrics : NSObject <NSCopying, _UIButtonBarLayoutMetricsData> {
    bool  _allowsViewWrappers;
    bool  _createsPopoverLayoutGuides;
    NSLayoutDimension * _flexibleSpaceGuide;
    NSLayoutDimension * _groupSizeGuide;
    NSLayoutDimension * _groupSpacingGuide;
    bool  _locked;
    NSLayoutDimension * _minimumSpaceGuide;
    NSLayoutYAxisAnchor * _popoverGuideTopAnchor;
    NSLayoutDimension * _verticalSizeGuide;
}

@property (nonatomic) bool allowsViewWrappers;
@property (nonatomic) bool createsPopoverLayoutGuides;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSLayoutDimension *flexibleSpaceGuide;
@property (nonatomic, retain) NSLayoutDimension *groupSizeGuide;
@property (nonatomic, retain) NSLayoutDimension *groupSpacingGuide;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutDimension *minimumSpaceGuide;
@property (nonatomic, retain) NSLayoutYAxisAnchor *popoverGuideTopAnchor;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutDimension *verticalSizeGuide;

- (void).cxx_destruct;
- (id)_copyWithModifications:(id /* block */)arg1;
- (id)_upcastIfReadOnly;
- (bool)allowsViewWrappers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createsPopoverLayoutGuides;
- (id)description;
- (id)flexibleSpaceGuide;
- (id)groupSizeGuide;
- (id)groupSpacingGuide;
- (id)minimumSpaceGuide;
- (id)popoverGuideTopAnchor;
- (void)setAllowsViewWrappers:(bool)arg1;
- (void)setCreatesPopoverLayoutGuides:(bool)arg1;
- (void)setFlexibleSpaceGuide:(id)arg1;
- (void)setGroupSizeGuide:(id)arg1;
- (void)setGroupSpacingGuide:(id)arg1;
- (void)setMinimumSpaceGuide:(id)arg1;
- (void)setPopoverGuideTopAnchor:(id)arg1;
- (void)setVerticalSizeGuide:(id)arg1;
- (id)verticalSizeGuide;

@end
