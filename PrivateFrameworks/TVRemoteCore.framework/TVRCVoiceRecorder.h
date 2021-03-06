/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRCVoiceRecorder : NSObject {
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
    }  _audioFormat;
    struct AudioQueueBuffer {} * _buffers;
    <TVRCVoiceRecorderDelegate> * _delegate;
    struct OpaqueAudioQueue { } * _queue;
    bool  _recordsAutomatically;
    long long  _state;
}

@property (nonatomic) <TVRCVoiceRecorderDelegate> *delegate;
@property (nonatomic) bool recordsAutomatically;

- (void).cxx_destruct;
- (unsigned int)_audioBufferSizeForDuration:(double)arg1;
- (bool)_createAudioBuffers;
- (bool)_createAudioQueue;
- (id)_init;
- (bool)_startAudioQueue;
- (bool)_startAudioSession;
- (void)_stopAndDisposeAudioQueue;
- (void)_stopAudioSession;
- (id)audioFormatSettings;
- (void)dealloc;
- (id)delegate;
- (bool)recordsAutomatically;
- (void)setDelegate:(id)arg1;
- (void)setRecordsAutomatically:(bool)arg1;
- (void)start;
- (void)stop;

@end
