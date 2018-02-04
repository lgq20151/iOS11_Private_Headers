/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCProtoRadioContentReference : PBCodable <NSCopying> {
    _MPCProtoRadioContentReferenceLibraryAlbumContentReference * _libraryAlbumContentReference;
    _MPCProtoRadioContentReferenceLibraryArtistContentReference * _libraryArtistContentReference;
    _MPCProtoRadioContentReferenceLibraryItemContentReference * _libraryItemContentReference;
    _MPCProtoRadioContentReferenceStoreContentReference * _storeContentReference;
}

@property (nonatomic, readonly) bool hasLibraryAlbumContentReference;
@property (nonatomic, readonly) bool hasLibraryArtistContentReference;
@property (nonatomic, readonly) bool hasLibraryItemContentReference;
@property (nonatomic, readonly) bool hasStoreContentReference;
@property (nonatomic, retain) _MPCProtoRadioContentReferenceLibraryAlbumContentReference *libraryAlbumContentReference;
@property (nonatomic, retain) _MPCProtoRadioContentReferenceLibraryArtistContentReference *libraryArtistContentReference;
@property (nonatomic, retain) _MPCProtoRadioContentReferenceLibraryItemContentReference *libraryItemContentReference;
@property (nonatomic, retain) _MPCProtoRadioContentReferenceStoreContentReference *storeContentReference;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLibraryAlbumContentReference;
- (bool)hasLibraryArtistContentReference;
- (bool)hasLibraryItemContentReference;
- (bool)hasStoreContentReference;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)libraryAlbumContentReference;
- (id)libraryArtistContentReference;
- (id)libraryItemContentReference;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLibraryAlbumContentReference:(id)arg1;
- (void)setLibraryArtistContentReference:(id)arg1;
- (void)setLibraryItemContentReference:(id)arg1;
- (void)setStoreContentReference:(id)arg1;
- (id)storeContentReference;
- (void)writeTo:(id)arg1;

@end