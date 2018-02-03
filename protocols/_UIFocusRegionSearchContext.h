/* made by EzioChiu.
 */

@protocol _UIFocusRegionSearchContext <NSObject>

@required

- (void)addRegion:(_UIFocusRegion *)arg1;
- (void)addRegions:(NSArray *)arg1;
- (void)addRegionsInContainer:(id <_UIFocusRegionContainer>)arg1;
- (void)addRegionsInContainers:(NSArray *)arg1;
- (<UICoordinateSpace> *)coordinateSpace;
- (UIFocusSystem *)focusSystem;
- (UIScreen *)screen;
- (<_UIFocusMapArea> *)searchArea;

@end
