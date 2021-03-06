/* made by EzioChiu.
 */

@protocol NUAdProvider <NSObject>

@required

- (void)bannerViewDidLoad:(NUAdBannerView *)arg1;
- (void)bannerViewDidUnload:(NUAdBannerView *)arg1;
- (void)bannerViewForIdentifier:(void *)arg1 contextProviders:(void *)arg2 withCompletionBlock:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NUAdBannerView *, NSError *, void*
- (void)interstitialViewForContextProviders:(void *)arg1 contextProvidersWithKeys:(void *)arg2 withCompletionBlock:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ADInterstitialAd *, NSError *, void*
- (void)interstitialViewForContextProviders:(void *)arg1 withCompletionBlock:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ADInterstitialAd *, NSError *, void*
- (void)prerollForContextProviders:(void *)arg1 withCompletionBlock:(void *)arg2; // needs 2 arg types, found 10: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NUAdBannerView *, NSURL *, unsigned long long, NSError *, void*
- (void)videoInTodayMidrollForContextProviders:(void *)arg1 withCompletionBlock:(void *)arg2; // needs 2 arg types, found 10: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NUAdBannerView *, NSURL *, unsigned long long, NSError *, void*

@end
