/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProductTracklistTableViewConfiguration : MusicLibraryBrowseTableViewConfiguration {
    NSString * _completeOfferLocalizedTitle;
    MusicCompositeEntityViewDescriptor * _compositeEntityViewDescriptor;
    MusicEntityViewDescriptor * _copyrightEntityViewDescriptor;
    <MusicEntityProviding> * _copyrightSourceEntityProvider;
    <MusicEntityProviding> * _entityProvider;
    MusicMediaDetailTintInformation * _mediaDetailTintInformation;
    long long  _prominentTrackStoreID;
    MusicEntityViewDescriptor * _showCompleteOfferEntityViewDescriptor;
    MusicEntityViewDescriptor * _shuffleEntityViewDescriptor;
    MusicMediaProductTracklistTableViewDescriptor * _tracklistTableViewDescriptor;
    bool  _wantsArtistName;
    bool  _wantsArtwork;
    bool  _wantsCompleteOffer;
    bool  _wantsCopyrightText;
}

@property (nonatomic, readonly) MusicCompositeEntityViewDescriptor *_compositeEntityViewDescriptor;
@property (nonatomic, readonly) MusicEntityViewDescriptor *_copyrightEntityViewDescriptor;
@property (nonatomic, readonly) MusicEntityViewDescriptor *_showCompleteOfferEntityViewDescriptor;
@property (nonatomic, readonly) MusicEntityViewDescriptor *_shuffleEntityViewDescriptor;
@property (nonatomic, readonly) MusicMediaProductTracklistTableViewDescriptor *_tracklistTableViewDescriptor;
@property (nonatomic, copy) NSString *completeOfferLocalizedTitle;
@property (nonatomic, retain) <MusicEntityProviding> *copyrightSourceEntityProvider;
@property (nonatomic, readonly) <MusicEntityProviding> *entityProvider;
@property (nonatomic, copy) MusicMediaDetailTintInformation *mediaDetailTintInformation;
@property (nonatomic) long long prominentTrackStoreID;
@property (nonatomic, readonly) MusicMediaProductTracklistTableViewDescriptor *tracklistTableViewDescriptor;
@property (nonatomic) bool wantsArtistName;
@property (nonatomic) bool wantsArtwork;
@property (nonatomic) bool wantsCompleteOffer;
@property (nonatomic) bool wantsCopyrightText;

+ (Class)tracklistItemContentDescriptorClass;

- (void).cxx_destruct;
- (id)_compositeEntityViewDescriptor;
- (void)_configureCopyrightViewDescriptorWithTintInformation:(id)arg1;
- (void)_configureShowCompleteAlbumViewDescriptorWithTintInformation:(id)arg1;
- (void)_configureShuffleEntityViewDescriptorWithTintInformation:(id)arg1;
- (void)_configureTracklistTableViewDescriptorWithTintInformation:(id)arg1;
- (id)_copyrightEntityViewDescriptor;
- (id)_loadCopyrightEntityViewDescriptorWithSourceEntityProvider:(id)arg1;
- (id)_loadShowCompleteEntityViewDescriptorWithCompleteOfferEntityProvider:(id)arg1;
- (id)_loadShuffleEntityViewDescriptorWithSourceEntityProvider:(id)arg1;
- (id)_loadTracklistTableViewDescriptor;
- (id)_showCompleteOfferEntityViewDescriptor;
- (id)_shuffleEntityViewDescriptor;
- (id)_tracklistTableViewDescriptor;
- (id)completeOfferLocalizedTitle;
- (id)copyrightSourceEntityProvider;
- (id)entityProvider;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initWithEntityProvider:(id)arg1;
- (id)loadEntityViewDescriptor;
- (id)mediaDetailTintInformation;
- (id)newSelectionEntityValueContext;
- (id)newViewController;
- (long long)prominentTrackStoreID;
- (void)setCompleteOfferLocalizedTitle:(id)arg1;
- (void)setCopyrightSourceEntityProvider:(id)arg1;
- (void)setMediaDetailTintInformation:(id)arg1;
- (void)setProminentTrackStoreID:(long long)arg1;
- (void)setWantsArtistName:(bool)arg1;
- (void)setWantsArtwork:(bool)arg1;
- (void)setWantsCompleteOffer:(bool)arg1;
- (void)setWantsCopyrightText:(bool)arg1;
- (id)tracklistTableViewDescriptor;
- (bool)wantsArtistName;
- (bool)wantsArtwork;
- (bool)wantsCompleteOffer;
- (bool)wantsCopyrightText;

@end