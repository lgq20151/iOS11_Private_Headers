/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutablePlaybackTimeoutInfo : RadioPlaybackTimeoutInfo

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeAllPlaybackTimeouts;
- (void)setDockedPlaybackTimeout:(double)arg1 forPlaybackType:(long long)arg2;
- (void)setLockedPlaybackTimeout:(double)arg1 forPlaybackType:(long long)arg2;
- (void)setPausedPlaybackTimeout:(double)arg1 forPlaybackType:(long long)arg2;
- (void)setUnlockedPlaybackTimeout:(double)arg1 forPlaybackType:(long long)arg2;

@end
