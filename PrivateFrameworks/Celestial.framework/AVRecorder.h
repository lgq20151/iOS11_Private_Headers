/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVRecorder : NSObject {
    struct AVRecorderPrivate { id x1; } * _priv;
}

- (bool)activate:(id*)arg1;
- (id)attributeForKey:(id)arg1;
- (bool)audioCurrentAverageDecibelLevels:(float*)arg1 andPeakDecibelLevels:(float*)arg2;
- (bool)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2;
- (unsigned long long)audioNumDeviceChannels;
- (bool)autoFocusAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)deactivate;
- (void)dealloc;
- (id)filePath;
- (void)implNotification:(id)arg1;
- (id)init;
- (bool)isActive;
- (bool)isRecording;
- (void)makeError:(id*)arg1 withDescription:(id)arg2 code:(int)arg3;
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
