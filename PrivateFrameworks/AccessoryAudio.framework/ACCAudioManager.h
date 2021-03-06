/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryAudio.framework/AccessoryAudio
 */

@interface ACCAudioManager : NSObject <ACCAudioClientProtocol> {
    ACCAudioClient * _audioClient;
}

@property (nonatomic, retain) ACCAudioClient *audioClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedACCAudioManager;

- (void).cxx_destruct;
- (id)audioClient;
- (id)deviceAudioStates;
- (id)init;
- (void)setAudioClient:(id)arg1;
- (bool)setDigitalAudioSampleRate:(unsigned int)arg1;
- (unsigned int)supportedDigitalAudioSampleRate:(unsigned int)arg1;
- (id)supportedDigitalAudioSampleRates;

@end
