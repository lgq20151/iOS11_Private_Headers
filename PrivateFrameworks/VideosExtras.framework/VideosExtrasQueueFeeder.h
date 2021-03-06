/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasQueueFeeder : MPQueueFeeder {
    VideosExtrasPlaybackContext * _context;
}

@property (getter=isBackgroundContext, nonatomic, readonly) bool backgroundContext;

- (void).cxx_destruct;
- (bool)_shouldReloadForContext:(id)arg1;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (bool)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (bool)isBackgroundContext;
- (Class)itemClass;
- (unsigned long long)itemCount;
- (long long)itemTypeForIndex:(unsigned long long)arg1;
- (id)playbackInfoAtIndex:(unsigned long long)arg1;
- (id)playbackInfoForIdentifier:(id)arg1;
- (bool)player:(id)arg1 shouldContinuePlaybackForNetworkType:(long long)arg2 returningError:(id*)arg3;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)repeatType;

@end
