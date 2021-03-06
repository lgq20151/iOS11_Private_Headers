/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCStoreContentMetadataResponse : NSObject {
    NSArray * _lookupDictionaries;
}

- (void).cxx_destruct;
- (void)_enumerateStoreItemMetadataItemsWithMetadata:(id)arg1 block:(id /* block */)arg2;
- (void)enumerateContainerItemsUsingBlock:(id /* block */)arg1;
- (id)initWithLookupDictionaries:(id)arg1;

@end
