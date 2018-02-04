/* made by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface _MSStickerPackCollectionViewDataSource : NSObject <MSStickerBrowserViewDataSource> {
    long long  _stickerSize;
    NSMutableArray * _stickers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long stickerSize;
@property (nonatomic, readonly) NSMutableArray *stickers;
@property (readonly) Class superclass;

+ (long long)_stickerSizeFromString:(id)arg1;

- (void).cxx_destruct;
- (id)_allStickers;
- (void)_loadStickerPackWithURL:(id)arg1;
- (id)initWithStickerPackURL:(id)arg1;
- (long long)numberOfStickersInStickerBrowserView:(id)arg1;
- (id)stickerBrowserView:(id)arg1 stickerAtIndex:(long long)arg2;
- (long long)stickerSize;
- (id)stickers;

@end