/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface IrisSampleInfo : NSObject {
    AVAsset * _asset;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _dominantSampleDuration;
    NSArray * _gapTimeRanges;
    NSArray * _timeRanges;
}

@property (nonatomic, retain) AVAsset *asset;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } dominantSampleDuration;
@property (nonatomic, retain) NSArray *gapTimeRanges;
@property (nonatomic, retain) NSArray *timeRanges;

+ (void)clearCache;
+ (id)infoForAsset:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (id)asset;
- (id)dispatchQueue;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })dominantSampleDuration;
- (id)gapTimeRanges;
- (id)initWithAsset:(id)arg1;
- (void)loadInfoWithCompletionHandler:(id /* block */)arg1;
- (void)loadInfoWithTrackOutput:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAsset:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setDominantSampleDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setGapTimeRanges:(id)arg1;
- (void)setTimeRanges:(id)arg1;
- (id)timeRanges;

@end