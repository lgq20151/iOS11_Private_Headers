/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelArtist : MPModelPerson {
    long long  _albumCount;
    id /* block */  _artworkCatalogBlock;
    id /* block */  _editorialArtworkCatalogBlock;
    MPModelGenre * _genre;
    bool  _hasBiography;
    NSDate * _libraryAddedDate;
    long long  _songCount;
}

@property (nonatomic) long long albumCount;
@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) id /* block */ editorialArtworkCatalogBlock;
@property (nonatomic, copy) MPModelGenre *genre;
@property (nonatomic) bool hasBiography;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic) long long songCount;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__MPModelPropertyArtistAlbumCount__PROPERTY;
+ (id)__MPModelPropertyArtistArtwork__PROPERTY;
+ (id)__MPModelPropertyArtistEditorialArtwork__PROPERTY;
+ (id)__MPModelPropertyArtistHasBiography__PROPERTY;
+ (id)__MPModelPropertyArtistLibraryAddedDate__PROPERTY;
+ (id)__MPModelPropertyArtistSongCount__PROPERTY;
+ (id)__MPModelRelationshipArtistGenre__PROPERTY;
+ (id)__albumCount__KEY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__editorialArtworkCatalogBlock__KEY;
+ (id)__genre__KEY;
+ (id)__hasBiography__KEY;
+ (id)__libraryAddedDate__KEY;
+ (id)__songCount__KEY;
+ (id)kindWithAlbumKind:(id)arg1;

- (void).cxx_destruct;
- (long long)albumCount;
- (id)artworkCatalog;
- (id /* block */)artworkCatalogBlock;
- (id)editorialArtworkCatalog;
- (id /* block */)editorialArtworkCatalogBlock;
- (id)genre;
- (bool)hasBiography;
- (id)libraryAddedDate;
- (void)setAlbumCount:(long long)arg1;
- (void)setArtworkCatalogBlock:(id /* block */)arg1;
- (void)setEditorialArtworkCatalogBlock:(id /* block */)arg1;
- (void)setGenre:(id)arg1;
- (void)setHasBiography:(bool)arg1;
- (void)setLibraryAddedDate:(id)arg1;
- (void)setSongCount:(long long)arg1;
- (long long)songCount;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)_radioStationMatchMetadata;
- (bool)_shouldMatchArtist;
- (id)mpc_radioContentReference;

@end
