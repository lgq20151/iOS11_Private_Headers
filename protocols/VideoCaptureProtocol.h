/* made by EzioChiu.
 */

@protocol VideoCaptureProtocol

@required

- (int)copyColorInfo:(const struct __CFDictionary {}**)arg1;
- (NSString *)getCameraUID;
- (bool)isFrontCamera;
- (bool)isPreviewRunning;
- (int)setCameraWithUID:(NSString *)arg1;
- (int)setFrameRate:(int)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;
- (int)stop:(bool)arg1;

@optional

- (bool)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;
- (int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3;
- (int)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(bool)arg3;
- (int)previewSlot;

@end
