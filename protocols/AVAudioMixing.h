/* made by EzioChiu.
 */

@protocol AVAudioMixing <AVAudioStereoMixing, AVAudio3DMixing>

@required

- (AVAudioMixingDestination *)destinationForMixer:(AVAudioNode *)arg1 bus:(unsigned long long)arg2;
- (void)setVolume:(float)arg1;
- (float)volume;

@end
