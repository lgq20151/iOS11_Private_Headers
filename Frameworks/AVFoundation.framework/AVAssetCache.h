/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetCache : NSObject

@property (getter=isPlayableOffline, nonatomic, readonly) bool playableOffline;

+ (id)assetCacheWithURL:(id)arg1;

- (id)URL;
- (id)_init;
- (id)allKeys;
- (long long)currentSize;
- (id)initWithURL:(id)arg1;
- (bool)isPlayableOffline;
- (id)lastModifiedDateOfEntryForKey:(id)arg1;
- (long long)maxEntrySize;
- (long long)maxSize;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;
- (void)removeEntryForKey:(id)arg1;
- (long long)sizeOfEntryForKey:(id)arg1;

@end
