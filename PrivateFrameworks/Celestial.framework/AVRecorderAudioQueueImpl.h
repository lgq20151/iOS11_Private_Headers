/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVRecorderAudioQueueImpl : NSObject <AVRecorderImpl> {
    NSMutableDictionary * _attributes;
    unsigned int  _audioCodec;
    struct OpaqueAudioFileID { } * _audioFile;
    struct AudioQueueLevelMeterState { float x1; float x2; } * _audioLevels;
    struct AudioQueueLevelMeterState { float x1; float x2; } * _audioLevelsDB;
    struct OpaqueAudioQueue { } * _audioQueue;
    bool  _bufferUsed;
    struct AudioQueueBuffer {} * _buffers;
    unsigned int  _fileType;
    bool  _haveRecordedMaxPCMFrames;
    bool  _isActive;
    bool  _isRecording;
    bool  _isWriting;
    long long  _maxPCMFramesToRecord;
    unsigned int  _numDeviceChannels;
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
    }  _recordingFormat;
    unsigned long long  _totalBytesRecorded;
    unsigned long long  _totalFramesRecorded;
    unsigned long long  _totalPacketsRecorded;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)activate:(id*)arg1;
- (id)attributeForKey:(id)arg1;
- (bool)audioCurrentAverageDecibelLevels:(float*)arg1 andPeakDecibelLevels:(float*)arg2;
- (bool)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2;
- (bool)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2 useDB:(bool)arg3;
- (unsigned long long)audioNumDeviceChannels;
- (bool)autoFocusAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)copyEncoderCookieToFile;
- (void)deactivate;
- (void)dealloc;
- (id)filePath;
- (void)haveABuffer:(struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1 withTimeStamp:(const struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; }*)arg2 andNumPackets:(unsigned int)arg3 andPacketDescs:(const struct AudioStreamPacketDescription { long long x1; unsigned int x2; unsigned int x3; }*)arg4;
- (id)init;
- (id)initWithAttributes:(id)arg1;
- (bool)isActive;
- (bool)isRecording;
- (float)micVolume;
- (double)recordedDuration;
- (long long)recordedFileSizeInBytes;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setFilePath:(id)arg1;
- (void)setMicVolume:(float)arg1;
- (bool)start;
- (void)stop;
- (bool)takePhoto;

@end
