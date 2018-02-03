/* made by EzioChiu.
 */

@protocol _UIStatusBarVisualProvider <NSObject>

@required

+ (struct CGSize { double x1; double x2; })intrinsicContentSizeForOrientation:(long long)arg1;

- (NSArray *)orderedDisplayItemPlacementsInRegionWithIdentifier:(NSString *)arg1;
- (void)setStatusBar:(_UIStatusBar *)arg1;
- (NSArray *)setupInContainerView:(UIView *)arg1;
- (_UIStatusBar *)statusBar;
- (_UIStatusBarStyleAttributes *)styleAttributes;

@optional

- (_UIStatusBarAnimation *)additionAnimationForDisplayItemWithIdentifier:(NSString *)arg1 itemAnimation:(_UIStatusBarAnimation *)arg2;
- (void)dataUpdated:(_UIStatusBarData *)arg1;
- (NSArray *)displayItemIdentifiersForPartWithIdentifier:(NSString *)arg1;
- (void)modeUpdatedFromMode:(long long)arg1;
- (void)region:(_UIStatusBarRegion *)arg1 highlighted:(bool)arg2 initialPress:(bool)arg3;
- (NSOrderedSet *)region:(_UIStatusBarRegion *)arg1 willSetDisplayItems:(NSOrderedSet *)arg2;
- (NSArray *)regionIdentifiersForPartWithIdentifier:(NSString *)arg1;
- (_UIStatusBarAnimation *)removalAnimationForDisplayItemWithIdentifier:(NSString *)arg1 itemAnimation:(_UIStatusBarAnimation *)arg2;
- (void)styleUpdatedFromStyle:(long long)arg1;
- (NSArray *)willUpdateWithData:(_UIStatusBarData *)arg1;

@end
