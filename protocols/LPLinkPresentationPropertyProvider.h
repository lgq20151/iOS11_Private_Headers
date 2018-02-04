/* made by EzioChiu.
 */

@protocol LPLinkPresentationPropertyProvider <NSObject>

@optional

- (UIColor *)backgroundColor;
- (NSString *)bottomCaption;
- (LPCaptionBarPresentationProperties *)captionBar;
- (LPiTunesPlaybackInformation *)iTunesPlaybackInformation;
- (LPImage *)icon;
- (LPImage *)image;
- (bool)isPreliminary;
- (NSString *)mediaBottomCaption;
- (LPCaptionBarPresentationProperties *)mediaBottomCaptionBar;
- (NSString *)mediaTopCaption;
- (LPCaptionBarPresentationProperties *)mediaTopCaptionBar;
- (NSString *)quotedText;
- (long long)style;
- (NSString *)topCaption;
- (NSString *)trailingBottomCaption;
- (NSString *)trailingTopCaption;
- (LPVideo *)video;

@end