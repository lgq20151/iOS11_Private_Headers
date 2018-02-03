/* made by EzioChiu.
 */

@protocol _UIOLAPropertySource <_UILAPropertySource>

@required

- (bool)_itemFittingSizeChanged;
- (bool)_itemOrderingChanged;
- (void)_setItemFittingSizeChanged:(bool)arg1;
- (void)_setItemOrderingChanged:(bool)arg1;
- (double)customSpacingAfterItem:(id)arg1;
- (NSMapTable *)customSpacings;
- (long long)distribution;
- (bool)isBaselineRelativeArrangement;
- (void)setBaselineRelativeArrangement:(bool)arg1;
- (void)setCustomSpacing:(double)arg1 afterItem:(id)arg2;
- (void)setDistribution:(long long)arg1;
- (void)setSpacing:(double)arg1;
- (double)spacing;

@end
