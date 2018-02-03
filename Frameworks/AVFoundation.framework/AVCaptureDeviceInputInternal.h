/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceInputInternal : NSObject {
    bool  authorizedForCamera;
    AVCaptureDevice * device;
    <AVCallbackCancellation> * deviceOpenCallbackInvoker;
    NSArray * ports;
    bool  ready;
    AVWeakReference * weakReference;
}

- (void)dealloc;

@end
