/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFBackgroundAVAggregateAssetDownloadTask : __NSCFBackgroundSessionTask <AVAssetDownloadDelegate> {
    unsigned long long  _AVAssetDownloadToken;
    AVURLAsset * _URLAsset;
    NSData * _assetArtworkData;
    NSString * _assetTitle;
    NSURLSession * _childAssetDownloadSession;
    NSArray * _childAssetDownloadTasks;
    NSString * _childAssetDownloadTasksSessionIdentifier;
    NSArray * _mediaSelections;
    NSDictionary * _options;
    bool  _sentWillBeginDelayedRequest;
    bool  _sentWillDownloadToURL;
    NSObject<OS_dispatch_queue> * _sessionWorkQueue;
}

@property unsigned long long AVAssetDownloadToken;
@property (retain) AVURLAsset *URLAsset;
@property (copy) NSData *assetArtworkData;
@property (copy) NSString *assetTitle;
@property (readonly) NSURLSession *childAssetDownloadSession;
@property (readonly) NSArray *childAssetDownloadTasks;
@property (readonly) NSString *childAssetDownloadTasksSessionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *mediaSelections;
@property (copy) NSDictionary *options;
@property (readonly) Class superclass;

+ (id)childSessionConfigurationWithClientConfiguration:(id)arg1 identifier:(id)arg2;

- (unsigned long long)AVAssetDownloadToken;
- (id)URLAsset;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didLoadTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg5;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willBeginDelayedRequest:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)_isAVAssetTask;
- (void)_onqueue_cancel;
- (void)_onqueue_childTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)_onqueue_childTask:(id)arg1 didLoadTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg4;
- (void)_onqueue_childTask:(id)arg1 willBeginDelayedRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_onqueue_childTask:(id)arg1 willDownloadToURL:(id)arg2;
- (void)_onqueue_resume;
- (void)_onqueue_suspend;
- (id)assetArtworkData;
- (id)assetTitle;
- (id)childAssetDownloadSession;
- (id)childAssetDownloadTasks;
- (id)childAssetDownloadTasksSessionIdentifier;
- (id)currentRequest;
- (void)dealloc;
- (id)initWithSession:(id)arg1 remoteSession:(id)arg2 URLAsset:(id)arg3 mediaSelections:(id)arg4 assetTitle:(id)arg5 assetArtworkData:(id)arg6 options:(id)arg7 ident:(unsigned long long)arg8;
- (id)initWithTaskInfo:(id)arg1 session:(id)arg2 remoteSession:(id)arg3 ident:(unsigned long long)arg4;
- (bool)isKindOfClass:(Class)arg1;
- (id)mediaSelections;
- (id)options;
- (id)originalRequest;
- (id)response;
- (void)setAVAssetDownloadToken:(unsigned long long)arg1;
- (void)setAssetArtworkData:(id)arg1;
- (void)setAssetTitle:(id)arg1;
- (void)setMediaSelections:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setURLAsset:(id)arg1;

@end
