/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetUserActivityProperties : PHAssetPropertySet {
    long long  _pendingPlayCount;
    long long  _pendingShareCount;
    long long  _pendingViewCount;
    long long  _syncedPlayCount;
    long long  _syncedShareCount;
    long long  _syncedViewCount;
}

@property (nonatomic) long long pendingPlayCount;
@property (nonatomic) long long pendingShareCount;
@property (nonatomic) long long pendingViewCount;
@property (nonatomic, readonly) long long playCount;
@property (nonatomic, readonly) long long shareCount;
@property (nonatomic) long long syncedPlayCount;
@property (nonatomic) long long syncedShareCount;
@property (nonatomic) long long syncedViewCount;
@property (nonatomic, readonly) long long viewCount;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (long long)pendingPlayCount;
- (long long)pendingShareCount;
- (long long)pendingViewCount;
- (long long)playCount;
- (void)setPendingPlayCount:(long long)arg1;
- (void)setPendingShareCount:(long long)arg1;
- (void)setPendingViewCount:(long long)arg1;
- (void)setSyncedPlayCount:(long long)arg1;
- (void)setSyncedShareCount:(long long)arg1;
- (void)setSyncedViewCount:(long long)arg1;
- (long long)shareCount;
- (long long)syncedPlayCount;
- (long long)syncedShareCount;
- (long long)syncedViewCount;
- (long long)viewCount;

@end