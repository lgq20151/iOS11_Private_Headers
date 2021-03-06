/* made by EzioChiu.
 */

@protocol ADBannerViewDelegate <NSObject>

@optional

- (void)bannerView:(ADBannerView *)arg1 didFailToReceiveAdWithError:(NSError *)arg2;
- (void)bannerViewActionDidFinish:(ADBannerView *)arg1;
- (bool)bannerViewActionShouldBegin:(ADBannerView *)arg1 willLeaveApplication:(bool)arg2;
- (void)bannerViewDidLoadAd:(ADBannerView *)arg1;
- (void)bannerViewWillLoadAd:(ADBannerView *)arg1;

@end
