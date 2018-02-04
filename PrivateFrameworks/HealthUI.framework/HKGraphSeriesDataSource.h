/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKGraphSeriesDataSource : NSObject {
    <HKGraphSeriesDataSourceDelegate> * _delegate;
    long long  _maximumZoom;
    long long  _minimumZoom;
}

@property (nonatomic) <HKGraphSeriesDataSourceDelegate> *delegate;
@property (nonatomic) long long maximumZoom;
@property (nonatomic) long long minimumZoom;

- (void).cxx_destruct;
- (struct { long long x1; long long x2; })blockPathForX:(id)arg1 zoom:(long long)arg2;
- (void)blocksRequestedFromPath:(struct { long long x1; long long x2; })arg1 toPath:(struct { long long x1; long long x2; })arg2;
- (id)cachedBlockForPath:(struct { long long x1; long long x2; })arg1 context:(id)arg2;
- (id)delegate;
- (id)init;
- (void)invalidateCache;
- (long long)maximumZoom;
- (long long)minimumZoom;
- (void)setDelegate:(id)arg1;
- (void)setMaximumZoom:(long long)arg1;
- (void)setMinimumZoom:(long long)arg1;

@end