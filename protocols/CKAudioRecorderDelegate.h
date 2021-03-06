/* made by EzioChiu.
 */

@protocol CKAudioRecorderDelegate <NSObject>

@required

- (void)audioRecorderDidUpdateAveragePower:(float)arg1;
- (void)audioRecorderRecordingDidChange:(CKAudioRecorder *)arg1;
- (void)audioRecorderRecordingDidFail:(CKAudioRecorder *)arg1;

@end
