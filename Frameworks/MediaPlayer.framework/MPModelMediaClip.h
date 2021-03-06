/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelMediaClip : MPModelObject {
    id /* block */  _previewArtworkCatalogBlock;
    NSArray * _staticAssets;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ previewArtworkCatalogBlock;
@property (nonatomic, copy) NSArray *staticAssets;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__MPModelPropertyMediaClipPreviewArtwork__PROPERTY;
+ (id)__MPModelPropertyMediaClipTitle__PROPERTY;
+ (id)__MPModelRelationshipMediaClipStaticAssets__PROPERTY;
+ (id)__previewArtworkCatalogBlock__KEY;
+ (id)__staticAssets__KEY;
+ (id)__title__KEY;

- (void).cxx_destruct;
- (id)previewArtworkCatalog;
- (id /* block */)previewArtworkCatalogBlock;
- (void)setPreviewArtworkCatalogBlock:(id /* block */)arg1;
- (void)setStaticAssets:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)staticAssets;
- (id)title;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredPlaybackProperties;

@end
