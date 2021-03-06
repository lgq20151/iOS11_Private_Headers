/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface CMVideoCaptureCameraTorchManager : NSObject <AXCameraTorchManager> {
    struct tagHANDLE { int x1; } * _hCMCapture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)closeTorchDevice;
- (id)initWithVideoCaptureHandle:(struct tagHANDLE { int x1; }*)arg1;
- (bool)openTorchDevice;
- (void)turnTorchOff;
- (void)turnTorchOn;

@end
