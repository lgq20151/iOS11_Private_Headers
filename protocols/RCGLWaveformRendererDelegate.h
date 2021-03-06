/* made by EzioChiu.
 */

@protocol RCGLWaveformRendererDelegate <NSObject>

@required

- (void)waveformRenderer:(RCGLWaveformRenderer *)arg1 contentWidthDidChange:(double)arg2;
- (void)waveformRendererContentDidFinishLoading:(RCGLWaveformRenderer *)arg1;
- (void)waveformRendererDidSynchronizeToDisplayLink:(RCGLWaveformRenderer *)arg1;

@end
