/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
 */

@interface EchoCodecConfiguration : AUPasscodeCodecConfiguration <NSCopying> {
    float  _delayForBit0;
    float  _delayForBit1;
    unsigned long long  _frameSize;
    unsigned long long  _numFrameRepeat;
    unsigned long long  _randomSeed;
    float  _syncDetectThreshold;
}

@property (nonatomic) float delayForBit0;
@property (nonatomic) float delayForBit1;
@property (nonatomic) unsigned long long frameSize;
@property (nonatomic) unsigned long long numFrameRepeat;
@property (nonatomic) unsigned long long randomSeed;
@property (nonatomic) float syncDetectThreshold;

+ (bool)supportsSecureCoding;

- (id)commandLineOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)delayForBit0;
- (float)delayForBit1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frameSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommandLineArgs:(id)arg1;
- (unsigned long long)numFrameRepeat;
- (unsigned long long)randomSeed;
- (void)setDefaultValues;
- (void)setDelayForBit0:(float)arg1;
- (void)setDelayForBit1:(float)arg1;
- (void)setFrameSize:(unsigned long long)arg1;
- (void)setNumFrameRepeat:(unsigned long long)arg1;
- (void)setRandomSeed:(unsigned long long)arg1;
- (void)setSyncDetectThreshold:(float)arg1;
- (float)syncDetectThreshold;

@end