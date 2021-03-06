/* made by EzioChiu.
 */

@protocol HUQuickControlInteractionCoordinatorDelegate <NSObject>

@required

- (bool)hasModelValueChangedForInteractionCoordinator:(HUQuickControlInteractionCoordinator *)arg1;
- (void)interactionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 interactionStateDidChange:(bool)arg2;
- (void)interactionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 viewValueDidChange:(id)arg2;

@end
