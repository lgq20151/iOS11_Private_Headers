/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface MSCameraDevice : ICCameraDevice {
    void * _msCameraProperties;
}

- (void)dealloc;
- (bool)eject;
- (void)enumerateContent;
- (void)finalize;
- (id)initWithVolumePath:(id)arg1 mediaPaths:(id)arg2;
- (unsigned long long)itemsInFolder:(char *)arg1;

@end
