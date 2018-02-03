/* made by EzioChiu.
 */

@protocol UIMovieScrubberTrackViewDelegate <NSObject>

@optional

- (void)movieScrubberTrackView:(UIMovieScrubberTrackView *)arg1 clampedSizeWidthDelta:(double)arg2 actualSizeWidthDelta:(double)arg3 originXDelta:(double)arg4 minimumVisibleValue:(double)arg5 maximumVisibleValue:(double)arg6;
- (void)movieScrubberTrackViewDidCollapse:(UIMovieScrubberTrackView *)arg1;
- (void)movieScrubberTrackViewDidExpand:(UIMovieScrubberTrackView *)arg1;
- (void)movieScrubberTrackViewDidFinishRequestingThumbnails:(UIMovieScrubberTrackView *)arg1;
- (void)movieScrubberTrackViewWillBeginRequestingThumbnails:(UIMovieScrubberTrackView *)arg1;
- (double)movieScrubberTrackViewZoomAnimationDelay:(UIMovieScrubberTrackView *)arg1;
- (double)movieScrubberTrackViewZoomAnimationDuration:(UIMovieScrubberTrackView *)arg1;

@end
