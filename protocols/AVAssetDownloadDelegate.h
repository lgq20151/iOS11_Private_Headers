/* made by EzioChiu.
 */

@protocol AVAssetDownloadDelegate <NSURLSessionTaskDelegate>

@optional

- (void)URLSession:(NSURLSession *)arg1 aggregateAssetDownloadTask:(AVAggregateAssetDownloadTask *)arg2 didCompleteForMediaSelection:(AVMediaSelection *)arg3;
- (void)URLSession:(NSURLSession *)arg1 aggregateAssetDownloadTask:(AVAggregateAssetDownloadTask *)arg2 didLoadTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 totalTimeRangesLoaded:(NSArray *)arg4 timeRangeExpectedToLoad:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg5 forMediaSelection:(AVMediaSelection *)arg6;
- (void)URLSession:(NSURLSession *)arg1 aggregateAssetDownloadTask:(AVAggregateAssetDownloadTask *)arg2 willDownloadToURL:(NSURL *)arg3;
- (void)URLSession:(NSURLSession *)arg1 assetDownloadTask:(AVAssetDownloadTask *)arg2 didFinishDownloadingToURL:(NSURL *)arg3;
- (void)URLSession:(NSURLSession *)arg1 assetDownloadTask:(AVAssetDownloadTask *)arg2 didLoadTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 totalTimeRangesLoaded:(NSArray *)arg4 timeRangeExpectedToLoad:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg5;
- (void)URLSession:(NSURLSession *)arg1 assetDownloadTask:(AVAssetDownloadTask *)arg2 didResolveMediaSelection:(AVMediaSelection *)arg3;

@end
