/* made by EzioChiu.
 */

@protocol UINavigationControllerDelegate <NSObject>

@optional

- (<UIViewControllerAnimatedTransitioning> *)navigationController:(UINavigationController *)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(UIViewController *)arg3 toViewController:(UIViewController *)arg4;
- (void)navigationController:(UINavigationController *)arg1 didShowViewController:(UIViewController *)arg2 animated:(bool)arg3;
- (<UIViewControllerInteractiveTransitioning> *)navigationController:(UINavigationController *)arg1 interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg2;
- (void)navigationController:(UINavigationController *)arg1 willShowViewController:(UIViewController *)arg2 animated:(bool)arg3;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(UINavigationController *)arg1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(UINavigationController *)arg1;

@end