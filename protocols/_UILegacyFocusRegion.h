/* made by EzioChiu.
 */

@protocol _UILegacyFocusRegion <NSObject>

@required

- (NSArray *)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (UIView *)_focusDebugOverlayParentView;
- (UIFocusSystem *)_focusRegionFocusSystem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_focusRegionFrame;
- (NSArray *)_focusRegionGuides;
- (UIView *)_focusRegionView;
- (UIView *)_fulfillPromisedFocusRegion;
- (bool)_isPromiseFocusRegion;
- (bool)_isTransparentFocusRegion;
- (bool)_legacy_isEligibleForFocusInteraction;
- (bool)canBecomeFocused;

@end
