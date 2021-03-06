/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStoreBrowseContentItem : MPModelObject {
    MPModelAlbum * _album;
    MPModelArtist * _artist;
    NSString * _artistUploadedContentType;
    MPModelCurator * _curator;
    long long  _detailedItemType;
    MPModelTVEpisode * _episode;
    unsigned long long  _itemType;
    MPModelMediaClip * _mediaClip;
    MPModelMovie * _movie;
    MPModelPlaylist * _playlist;
    MPModelRadioStation * _radioStation;
    MPModelTVSeason * _season;
    MPModelTVShow * _show;
    MPModelTVShowCreator * _showCreator;
    MPModelSocialPerson * _socialPerson;
    MPModelSong * _song;
}

@property (nonatomic, retain) MPModelAlbum *album;
@property (nonatomic, retain) MPModelArtist *artist;
@property (nonatomic, copy) NSString *artistUploadedContentType;
@property (nonatomic, retain) MPModelCurator *curator;
@property (nonatomic) long long detailedItemType;
@property (nonatomic, retain) MPModelTVEpisode *episode;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic, retain) MPModelMediaClip *mediaClip;
@property (nonatomic, retain) MPModelMovie *movie;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic, retain) MPModelRadioStation *radioStation;
@property (nonatomic, retain) MPModelTVSeason *season;
@property (nonatomic, retain) MPModelTVShow *show;
@property (nonatomic, retain) MPModelTVShowCreator *showCreator;
@property (nonatomic, retain) MPModelSocialPerson *socialPerson;
@property (nonatomic, retain) MPModelSong *song;

+ (id)__MPModelStoreBrowseContentItemPropertyArtistUploadedContentType__PROPERTY;
+ (id)__MPModelStoreBrowseContentItemPropertyDetailedItemType__PROPERTY;
+ (id)__MPModelStoreBrowseContentItemPropertyItemType__PROPERTY;
+ (id)__MPModelStoreBrowseContentItemRelationshipAlbum__PROPERTY;
+ (id)__MPModelStoreBrowseContentItemRelationshipArtist__PROPERTY;
+ (id)__MPModelStoreBrowseContentItemRelationshipCurator__PROPERTY;
+ (id)__MPModelStoreBrowseContentItemRelationshipMediaClip__PROPERTY;
+ (id)__MPModelStoreBrowseContentItemRelationshipMovie__PROPERTY;
+ (id)__MPModelStoreBrowseContentItemRelationshipPlaylist__PROPERTY;
+ (id)__MPModelStoreBrowseContentItemRelationshipRadioStation__PROPERTY;
+ (id)__MPModelStoreBrowseContentItemRelationshipSocialPerson__PROPERTY;
+ (id)__MPModelStoreBrowseContentItemRelationshipSong__PROPERTY;
+ (id)__MPModelStoreBrowseContentItemRelationshipTVEpisode__PROPERTY;
+ (id)__MPModelStoreBrowseContentItemRelationshipTVSeason__PROPERTY;
+ (id)__MPModelStoreBrowseContentItemRelationshipTVShowCreator__PROPERTY;
+ (id)__MPModelStoreBrowseContentItemRelationshipTVShow__PROPERTY;
+ (id)__album__KEY;
+ (id)__artistUploadedContentType__KEY;
+ (id)__artist__KEY;
+ (id)__curator__KEY;
+ (id)__detailedItemType__KEY;
+ (id)__episode__KEY;
+ (id)__itemType__KEY;
+ (id)__mediaClip__KEY;
+ (id)__movie__KEY;
+ (id)__playlist__KEY;
+ (id)__radioStation__KEY;
+ (id)__season__KEY;
+ (id)__showCreator__KEY;
+ (id)__show__KEY;
+ (id)__socialPerson__KEY;
+ (id)__song__KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (id)artistUploadedContentType;
- (id)curator;
- (id)descriptionWithType:(long long)arg1;
- (long long)detailedItemType;
- (id)episode;
- (id)innerObject;
- (unsigned long long)itemType;
- (id)mediaClip;
- (id)movie;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)playlist;
- (id)radioStation;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)season;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtistUploadedContentType:(id)arg1;
- (void)setCurator:(id)arg1;
- (void)setDetailedItemType:(long long)arg1;
- (void)setEpisode:(id)arg1;
- (void)setItemType:(unsigned long long)arg1;
- (void)setMediaClip:(id)arg1;
- (void)setMovie:(id)arg1;
- (void)setPlaylist:(id)arg1;
- (void)setRadioStation:(id)arg1;
- (void)setSeason:(id)arg1;
- (void)setShow:(id)arg1;
- (void)setShowCreator:(id)arg1;
- (void)setSocialPerson:(id)arg1;
- (void)setSong:(id)arg1;
- (id)show;
- (id)showCreator;
- (id)socialPerson;
- (id)song;

@end
