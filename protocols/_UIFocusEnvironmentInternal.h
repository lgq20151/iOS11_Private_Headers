/* made by EzioChiu.
 */

@protocol _UIFocusEnvironmentInternal <_UIFocusEnvironmentPrivate>

@optional

- (void)_didUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (<_UIFocusRegionContainer> *)_focusMapContainer;
- (<UIFocusEnvironment> *)_overridingPreferredFocusEnvironment;
- (bool)_shouldUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (void)_willUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;

@end
