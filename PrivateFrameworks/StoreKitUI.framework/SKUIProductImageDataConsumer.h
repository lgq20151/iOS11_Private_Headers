/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductImageDataConsumer : SKUIImageDataConsumer <NSCopying> {
    UIColor * _backgroundColor;
    SKUIColorScheme * _colorScheme;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) SKUIColorScheme *colorScheme;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } iconSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;

+ (id)cardConsumer;
+ (id)chartsConsumer;
+ (id)consumerWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)giftComposeConsumer;
+ (id)giftComposeLetterboxConsumer;
+ (id)giftComposePosterConsumer;
+ (id)giftResultConsumer;
+ (id)giftThemeConsumer;
+ (id)giftThemeLetterboxConsumer;
+ (id)giftThemePosterConsumer;
+ (id)gridConsumer;
+ (id)lockupConsumerWithSize:(long long)arg1 itemKind:(long long)arg2;
+ (id)productPageConsumer;
+ (id)purchasedConsumer;
+ (id)smartBannerConsumer;
+ (id)swooshConsumer;
+ (id)updatesConsumer;
+ (id)wishlistConsumer;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)colorScheme;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })iconSize;
- (id)imageForColor:(id)arg1;
- (id)imageForColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)imageForImage:(id)arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)setBackgroundColor:(id)arg1;
- (void)setColorScheme:(id)arg1;

@end