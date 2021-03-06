/* made by EzioChiu.
 */

@protocol PXDisplayAsset <NSObject, NSCopying>

@required

- (long long)isContentEqualTo:(id <PXDisplayAsset>)arg1;
- (bool)isFavorite;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;

@optional

- (double)duration;
- (long long)playbackStyle;
- (long long)playbackVariation;

@end
