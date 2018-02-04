/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKRemoteAssetManager : NSObject {
    NSMutableArray * _completionHandlers;
    NSURL * _directoryURL;
    NSMutableDictionary * _manifestItemsByRelativeURL;
    NSObject<OS_dispatch_queue> * _queue;
    NSURLSession * _urlSession;
}

- (void).cxx_destruct;
- (void)_callCompletionHandlersWithFinishState:(bool)arg1 progress:(float)arg2 error:(id)arg3;
- (void)_downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(id /* block */)arg3;
- (void)_flushBundleCaches;
- (bool)addRemoteAssetData:(id)arg1 forManifestItem:(id)arg2 error:(id*)arg3;
- (bool)assetExistsLocally:(id)arg1;
- (void)cancelDownloads;
- (id)deviceSpecificItems;
- (id)deviceSpecificItemsForScreenScale:(double)arg1 suffix:(id)arg2;
- (void)downloadRemoteAssetsWithCompletion:(id /* block */)arg1;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithFileURL:(id)arg1 queue:(id)arg2;
- (id)itemWithRelativePath:(id)arg1;
- (id)remoteAssetManifests;

@end