/* made by EzioChiu.
 */

@protocol AVConferencePreviewClientDelegate

@optional

- (void)cameraDidBecomeAvailableForUniqueID:(NSString *)arg1;
- (void)didChangeLocalScreenAttributes:(VideoAttributes *)arg1;
- (void)didChangeLocalVideoAttributes:(VideoAttributes *)arg1;
- (void)didGetSnapshot:(NSData *)arg1;
- (void)didPausePreview;
- (void)didReceiveCommError;
- (void)didReceiveErrorFromCameraUniqueID:(NSString *)arg1 error:(NSError *)arg2;
- (void)didReceiveFirstPreviewFrameFromCamera:(unsigned int)arg1;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(NSString *)arg1;
- (void)didStartPreview;
- (void)didStopPreview;

@end