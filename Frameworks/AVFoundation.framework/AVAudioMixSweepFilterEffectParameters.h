/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAudioMixSweepFilterEffectParameters : AVAudioMixEffectParameters {
    AVAudioMixSweepFilterEffectParametersInternal * _sweepFilterAudioEffect;
}

@property (nonatomic, readonly) float bypassThreshold;
@property (nonatomic, readonly) int maximumCutOffFrequency;
@property (nonatomic, readonly) int minimumCutOffFrequency;
@property (nonatomic, readonly) float sweepValue;

+ (id)sweepFilterEffectParametersWithMinimumCutOffFrequency:(unsigned int)arg1 maximumCutOffFrequency:(unsigned int)arg2 bypassThreshold:(float)arg3 sweepValue:(float)arg4;

- (float)bypassThreshold;
- (void)dealloc;
- (void)finalize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMinimumCutOffFrequency:(unsigned int)arg1 maximumCutOffFrequency:(unsigned int)arg2 bypassThreshold:(float)arg3 sweepValue:(float)arg4;
- (bool)isEqual:(id)arg1;
- (int)maximumCutOffFrequency;
- (int)minimumCutOffFrequency;
- (id)sweepFilterEffectWithSweepValue:(float)arg1;
- (float)sweepValue;

@end
