/* made by EzioChiu.
 */

@protocol FigCameraViewfinderRemoteObjectCallbacks <NSObject>

@required

- (void)viewfinderSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(NSData *)arg3 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)viewfinderSession:(long long)arg1 previewStreamDidCloseWithStatus:(int)arg2;
- (void)viewfinderSessionDidBegin:(id <FigCameraViewfinderSessionRemoteObject>)arg1 withIdentifier:(long long)arg2;
- (void)viewfinderSessionDidEnd;
- (void)viewfinderSessionPreviewStreamDidOpen:(long long)arg1;

@end
