/* made by EzioChiu.
 */

@protocol AVRecorderImpl <NSObject>

@required

- (bool)activate:(id*)arg1;
- (id)attributeForKey:(NSString *)arg1;
- (bool)audioCurrentAverageDecibelLevels:(float*)arg1 andPeakDecibelLevels:(float*)arg2;
- (bool)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2;
- (unsigned long long)audioNumDeviceChannels;
- (bool)autoFocusAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)deactivate;
- (NSURL *)filePath;
- (id)init;
- (bool)isActive;
- (bool)isRecording;
- (float)micVolume;
- (double)recordedDuration;
- (long long)recordedFileSizeInBytes;
- (void)setAttribute:(id)arg1 forKey:(NSString *)arg2;
- (void)setFilePath:(NSURL *)arg1;
- (void)setMicVolume:(float)arg1;
- (bool)start;
- (void)stop;
- (bool)takePhoto;

@end