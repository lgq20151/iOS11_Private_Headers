/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCameraViewfinderServer : NSObject <FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableArray * _connections;
    NSXPCListener * _serviceListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)start;

- (id)_remoteViewfinderForLocalViewfinder:(id)arg1;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2;
- (void)cameraViewfinderSession:(id)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)cameraViewfinderSession:(id)arg1 previewStreamDidCloseWithStatus:(int)arg2;
- (void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
