/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFStoreBannerTracker : NSObject {
    NSMutableDictionary * _blockedProducts;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedTracker;

- (void).cxx_destruct;
- (void)blockProductBanner:(id)arg1;
- (void)clear;
- (id)filePath;
- (id)init;
- (void)isProductBannerBlocked:(id)arg1 completion:(id /* block */)arg2;
- (void)load;
- (void)save;

@end
