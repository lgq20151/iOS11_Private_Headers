/* made by EzioChiu.
 */

@protocol HUQuickControlViewControllerDelegate <NSObject>

@required

- (UIViewController<HUDetailsPresentationDelegateHost> *)detailsViewControllerForQuickControlViewController:(HUQuickControlViewController *)arg1 item:(HFItem *)arg2;
- (bool)hasDetailsActionForQuickControlViewController:(HUQuickControlViewController *)arg1 item:(HFItem *)arg2;
- (HUApplier *)quickControlViewController:(HUQuickControlViewController *)arg1 applierForSourceViewTransitionWithAnimationSettings:(HUAnimationSettings *)arg2 presenting:(bool)arg3;
- (double)quickControlViewController:(HUQuickControlViewController *)arg1 sourceViewInitialScaleForPresentation:(bool)arg2;
- (void)quickControlViewControllerWillDismissDetailsViewController:(HUQuickControlViewController *)arg1 shouldDismissQuickControl:(bool)arg2;

@end
