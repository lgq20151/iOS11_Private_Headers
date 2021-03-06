/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioLikeBanItem : NSObject <NSCopying, NSMutableCopying> {
    long long  _albumID;
    RadioArtworkCollection * _artworkCollection;
    bool  _isSeed;
    RadioSeedMetadata * _seedMetadata;
    long long  _storeID;
    long long  _type;
}

@property (nonatomic, readonly) long long albumID;
@property (nonatomic, readonly) RadioArtworkCollection *artworkCollection;
@property (nonatomic, readonly) bool isSeed;
@property (nonatomic, readonly, copy) RadioSeedMetadata *seedMetadata;
@property (nonatomic, readonly) long long storeID;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (long long)albumID;
- (id)artworkCollection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithItemDictionary:(id)arg1;
- (bool)isSeed;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)seedMetadata;
- (long long)storeID;
- (long long)type;

@end
