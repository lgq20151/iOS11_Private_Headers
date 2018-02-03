/* made by EzioChiu.
 */

@protocol UIAdaptivePresentationControllerDelegate <NSObject>

@optional

- (long long)adaptivePresentationStyleForPresentationController:(UIPresentationController *)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(UIPresentationController *)arg1 traitCollection:(UITraitCollection *)arg2;
- (UIViewController *)presentationController:(UIPresentationController *)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)presentationController:(UIPresentationController *)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;

@end
