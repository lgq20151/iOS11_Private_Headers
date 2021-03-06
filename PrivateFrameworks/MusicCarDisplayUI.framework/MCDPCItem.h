/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDPCItem : NSObject {
    void * _contentItem;
    bool  _currentlyPlaying;
    MCDPCModel * _model;
}

@property (nonatomic, readonly) NSData *artworkData;
@property (nonatomic, readonly) UIImage *artworkImage;
@property (nonatomic) void*contentItem;
@property (nonatomic) bool currentlyPlaying;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isCloudItem;
@property (nonatomic, readonly) bool isContainer;
@property (nonatomic, readonly) bool isExplicitItem;
@property (nonatomic, readonly) bool isPlayable;
@property (nonatomic, readonly) MCDPCModel *model;
@property (nonatomic, readonly) float playbackProgress;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)_initWithModel:(id)arg1 MRContentItem:(void*)arg2;
- (id)artworkData;
- (id)artworkImage;
- (void*)contentItem;
- (bool)currentlyPlaying;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (bool)isCloudItem;
- (bool)isContainer;
- (bool)isExplicitItem;
- (bool)isPlayable;
- (id)model;
- (float)playbackProgress;
- (void)setContentItem:(void*)arg1;
- (void)setCurrentlyPlaying:(bool)arg1;
- (id)subtitle;
- (id)title;

@end
