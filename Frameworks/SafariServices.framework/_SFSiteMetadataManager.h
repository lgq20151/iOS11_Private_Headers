/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSiteMetadataManager : WBSSiteMetadataManager {
    _SFTouchIconCache * _touchIconCache;
}

@property (nonatomic, readonly) _SFTouchIconCache *touchIconCache;

+ (void)setSharedSiteMetadataManager:(id)arg1;
+ (id)sharedSiteMetadataManager;

- (void).cxx_destruct;
- (id)initWithInjectedBundleURL:(id)arg1 imageCacheDirectoryURL:(id)arg2 cacheIsReadOnly:(bool)arg3;
- (void)scheduleLowPriorityRequestForBookmarks:(id)arg1;
- (id)touchIconCache;

@end
