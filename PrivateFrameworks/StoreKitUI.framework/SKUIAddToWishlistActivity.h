/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIAddToWishlistActivity : UIActivity {
    SKUIClientContext * _clientContext;
    SKUIProductPageItem * _item;
}

- (void).cxx_destruct;
- (id)_beforeActivity;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;
- (void)performActivity;

@end