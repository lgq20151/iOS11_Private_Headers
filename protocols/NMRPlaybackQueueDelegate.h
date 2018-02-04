/* made by EzioChiu.
 */

@protocol NMRPlaybackQueueDelegate <NSObject>

@required

- (void)playbackQueue:(NMRPlaybackQueue *)arg1 contentItemsDidChange:(NSArray *)arg2;
- (void)playbackQueueDidChange:(NMRPlaybackQueue *)arg1;

@end