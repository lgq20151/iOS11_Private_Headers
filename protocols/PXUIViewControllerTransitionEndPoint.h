/* made by EzioChiu.
 */

@protocol PXUIViewControllerTransitionEndPoint <NSObject>

@optional

- (bool)keepsSourceRegionOfInterestContent;
- (void)preloadWithSourceRegionOfInterest:(PXRegionOfInterest *)arg1 forTransition:(PXUIViewControllerTransition *)arg2;
- (void)prepareForInteractiveTransition:(PXUIViewControllerTransition *)arg1;
- (PXRegionOfInterest *)regionOfInterestForTransition:(PXUIViewControllerTransition *)arg1;
- (UIColor *)removeBackgroundColorForTransition:(PXUIViewControllerTransition *)arg1;
- (void)restoreBackgroundColor:(UIColor *)arg1 forTransition:(PXUIViewControllerTransition *)arg2;
- (void)scrollRegionOfInterestToVisible:(PXRegionOfInterest *)arg1 forTransition:(PXUIViewControllerTransition *)arg2;

@end
