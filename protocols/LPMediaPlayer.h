/* made by EzioChiu.
 */

@protocol LPMediaPlayer <NSObject>

@required

- (bool)isActive;
- (bool)isFullScreen;
- (bool)isMuted;
- (bool)isPlaying;
- (void)setActive:(bool)arg1;
- (bool)shouldUnmuteWhenUserAdjustsVolume;
- (bool)usesSharedAudioSession;

@optional

- (unsigned long long)lastInteractionTimestamp;
- (bool)releaseDecodingResourcesIfInactive;
- (double)unobscuredAreaFraction;

@end