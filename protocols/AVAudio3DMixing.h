/* made by EzioChiu.
 */

@protocol AVAudio3DMixing <NSObject>

@required

- (float)obstruction;
- (float)occlusion;
- (struct AVAudio3DPoint { float x1; float x2; float x3; })position;
- (float)rate;
- (long long)renderingAlgorithm;
- (float)reverbBlend;
- (void)setObstruction:(float)arg1;
- (void)setOcclusion:(float)arg1;
- (void)setPosition:(struct AVAudio3DPoint { float x1; float x2; float x3; })arg1;
- (void)setRate:(float)arg1;
- (void)setRenderingAlgorithm:(long long)arg1;
- (void)setReverbBlend:(float)arg1;

@end
