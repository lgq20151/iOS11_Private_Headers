/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAudioSettingsValueConstrainer : NSObject {
    NSMutableArray * _applicableOutputDataRatesForSampleRate;
    NSMutableArray * _applicableOutputSampleRatesForDataRate;
    struct OpaqueAudioConverter { } * _audioConverter;
    NSMutableArray * _availableOutputDataRates;
    NSArray * _availableOutputSampleRates;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _inputASBD;
    bool  _needApplicableParameters;
    bool  _needAvailableSampleRates;
    bool  _needNewConverter;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _outputASBD;
    unsigned int  _outputDataRate;
}

@property (nonatomic) unsigned int outputBitsPerChannel;
@property (nonatomic) unsigned int outputChannelCount;
@property (nonatomic) unsigned int outputDataRate;
@property (nonatomic) unsigned int outputFormat;
@property (nonatomic) unsigned int outputFormatFlags;
@property (nonatomic) float outputSampleRate;

- (void)_bringUpToDate;
- (void)_buildApplicableDataRatesForSampleRates;
- (void)_buildAudioConverter;
- (void)_buildAvailableSampleRates;
- (id)_fetchApplicableOutputDataRates;
- (float)_getAvailableOutputSampleRateFor:(float)arg1 rounding:(long long)arg2;
- (float)applicableOutputSampleRateForDesiredSampleRate:(float)arg1 rounding:(long long)arg2;
- (unsigned int)availableOutputChannelCountForDesiredChannelCount:(unsigned int)arg1 rounding:(long long)arg2;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (unsigned int)outputBitsPerChannel;
- (unsigned int)outputChannelCount;
- (unsigned int)outputDataRate;
- (unsigned int)outputFormat;
- (unsigned int)outputFormatFlags;
- (float)outputSampleRate;
- (void)setInputPropertiesFromASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setOutputBitsPerChannel:(unsigned int)arg1;
- (void)setOutputChannelCount:(unsigned int)arg1;
- (void)setOutputDataRate:(unsigned int)arg1;
- (void)setOutputFormat:(unsigned int)arg1;
- (void)setOutputFormatFlags:(unsigned int)arg1;
- (void)setOutputSampleRate:(float)arg1;

@end
