/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPLibraryKeepLocalStatusObserverDetailedContainerConfiguration : MPLibraryKeepLocalStatusObserverConfiguration {
    long long  _downloadEnabledItemCount;
    long long  _nonPurgeableItemCount;
    NSArray * _pendingItemIdentifiers;
    long long  _redownloadableItemCount;
}

@property (nonatomic) long long downloadEnabledItemCount;
@property (nonatomic) long long nonPurgeableItemCount;
@property (nonatomic, copy) NSArray *pendingItemIdentifiers;
@property (nonatomic) long long redownloadableItemCount;

- (void).cxx_destruct;
- (long long)downloadEnabledItemCount;
- (long long)nonPurgeableItemCount;
- (id)pendingItemIdentifiers;
- (long long)redownloadableItemCount;
- (void)setDownloadEnabledItemCount:(long long)arg1;
- (void)setNonPurgeableItemCount:(long long)arg1;
- (void)setPendingItemIdentifiers:(id)arg1;
- (void)setRedownloadableItemCount:(long long)arg1;

@end